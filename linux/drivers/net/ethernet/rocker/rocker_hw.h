https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * drivers/net/ethernet/rocker/rocker_hw.h - Rocker switch device driver
 * Copyright (c) 2014-2016 Jiri Pirko <jiri@mellanox.com>
 * Copyright (c) 2014 Scott Feldman <sfeldma@gmail.com>
 */

#ifndef _ROCKER_HW_H
#define _ROCKER_HW_H

#include <linux/types.h>

/* Return codes */
enum {
	ROCKER_OK = 0,
	ROCKER_ENOENT = 2,
	ROCKER_ENXIO = 6,
	ROCKER_ENOMEM = 12,
	ROCKER_EEXIST = 17,
	ROCKER_EINVAL = 22,
	ROCKER_EMSGSIZE = 90,
	ROCKER_ENOTSUP = 95,
	ROCKER_ENOBUFS = 105,
};

#define ROCKER_FP_PORTS_MAX 62

#define PCI_DEVICE_ID_REDHAT_ROCKER	0x0006

#define ROCKER_PCI_BAR0_SIZE		0x2000

/* MSI-X vectors */
enum {
	ROCKER_MSIX_VEC_CMD,
	ROCKER_MSIX_VEC_EVENT,
	ROCKER_MSIX_VEC_TEST,
	ROCKER_MSIX_VEC_RESERVED0,
	__ROCKER_MSIX_VEC_TX,
	__ROCKER_MSIX_VEC_RX,
#define ROCKER_MSIX_VEC_TX(port) \
	(__ROCKER_MSIX_VEC_TX + ((port) * 2))
#define ROCKER_MSIX_VEC_RX(port) \
	(__ROCKER_MSIX_VEC_RX + ((port) * 2))
#define ROCKER_MSIX_VEC_COUNT(portcnt) \
	(ROCKER_MSIX_VEC_RX((portcnt - 1)) + 1)
};

/* Rocker bogus registers */
#define ROCKER_BOGUS_REG0		0x0000
#define ROCKER_BOGUS_REG1		0x0004
#define ROCKER_BOGUS_REG2		0x0008
#define ROCKER_BOGUS_REG3		0x000c

/* Rocker test registers */
#define ROCKER_TEST_REG			0x0010
#define ROCKER_TEST_REG64		0x0018  /* 8-byte */
#define ROCKER_TEST_IRQ			0x0020
#define ROCKER_TEST_DMA_ADDR		0x0028  /* 8-byte */
#define ROCKER_TEST_DMA_SIZE		0x0030
#define ROCKER_TEST_DMA_CTRL		0x0034

/* Rocker test register ctrl */
#define ROCKER_TEST_DMA_CTRL_CLEAR	BIT(0)
#define ROCKER_TEST_DMA_CTRL_FILL	BIT(1)
#define ROCKER_TEST_DMA_CTRL_INVERT	BIT(2)

/* Rocker DMA ring register offsets */
#define ROCKER_DMA_DESC_ADDR(x)		(0x1000 + (x) * 32)  /* 8-byte */
#define ROCKER_DMA_DESC_SIZE(x)		(0x1008 + (x) * 32)
#define ROCKER_DMA_DESC_HEAD(x)		(0x100c + (x) * 32)
#define ROCKER_DMA_DESC_TAIL(x)		(0x1010 + (x) * 32)
#define ROCKER_DMA_DESC_CTRL(x)		(0x1014 + (x) * 32)
#define ROCKER_DMA_DESC_CREDITS(x)	(0x1018 + (x) * 32)
#define ROCKER_DMA_DESC_RES1(x)		(0x101c + (x) * 32)

/* Rocker dma ctrl register bits */
#define ROCKER_DMA_DESC_CTRL_RESET	BIT(0)

/* Rocker DMA ring types */
enum rocker_dma_type {
	ROCKER_DMA_CMD,
	ROCKER_DMA_EVENT,
	__ROCKER_DMA_TX,
	__ROCKER_DMA_RX,
#define ROCKER_DMA_TX(port) (__ROCKER_DMA_TX + (port) * 2)
#define ROCKER_DMA_RX(port) (__ROCKER_DMA_RX + (port) * 2)
};

