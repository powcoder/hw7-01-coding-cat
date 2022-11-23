https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* Copyright (c) 2017 Facebook
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 */

/* This program shows clang/llvm is able to generate code pattern
 * like:
 *   _tcp_send_active_reset:
 *      0:       bf 16 00 00 00 00 00 00         r6 = r1
 *    ......
 *    335:       b7 01 00 00 0f 00 00 00         r1 = 15
 *    336:       05 00 48 00 00 00 00 00         goto 72
 *
 *   LBB0_3:
 *    337:       b7 01 00 00 01 00 00 00         r1 = 1
 *    338:       63 1a d0 ff 00 00 00 00         *(u32 *)(r10 - 48) = r1
 *    408:       b7 01 00 00 03 00 00 00         r1 = 3
 *
 *   LBB0_4:
 *    409:       71 a2 fe ff 00 00 00 00         r2 = *(u8 *)(r10 - 2)
 *    410:       bf a7 00 00 00 00 00 00         r7 = r10
 *    411:       07 07 00 00 b8 ff ff ff         r7 += -72
 *    412:       bf 73 00 00 00 00 00 00         r3 = r7
 *    413:       0f 13 00 00 00 00 00 00         r3 += r1
 *    414:       73 23 2d 00 00 00 00 00         *(u8 *)(r3 + 45) = r2
 *
 * From the above code snippet, the code generated by the compiler
 * is reasonable. The "r1" is assigned to different values in basic
 * blocks "_tcp_send_active_reset" and "LBB0_3", and used in "LBB0_4".
 * The verifier should be able to handle such code patterns.
 */
#include <string.h>
#include <linux/bpf.h>
#include <linux/ipv6.h>
#include <linux/version.h>
#include <sys/socket.h>
#include <bpf/bpf_helpers.h>

#define _(P) ({typeof(P) val = 0; bpf_probe_read_kernel(&val, sizeof(val), &P); val;})
#define TCP_ESTATS_MAGIC 0xBAADBEEF

/* This test case needs "sock" and "pt_regs" data structure.
 * Recursively, "sock" needs "sock_common" and "inet_sock".
 * However, this is a unit test case only for
 * verifier purpose without bpf program execution.
 * We can safely mock much simpler data structures, basically
 * only taking the necessary fields from kernel headers.
 */
typedef __u32 __bitwise __portpair;
typedef __u64 __bitwise __addrpair;

struct sock_common {
	unsigned short		skc_family;
	union {
		__addrpair	skc_addrpair;
		struct {
			__be32	skc_daddr;
			__be32	skc_rcv_saddr;
		};
	};
	union {
		__portpair	skc_portpair;
		struct {
			__be16	skc_dport;
			__u16	skc_num;
		};
	};
	struct in6_addr		skc_v6_daddr;
	struct in6_addr		skc_v6_rcv_saddr;
};

struct sock {
	struct sock_common	__sk_common;
#define sk_family		__sk_common.skc_family
#define sk_v6_daddr		__sk_common.skc_v6_daddr
#define sk_v6_rcv_saddr		__sk_common.skc_v6_rcv_saddr
};

struct inet_sock {
	struct sock		sk;
#define inet_daddr		sk.__sk_common.skc_daddr
#define inet_dport		sk.__sk_common.skc_dport
	__be32			inet_saddr;
	__be16			inet_sport;
};

struct pt_regs {
	long di;
};

static inline struct inet_sock *inet_sk(const struct sock *sk)
{
	return (struct inet_sock *)sk;
}

/* Define various data structures for state recording.
 * Some fields are not used due to test simplification.
 */
enum tcp_estats_addrtype {
	TCP_ESTATS_ADDRTYPE_IPV4 = 1,
	TCP_ESTATS_ADDRTYPE_IPV6 = 2
};

enum tcp_estats_event_type {
	TCP_ESTATS_ESTABLISH,
	TCP_ESTATS_PERIODIC,
	TCP_ESTATS_TIMEOUT,
	TCP_ESTATS_RETRANSMIT_TIMEOUT,
	TCP_ESTATS_RETRANSMIT_OTHER,
	TCP_ESTATS_SYN_RETRANSMIT,
	TCP_ESTATS_SYNACK_RETRANSMIT,
	TCP_ESTATS_TERM,
	TCP_ESTATS_TX_RESET,
	TCP_ESTATS_RX_RESET,
	TCP_ESTATS_WRITE_TIMEOUT,
	TCP_ESTATS_CONN_TIMEOUT,
	TCP_ESTATS_ACK_LATENCY,
	TCP_ESTATS_NEVENTS,
};

struct tcp_estats_event {
	int pid;
	int cpu;
	unsigned long ts;
	unsigned int magic;
	enum tcp_estats_event_type event_type;
};

