https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-or-later

#include <net/switchdev.h>

#include "br_private_mrp.h"

int br_mrp_switchdev_add(struct net_bridge *br, struct br_mrp *mrp)
{
	struct switchdev_obj_mrp mrp_obj = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_MRP,
		.p_port = rtnl_dereference(mrp->p_port)->dev,
		.s_port = rtnl_dereference(mrp->s_port)->dev,
		.ring_id = mrp->ring_id,
		.prio = mrp->prio,
	};
	int err;

	err = switchdev_port_obj_add(br->dev, &mrp_obj.obj, NULL);

	if (err && err != -EOPNOTSUPP)
		return err;

	return 0;
}

int br_mrp_switchdev_del(struct net_bridge *br, struct br_mrp *mrp)
{
	struct switchdev_obj_mrp mrp_obj = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_MRP,
		.p_port = NULL,
		.s_port = NULL,
		.ring_id = mrp->ring_id,
	};
	int err;

	err = switchdev_port_obj_del(br->dev, &mrp_obj.obj);

	if (err && err != -EOPNOTSUPP)
		return err;

	return 0;
}

int br_mrp_switchdev_set_ring_role(struct net_bridge *br,
				   struct br_mrp *mrp,
				   enum br_mrp_ring_role_type role)
{
	struct switchdev_obj_ring_role_mrp mrp_role = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_RING_ROLE_MRP,
		.ring_role = role,
		.ring_id = mrp->ring_id,
	};
	int err;

	if (role == BR_MRP_RING_ROLE_DISABLED)
		err = switchdev_port_obj_del(br->dev, &mrp_role.obj);
	else
		err = switchdev_port_obj_add(br->dev, &mrp_role.obj, NULL);

	return err;
}

int br_mrp_switchdev_send_ring_test(struct net_bridge *br,
				    struct br_mrp *mrp, u32 interval,
				    u8 max_miss, u32 period,
				    bool monitor)
{
	struct switchdev_obj_ring_test_mrp test = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_RING_TEST_MRP,
		.interval = interval,
		.max_miss = max_miss,
		.ring_id = mrp->ring_id,
		.period = period,
		.monitor = monitor,
	};
	int err;

	if (interval == 0)
		err = switchdev_port_obj_del(br->dev, &test.obj);
	else
		err = switchdev_port_obj_add(br->dev, &test.obj, NULL);

	return err;
}

int br_mrp_switchdev_set_ring_state(struct net_bridge *br,
				    struct br_mrp *mrp,
				    enum br_mrp_ring_state_type state)
{
	struct switchdev_obj_ring_state_mrp mrp_state = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_RING_STATE_MRP,
		.ring_state = state,
		.ring_id = mrp->ring_id,
	};
	int err;

	err = switchdev_port_obj_add(br->dev, &mrp_state.obj, NULL);

	if (err && err != -EOPNOTSUPP)
		return err;

	return 0;
}

int br_mrp_switchdev_set_in_role(struct net_bridge *br, struct br_mrp *mrp,
				 u16 in_id, u32 ring_id,
				 enum br_mrp_in_role_type role)
{
	struct switchdev_obj_in_role_mrp mrp_role = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_IN_ROLE_MRP,
		.in_role = role,
		.in_id = mrp->in_id,
		.ring_id = mrp->ring_id,
		.i_port = rtnl_dereference(mrp->i_port)->dev,
	};
	int err;

	if (role == BR_MRP_IN_ROLE_DISABLED)
		err = switchdev_port_obj_del(br->dev, &mrp_role.obj);
	else
		err = switchdev_port_obj_add(br->dev, &mrp_role.obj, NULL);

	return err;
}

int br_mrp_switchdev_set_in_state(struct net_bridge *br, struct br_mrp *mrp,
				  enum br_mrp_in_state_type state)
{
	struct switchdev_obj_in_state_mrp mrp_state = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_IN_STATE_MRP,
		.in_state = state,
		.in_id = mrp->in_id,
	};
	int err;

	err = switchdev_port_obj_add(br->dev, &mrp_state.obj, NULL);

	if (err && err != -EOPNOTSUPP)
		return err;

	return 0;
}

int br_mrp_switchdev_send_in_test(struct net_bridge *br, struct br_mrp *mrp,
				  u32 interval, u8 max_miss, u32 period)
{
	struct switchdev_obj_in_test_mrp test = {
		.obj.orig_dev = br->dev,
		.obj.id = SWITCHDEV_OBJ_ID_IN_TEST_MRP,
		.interval = interval,
		.max_miss = max_miss,
		.in_id = mrp->in_id,
		.period = period,
	};
	int err;

	if (interval == 0)
		err = switchdev_port_obj_del(br->dev, &test.obj);
	else
		err = switchdev_port_obj_add(br->dev, &test.obj, NULL);

	return err;
}

int br_mrp_port_switchdev_set_state(struct net_bridge_port *p, u32 state)
{
	struct switchdev_attr attr = {
		.orig_dev = p->dev,
		.id = SWITCHDEV_ATTR_ID_PORT_STP_STATE,
		.u.stp_state = state,
	};
	int err;

	err = switchdev_port_attr_set(p->dev, &attr);
	if (err && err != -EOPNOTSUPP)
		br_warn(p->br, "error setting offload MRP state on port %u(%s)\n",
			(unsigned int)p->port_no, p->dev->name);

	return err;
}

int br_mrp_port_switchdev_set_role(struct net_bridge_port *p,
				   enum br_mrp_port_role_type role)
{
	struct switchdev_attr attr = {
		.orig_dev = p->dev,
		.id = SWITCHDEV_ATTR_ID_MRP_PORT_ROLE,
		.u.mrp_port_role = role,
	};
	int err;

	err = switchdev_port_attr_set(p->dev, &attr);
	if (err && err != -EOPNOTSUPP)
		return err;

	return 0;
}