/* Rocker DMA ring size limits and default sizes */
#define ROCKER_DMA_SIZE_MIN		2ul
#define ROCKER_DMA_SIZE_MAX		65536ul
#define ROCKER_DMA_CMD_DEFAULT_SIZE	32ul
#define ROCKER_DMA_EVENT_DEFAULT_SIZE	32ul
#define ROCKER_DMA_TX_DEFAULT_SIZE	64ul
#define ROCKER_DMA_TX_DESC_SIZE		256
#define ROCKER_DMA_RX_DEFAULT_SIZE	64ul
#define ROCKER_DMA_RX_DESC_SIZE		256

/* Rocker DMA descriptor struct */
struct rocker_desc {
	u64 buf_addr;
	u64 cookie;
	u16 buf_size;
	u16 tlv_size;
	u16 resv[5];
	u16 comp_err;
};

#define ROCKER_DMA_DESC_COMP_ERR_GEN	BIT(15)

/* Rocker DMA TLV struct */
struct rocker_tlv {
	u32 type;
	u16 len;
};

/* TLVs */
enum {
	ROCKER_TLV_CMD_UNSPEC,
	ROCKER_TLV_CMD_TYPE,	/* u16 */
	ROCKER_TLV_CMD_INFO,	/* nest */

	__ROCKER_TLV_CMD_MAX,
	ROCKER_TLV_CMD_MAX = __ROCKER_TLV_CMD_MAX - 1,
};

enum {
	ROCKER_TLV_CMD_TYPE_UNSPEC,
	ROCKER_TLV_CMD_TYPE_GET_PORT_SETTINGS,
	ROCKER_TLV_CMD_TYPE_SET_PORT_SETTINGS,
	ROCKER_TLV_CMD_TYPE_OF_DPA_FLOW_ADD,
	ROCKER_TLV_CMD_TYPE_OF_DPA_FLOW_MOD,
	ROCKER_TLV_CMD_TYPE_OF_DPA_FLOW_DEL,
	ROCKER_TLV_CMD_TYPE_OF_DPA_FLOW_GET_STATS,
	ROCKER_TLV_CMD_TYPE_OF_DPA_GROUP_ADD,
	ROCKER_TLV_CMD_TYPE_OF_DPA_GROUP_MOD,
	ROCKER_TLV_CMD_TYPE_OF_DPA_GROUP_DEL,
	ROCKER_TLV_CMD_TYPE_OF_DPA_GROUP_GET_STATS,

	ROCKER_TLV_CMD_TYPE_CLEAR_PORT_STATS,
	ROCKER_TLV_CMD_TYPE_GET_PORT_STATS,

	__ROCKER_TLV_CMD_TYPE_MAX,
	ROCKER_TLV_CMD_TYPE_MAX = __ROCKER_TLV_CMD_TYPE_MAX - 1,
};

enum {
	ROCKER_TLV_CMD_PORT_SETTINGS_UNSPEC,
	ROCKER_TLV_CMD_PORT_SETTINGS_PPORT,		/* u32 */
	ROCKER_TLV_CMD_PORT_SETTINGS_SPEED,		/* u32 */
	ROCKER_TLV_CMD_PORT_SETTINGS_DUPLEX,		/* u8 */
	ROCKER_TLV_CMD_PORT_SETTINGS_AUTONEG,		/* u8 */
	ROCKER_TLV_CMD_PORT_SETTINGS_MACADDR,		/* binary */
	ROCKER_TLV_CMD_PORT_SETTINGS_MODE,		/* u8 */
	ROCKER_TLV_CMD_PORT_SETTINGS_LEARNING,		/* u8 */
	ROCKER_TLV_CMD_PORT_SETTINGS_PHYS_NAME,		/* binary */
	ROCKER_TLV_CMD_PORT_SETTINGS_MTU,		/* u16 */

	__ROCKER_TLV_CMD_PORT_SETTINGS_MAX,
	ROCKER_TLV_CMD_PORT_SETTINGS_MAX =
			__ROCKER_TLV_CMD_PORT_SETTINGS_MAX - 1,
};