/* The below data structure is packed in order for
 * llvm compiler to generate expected code.
 */
struct tcp_estats_conn_id {
	unsigned int localaddressType;
	struct {
		unsigned char data[16];
	} localaddress;
	struct {
		unsigned char data[16];
	} remaddress;
	unsigned short    localport;
	unsigned short    remport;
} __attribute__((__packed__));

struct tcp_estats_basic_event {
	struct tcp_estats_event event;
	struct tcp_estats_conn_id conn_id;
};

struct {
	__uint(type, BPF_MAP_TYPE_HASH);
	__uint(max_entries, 1024);
	__type(key, __u32);
	__type(value, struct tcp_estats_basic_event);
} ev_record_map SEC(".maps");

struct dummy_tracepoint_args {
	unsigned long long pad;
	struct sock *sock;
};

static __always_inline void tcp_estats_ev_init(struct tcp_estats_event *event,
					       enum tcp_estats_event_type type)
{
	event->magic = TCP_ESTATS_MAGIC;
	event->ts = bpf_ktime_get_ns();
	event->event_type = type;
}

static __always_inline void unaligned_u32_set(unsigned char *to, __u8 *from)
{
	to[0] = _(from[0]);
	to[1] = _(from[1]);
	to[2] = _(from[2]);
	to[3] = _(from[3]);
}

static __always_inline void conn_id_ipv4_init(struct tcp_estats_conn_id *conn_id,
					      __be32 *saddr, __be32 *daddr)
{
	conn_id->localaddressType = TCP_ESTATS_ADDRTYPE_IPV4;

	unaligned_u32_set(conn_id->localaddress.data, (__u8 *)saddr);
	unaligned_u32_set(conn_id->remaddress.data, (__u8 *)daddr);
}

static __always_inline void conn_id_ipv6_init(struct tcp_estats_conn_id *conn_id,
					      __be32 *saddr, __be32 *daddr)
{
	conn_id->localaddressType = TCP_ESTATS_ADDRTYPE_IPV6;

	unaligned_u32_set(conn_id->localaddress.data, (__u8 *)saddr);
	unaligned_u32_set(conn_id->localaddress.data + sizeof(__u32),
			  (__u8 *)(saddr + 1));
	unaligned_u32_set(conn_id->localaddress.data + sizeof(__u32) * 2,
			  (__u8 *)(saddr + 2));
	unaligned_u32_set(conn_id->localaddress.data + sizeof(__u32) * 3,
			  (__u8 *)(saddr + 3));

	unaligned_u32_set(conn_id->remaddress.data,
			  (__u8 *)(daddr));
	unaligned_u32_set(conn_id->remaddress.data + sizeof(__u32),
			  (__u8 *)(daddr + 1));
	unaligned_u32_set(conn_id->remaddress.data + sizeof(__u32) * 2,
			  (__u8 *)(daddr + 2));
	unaligned_u32_set(conn_id->remaddress.data + sizeof(__u32) * 3,
			  (__u8 *)(daddr + 3));
}

static __always_inline void tcp_estats_conn_id_init(struct tcp_estats_conn_id *conn_id,
						    struct sock *sk)
{
	conn_id->localport = _(inet_sk(sk)->inet_sport);
	conn_id->remport = _(inet_sk(sk)->inet_dport);

	if (_(sk->sk_family) == AF_INET6)
		conn_id_ipv6_init(conn_id,
				  sk->sk_v6_rcv_saddr.s6_addr32,
				  sk->sk_v6_daddr.s6_addr32);
	else
		conn_id_ipv4_init(conn_id,
				  &inet_sk(sk)->inet_saddr,
				  &inet_sk(sk)->inet_daddr);
}

static __always_inline void tcp_estats_init(struct sock *sk,
					    struct tcp_estats_event *event,
					    struct tcp_estats_conn_id *conn_id,
					    enum tcp_estats_event_type type)
{
	tcp_estats_ev_init(event, type);
	tcp_estats_conn_id_init(conn_id, sk);
}

static __always_inline void send_basic_event(struct sock *sk,
					     enum tcp_estats_event_type type)
{
	struct tcp_estats_basic_event ev;
	__u32 key = bpf_get_prandom_u32();

	memset(&ev, 0, sizeof(ev));
	tcp_estats_init(sk, &ev.event, &ev.conn_id, type);
	bpf_map_update_elem(&ev_record_map, &key, &ev, BPF_ANY);
}

SEC("dummy_tracepoint")
int _dummy_tracepoint(struct dummy_tracepoint_args *arg)
{
	if (!arg->sock)
		return 0;

	send_basic_event(arg->sock, TCP_ESTATS_TX_RESET);
	return 0;
}

char _license[] SEC("license") = "GPL";
__u32 _version SEC("version") = 1; /* ignored by tracepoints, required by libbpf.a */
