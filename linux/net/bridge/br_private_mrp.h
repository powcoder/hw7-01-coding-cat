https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */

#ifndef _BR_PRIVATE_MRP_H_
#define _BR_PRIVATE_MRP_H_

#include "br_private.h"
#include <uapi/linux/mrp_bridge.h>

struct br_mrp {
	/* list of mrp instances */
	struct list_head		list;

	struct net_bridge_port __rcu	*p_port;
	struct net_bridge_port __rcu	*s_port;
	struct net_bridge_port __rcu	*i_port;

	u32				ring_id;
	u16				in_id;
	u16				prio;

	enum br_mrp_ring_role_type	ring_role;
	u8				ring_role_offloaded;
	enum br_mrp_ring_state_type	ring_state;
	u32				ring_transitions;

	enum br_mrp_in_role_type	in_role;
	u8				in_role_offloaded;
	enum br_mrp_in_state_type	in_state;
	u32				in_transitions;

	struct delayed_work		test_work;
	u32				test_interval;
	unsigned long			test_end;
	u32				test_count_miss;
	u32				test_max_miss;
	bool				test_monitor;

	struct delayed_work		in_test_work;
	u32				in_test_interval;
	unsigned long			in_test_end;
	u32				in_test_count_miss;
	u32				in_test_max_miss;

	u32				seq_id;

	struct rcu_head			rcu;
};

/* br_mrp.c */
int br_mrp_add(struct net_bridge *br, struct br_mrp_instance *instance);
int br_mrp_del(struct net_bridge *br, struct br_mrp_instance *instance);
int br_mrp_set_port_state(struct net_bridge_port *p,
			  enum br_mrp_port_state_type state);
int br_mrp_set_port_role(struct net_bridge_port *p,
			 enum br_mrp_port_role_type role);
int br_mrp_set_ring_state(struct net_bridge *br,
			  struct br_mrp_ring_state *state);
int br_mrp_set_ring_role(struct net_bridge *br, struct br_mrp_ring_role *role);
int br_mrp_start_test(struct net_bridge *br, struct br_mrp_start_test *test);
int br_mrp_set_in_state(struct net_bridge *br, struct br_mrp_in_state *state);
int br_mrp_set_in_role(struct net_bridge *br, struct br_mrp_in_role *role);
int br_mrp_start_in_test(struct net_bridge *br,
			 struct br_mrp_start_in_test *test);

/* br_mrp_switchdev.c */
int br_mrp_switchdev_add(struct net_bridge *br, struct br_mrp *mrp);
int br_mrp_switchdev_del(struct net_bridge *br, struct br_mrp *mrp);
int br_mrp_switchdev_set_ring_role(struct net_bridge *br, struct br_mrp *mrp,
				   enum br_mrp_ring_role_type role);
int br_mrp_switchdev_set_ring_state(struct net_bridge *br, struct br_mrp *mrp,
				    enum br_mrp_ring_state_type state);
int br_mrp_switchdev_send_ring_test(struct net_bridge *br, struct br_mrp *mrp,
				    u32 interval, u8 max_miss, u32 period,
				    bool monitor);
int br_mrp_port_switchdev_set_state(struct net_bridge_port *p, u32 state);
int br_mrp_port_switchdev_set_role(struct net_bridge_port *p,
				   enum br_mrp_port_role_type role);
int br_mrp_switchdev_set_in_role(struct net_bridge *br, struct br_mrp *mrp,
				 u16 in_id, u32 ring_id,
				 enum br_mrp_in_role_type role);
int br_mrp_switchdev_set_in_state(struct net_bridge *br, struct br_mrp *mrp,
				  enum br_mrp_in_state_type state);
int br_mrp_switchdev_send_in_test(struct net_bridge *br, struct br_mrp *mrp,
				  u32 interval, u8 max_miss, u32 period);

/* br_mrp_netlink.c  */
int br_mrp_ring_port_open(struct net_device *dev, u8 loc);
int br_mrp_in_port_open(struct net_device *dev, u8 loc);

#endif /* _BR_PRIVATE_MRP_H */