enum {
	ROCKER_TLV_CMD_PORT_STATS_UNSPEC,
	ROCKER_TLV_CMD_PORT_STATS_PPORT,            /* u32 */

	ROCKER_TLV_CMD_PORT_STATS_RX_PKTS,          /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_RX_BYTES,         /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_RX_DROPPED,       /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_RX_ERRORS,        /* u64 */

	ROCKER_TLV_CMD_PORT_STATS_TX_PKTS,          /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_TX_BYTES,         /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_TX_DROPPED,       /* u64 */
	ROCKER_TLV_CMD_PORT_STATS_TX_ERRORS,        /* u64 */

	__ROCKER_TLV_CMD_PORT_STATS_MAX,
	ROCKER_TLV_CMD_PORT_STATS_MAX = __ROCKER_TLV_CMD_PORT_STATS_MAX - 1,
};

enum rocker_port_mode {
	ROCKER_PORT_MODE_OF_DPA,
};

enum {
	ROCKER_TLV_EVENT_UNSPEC,
	ROCKER_TLV_EVENT_TYPE,	/* u16 */
	ROCKER_TLV_EVENT_INFO,	/* nest */

	__ROCKER_TLV_EVENT_MAX,
	ROCKER_TLV_EVENT_MAX = __ROCKER_TLV_EVENT_MAX - 1,
};

enum {
	ROCKER_TLV_EVENT_TYPE_UNSPEC,
	ROCKER_TLV_EVENT_TYPE_LINK_CHANGED,
	ROCKER_TLV_EVENT_TYPE_MAC_VLAN_SEEN,

	__ROCKER_TLV_EVENT_TYPE_MAX,
	ROCKER_TLV_EVENT_TYPE_MAX = __ROCKER_TLV_EVENT_TYPE_MAX - 1,
};

enum {
	ROCKER_TLV_EVENT_LINK_CHANGED_UNSPEC,
	ROCKER_TLV_EVENT_LINK_CHANGED_PPORT,	/* u32 */
	ROCKER_TLV_EVENT_LINK_CHANGED_LINKUP,	/* u8 */

	__ROCKER_TLV_EVENT_LINK_CHANGED_MAX,
	ROCKER_TLV_EVENT_LINK_CHANGED_MAX =
			__ROCKER_TLV_EVENT_LINK_CHANGED_MAX - 1,
};

enum {
	ROCKER_TLV_EVENT_MAC_VLAN_UNSPEC,
	ROCKER_TLV_EVENT_MAC_VLAN_PPORT,	/* u32 */
	ROCKER_TLV_EVENT_MAC_VLAN_MAC,		/* binary */
	ROCKER_TLV_EVENT_MAC_VLAN_VLAN_ID,	/* __be16 */

	__ROCKER_TLV_EVENT_MAC_VLAN_MAX,
	ROCKER_TLV_EVENT_MAC_VLAN_MAX = __ROCKER_TLV_EVENT_MAC_VLAN_MAX - 1,
};

enum {
	ROCKER_TLV_RX_UNSPEC,
	ROCKER_TLV_RX_FLAGS,		/* u16, see ROCKER_RX_FLAGS_ */
	ROCKER_TLV_RX_CSUM,		/* u16 */
	ROCKER_TLV_RX_FRAG_ADDR,	/* u64 */
	ROCKER_TLV_RX_FRAG_MAX_LEN,	/* u16 */
	ROCKER_TLV_RX_FRAG_LEN,		/* u16 */

	__ROCKER_TLV_RX_MAX,
	ROCKER_TLV_RX_MAX = __ROCKER_TLV_RX_MAX - 1,
};

#define ROCKER_RX_FLAGS_IPV4			BIT(0)
#define ROCKER_RX_FLAGS_IPV6			BIT(1)
#define ROCKER_RX_FLAGS_CSUM_CALC		BIT(2)
#define ROCKER_RX_FLAGS_IPV4_CSUM_GOOD		BIT(3)
#define ROCKER_RX_FLAGS_IP_FRAG			BIT(4)
#define ROCKER_RX_FLAGS_TCP			BIT(5)
#define ROCKER_RX_FLAGS_UDP			BIT(6)
#define ROCKER_RX_FLAGS_TCP_UDP_CSUM_GOOD	BIT(7)
#define ROCKER_RX_FLAGS_FWD_OFFLOAD		BIT(8)

enum {
	ROCKER_TLV_TX_UNSPEC,
	ROCKER_TLV_TX_OFFLOAD,		/* u8, see ROCKER_TX_OFFLOAD_ */
	ROCKER_TLV_TX_L3_CSUM_OFF,	/* u16 */
	ROCKER_TLV_TX_TSO_MSS,		/* u16 */
	ROCKER_TLV_TX_TSO_HDR_LEN,	/* u16 */
	ROCKER_TLV_TX_FRAGS,		/* array */

	__ROCKER_TLV_TX_MAX,
	ROCKER_TLV_TX_MAX = __ROCKER_TLV_TX_MAX - 1,
};

#define ROCKER_TX_OFFLOAD_NONE		0
#define ROCKER_TX_OFFLOAD_IP_CSUM	1
#define ROCKER_TX_OFFLOAD_TCP_UDP_CSUM	2
#define ROCKER_TX_OFFLOAD_L3_CSUM	3
#define ROCKER_TX_OFFLOAD_TSO		4

#define ROCKER_TX_FRAGS_MAX		16

enum {
	ROCKER_TLV_TX_FRAG_UNSPEC,
	ROCKER_TLV_TX_FRAG,		/* nest */

	__ROCKER_TLV_TX_FRAG_MAX,
	ROCKER_TLV_TX_FRAG_MAX = __ROCKER_TLV_TX_FRAG_MAX - 1,
};

enum {
	ROCKER_TLV_TX_FRAG_ATTR_UNSPEC,
	ROCKER_TLV_TX_FRAG_ATTR_ADDR,	/* u64 */
	ROCKER_TLV_TX_FRAG_ATTR_LEN,	/* u16 */

	__ROCKER_TLV_TX_FRAG_ATTR_MAX,
	ROCKER_TLV_TX_FRAG_ATTR_MAX = __ROCKER_TLV_TX_FRAG_ATTR_MAX - 1,
};

/* cmd info nested for OF-DPA msgs */
enum {
	ROCKER_TLV_OF_DPA_UNSPEC,
	ROCKER_TLV_OF_DPA_TABLE_ID,		/* u16 */
	ROCKER_TLV_OF_DPA_PRIORITY,		/* u32 */
	ROCKER_TLV_OF_DPA_HARDTIME,		/* u32 */
	ROCKER_TLV_OF_DPA_IDLETIME,		/* u32 */
	ROCKER_TLV_OF_DPA_COOKIE,		/* u64 */
	ROCKER_TLV_OF_DPA_IN_PPORT,		/* u32 */
	ROCKER_TLV_OF_DPA_IN_PPORT_MASK,	/* u32 */
	ROCKER_TLV_OF_DPA_OUT_PPORT,		/* u32 */
	ROCKER_TLV_OF_DPA_GOTO_TABLE_ID,	/* u16 */
	ROCKER_TLV_OF_DPA_GROUP_ID,		/* u32 */
	ROCKER_TLV_OF_DPA_GROUP_ID_LOWER,	/* u32 */
	ROCKER_TLV_OF_DPA_GROUP_COUNT,		/* u16 */
	ROCKER_TLV_OF_DPA_GROUP_IDS,		/* u32 array */
	ROCKER_TLV_OF_DPA_VLAN_ID,		/* __be16 */
	ROCKER_TLV_OF_DPA_VLAN_ID_MASK,		/* __be16 */
	ROCKER_TLV_OF_DPA_VLAN_PCP,		/* __be16 */
	ROCKER_TLV_OF_DPA_VLAN_PCP_MASK,	/* __be16 */
	ROCKER_TLV_OF_DPA_VLAN_PCP_ACTION,	/* u8 */
	ROCKER_TLV_OF_DPA_NEW_VLAN_ID,		/* __be16 */
	ROCKER_TLV_OF_DPA_NEW_VLAN_PCP,		/* u8 */
	ROCKER_TLV_OF_DPA_TUNNEL_ID,		/* u32 */
	ROCKER_TLV_OF_DPA_TUNNEL_LPORT,		/* u32 */
	ROCKER_TLV_OF_DPA_ETHERTYPE,		/* __be16 */
	ROCKER_TLV_OF_DPA_DST_MAC,		/* binary */
	ROCKER_TLV_OF_DPA_DST_MAC_MASK,		/* binary */
	ROCKER_TLV_OF_DPA_SRC_MAC,		/* binary */
	ROCKER_TLV_OF_DPA_SRC_MAC_MASK,		/* binary */
	ROCKER_TLV_OF_DPA_IP_PROTO,		/* u8 */
	ROCKER_TLV_OF_DPA_IP_PROTO_MASK,	/* u8 */
	ROCKER_TLV_OF_DPA_IP_DSCP,		/* u8 */
	ROCKER_TLV_OF_DPA_IP_DSCP_MASK,		/* u8 */
	ROCKER_TLV_OF_DPA_IP_DSCP_ACTION,	/* u8 */
	ROCKER_TLV_OF_DPA_NEW_IP_DSCP,		/* u8 */
	ROCKER_TLV_OF_DPA_IP_ECN,		/* u8 */
	ROCKER_TLV_OF_DPA_IP_ECN_MASK,		/* u8 */
	ROCKER_TLV_OF_DPA_DST_IP,		/* __be32 */
	ROCKER_TLV_OF_DPA_DST_IP_MASK,		/* __be32 */
	ROCKER_TLV_OF_DPA_SRC_IP,		/* __be32 */
	ROCKER_TLV_OF_DPA_SRC_IP_MASK,		/* __be32 */
	ROCKER_TLV_OF_DPA_DST_IPV6,		/* binary */
	ROCKER_TLV_OF_DPA_DST_IPV6_MASK,	/* binary */
	ROCKER_TLV_OF_DPA_SRC_IPV6,		/* binary */
	ROCKER_TLV_OF_DPA_SRC_IPV6_MASK,	/* binary */
	ROCKER_TLV_OF_DPA_SRC_ARP_IP,		/* __be32 */
	ROCKER_TLV_OF_DPA_SRC_ARP_IP_MASK,	/* __be32 */
	ROCKER_TLV_OF_DPA_L4_DST_PORT,		/* __be16 */
	ROCKER_TLV_OF_DPA_L4_DST_PORT_MASK,	/* __be16 */
	ROCKER_TLV_OF_DPA_L4_SRC_PORT,		/* __be16 */
	ROCKER_TLV_OF_DPA_L4_SRC_PORT_MASK,	/* __be16 */
	ROCKER_TLV_OF_DPA_ICMP_TYPE,		/* u8 */
	ROCKER_TLV_OF_DPA_ICMP_TYPE_MASK,	/* u8 */
	ROCKER_TLV_OF_DPA_ICMP_CODE,		/* u8 */
	ROCKER_TLV_OF_DPA_ICMP_CODE_MASK,	/* u8 */
	ROCKER_TLV_OF_DPA_IPV6_LABEL,		/* __be32 */
	ROCKER_TLV_OF_DPA_IPV6_LABEL_MASK,	/* __be32 */
	ROCKER_TLV_OF_DPA_QUEUE_ID_ACTION,	/* u8 */
	ROCKER_TLV_OF_DPA_NEW_QUEUE_ID,		/* u8 */
	ROCKER_TLV_OF_DPA_CLEAR_ACTIONS,	/* u32 */
	ROCKER_TLV_OF_DPA_POP_VLAN,		/* u8 */
	ROCKER_TLV_OF_DPA_TTL_CHECK,		/* u8 */
	ROCKER_TLV_OF_DPA_COPY_CPU_ACTION,	/* u8 */

	__ROCKER_TLV_OF_DPA_MAX,
	ROCKER_TLV_OF_DPA_MAX = __ROCKER_TLV_OF_DPA_MAX - 1,
};

/* OF-DPA table IDs */

enum rocker_of_dpa_table_id {
	ROCKER_OF_DPA_TABLE_ID_INGRESS_PORT = 0,
	ROCKER_OF_DPA_TABLE_ID_VLAN = 10,
	ROCKER_OF_DPA_TABLE_ID_TERMINATION_MAC = 20,
	ROCKER_OF_DPA_TABLE_ID_UNICAST_ROUTING = 30,
	ROCKER_OF_DPA_TABLE_ID_MULTICAST_ROUTING = 40,
	ROCKER_OF_DPA_TABLE_ID_BRIDGING = 50,
	ROCKER_OF_DPA_TABLE_ID_ACL_POLICY = 60,
};

/* OF-DPA flow stats */
enum {
	ROCKER_TLV_OF_DPA_FLOW_STAT_UNSPEC,
	ROCKER_TLV_OF_DPA_FLOW_STAT_DURATION,	/* u32 */
	ROCKER_TLV_OF_DPA_FLOW_STAT_RX_PKTS,	/* u64 */
	ROCKER_TLV_OF_DPA_FLOW_STAT_TX_PKTS,	/* u64 */

	__ROCKER_TLV_OF_DPA_FLOW_STAT_MAX,
	ROCKER_TLV_OF_DPA_FLOW_STAT_MAX = __ROCKER_TLV_OF_DPA_FLOW_STAT_MAX - 1,
};

/* OF-DPA group types */
enum rocker_of_dpa_group_type {
	ROCKER_OF_DPA_GROUP_TYPE_L2_INTERFACE = 0,
	ROCKER_OF_DPA_GROUP_TYPE_L2_REWRITE,
	ROCKER_OF_DPA_GROUP_TYPE_L3_UCAST,
	ROCKER_OF_DPA_GROUP_TYPE_L2_MCAST,
	ROCKER_OF_DPA_GROUP_TYPE_L2_FLOOD,
	ROCKER_OF_DPA_GROUP_TYPE_L3_INTERFACE,
	ROCKER_OF_DPA_GROUP_TYPE_L3_MCAST,
	ROCKER_OF_DPA_GROUP_TYPE_L3_ECMP,
	ROCKER_OF_DPA_GROUP_TYPE_L2_OVERLAY,
};

/* OF-DPA group L2 overlay types */
enum rocker_of_dpa_overlay_type {
	ROCKER_OF_DPA_OVERLAY_TYPE_FLOOD_UCAST = 0,
	ROCKER_OF_DPA_OVERLAY_TYPE_FLOOD_MCAST,
	ROCKER_OF_DPA_OVERLAY_TYPE_MCAST_UCAST,
	ROCKER_OF_DPA_OVERLAY_TYPE_MCAST_MCAST,
};

/* OF-DPA group ID encoding */
#define ROCKER_GROUP_TYPE_SHIFT 28
#define ROCKER_GROUP_TYPE_MASK 0xf0000000
#define ROCKER_GROUP_VLAN_SHIFT 16
#define ROCKER_GROUP_VLAN_MASK 0x0fff0000
#define ROCKER_GROUP_PORT_SHIFT 0
#define ROCKER_GROUP_PORT_MASK 0x0000ffff
#define ROCKER_GROUP_TUNNEL_ID_SHIFT 12
#define ROCKER_GROUP_TUNNEL_ID_MASK 0x0ffff000
#define ROCKER_GROUP_SUBTYPE_SHIFT 10
#define ROCKER_GROUP_SUBTYPE_MASK 0x00000c00
#define ROCKER_GROUP_INDEX_SHIFT 0
#define ROCKER_GROUP_INDEX_MASK 0x0000ffff
#define ROCKER_GROUP_INDEX_LONG_SHIFT 0
#define ROCKER_GROUP_INDEX_LONG_MASK 0x0fffffff

#define ROCKER_GROUP_TYPE_GET(group_id) \
	(((group_id) & ROCKER_GROUP_TYPE_MASK) >> ROCKER_GROUP_TYPE_SHIFT)
#define ROCKER_GROUP_TYPE_SET(type) \
	(((type) << ROCKER_GROUP_TYPE_SHIFT) & ROCKER_GROUP_TYPE_MASK)
#define ROCKER_GROUP_VLAN_GET(group_id) \
	(((group_id) & ROCKER_GROUP_VLAN_ID_MASK) >> ROCKER_GROUP_VLAN_ID_SHIFT)
#define ROCKER_GROUP_VLAN_SET(vlan_id) \
	(((vlan_id) << ROCKER_GROUP_VLAN_SHIFT) & ROCKER_GROUP_VLAN_MASK)
#define ROCKER_GROUP_PORT_GET(group_id) \
	(((group_id) & ROCKER_GROUP_PORT_MASK) >> ROCKER_GROUP_PORT_SHIFT)
#define ROCKER_GROUP_PORT_SET(port) \
	(((port) << ROCKER_GROUP_PORT_SHIFT) & ROCKER_GROUP_PORT_MASK)
#define ROCKER_GROUP_INDEX_GET(group_id) \
	(((group_id) & ROCKER_GROUP_INDEX_MASK) >> ROCKER_GROUP_INDEX_SHIFT)
#define ROCKER_GROUP_INDEX_SET(index) \
	(((index) << ROCKER_GROUP_INDEX_SHIFT) & ROCKER_GROUP_INDEX_MASK)
#define ROCKER_GROUP_INDEX_LONG_GET(group_id) \
	(((group_id) & ROCKER_GROUP_INDEX_LONG_MASK) >> \
	 ROCKER_GROUP_INDEX_LONG_SHIFT)
#define ROCKER_GROUP_INDEX_LONG_SET(index) \
	(((index) << ROCKER_GROUP_INDEX_LONG_SHIFT) & \
	 ROCKER_GROUP_INDEX_LONG_MASK)

#define ROCKER_GROUP_NONE 0
#define ROCKER_GROUP_L2_INTERFACE(vlan_id, port) \
	(ROCKER_GROUP_TYPE_SET(ROCKER_OF_DPA_GROUP_TYPE_L2_INTERFACE) |\
	 ROCKER_GROUP_VLAN_SET(ntohs(vlan_id)) | ROCKER_GROUP_PORT_SET(port))
#define ROCKER_GROUP_L2_REWRITE(index) \
	(ROCKER_GROUP_TYPE_SET(ROCKER_OF_DPA_GROUP_TYPE_L2_REWRITE) |\
	 ROCKER_GROUP_INDEX_LONG_SET(index))
#define ROCKER_GROUP_L2_MCAST(vlan_id, index) \
	(ROCKER_GROUP_TYPE_SET(ROCKER_OF_DPA_GROUP_TYPE_L2_MCAST) |\
	 ROCKER_GROUP_VLAN_SET(ntohs(vlan_id)) | ROCKER_GROUP_INDEX_SET(index))
#define ROCKER_GROUP_L2_FLOOD(vlan_id, index) \
	(ROCKER_GROUP_TYPE_SET(ROCKER_OF_DPA_GROUP_TYPE_L2_FLOOD) |\
	ROCKER_GROUP_VLAN_SET(ntohs(vlan_id)) | ROCKER_GROUP_INDEX_SET(index))
#define ROCKER_GROUP_L3_UNICAST(index) \
	(ROCKER_GROUP_TYPE_SET(ROCKER_OF_DPA_GROUP_TYPE_L3_UCAST) |\
	 ROCKER_GROUP_INDEX_LONG_SET(index))

/* Rocker general purpose registers */
#define ROCKER_CONTROL			0x0300
#define ROCKER_PORT_PHYS_COUNT		0x0304
#define ROCKER_PORT_PHYS_LINK_STATUS	0x0310 /* 8-byte */
#define ROCKER_PORT_PHYS_ENABLE		0x0318 /* 8-byte */
#define ROCKER_SWITCH_ID		0x0320 /* 8-byte */

/* Rocker control bits */
#define ROCKER_CONTROL_RESET		BIT(0)

#endif
