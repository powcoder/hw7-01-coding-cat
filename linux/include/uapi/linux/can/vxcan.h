https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only WITH Linux-syscall-note */
#ifndef _UAPI_CAN_VXCAN_H
#define _UAPI_CAN_VXCAN_H

enum {
	VXCAN_INFO_UNSPEC,
	VXCAN_INFO_PEER,

	__VXCAN_INFO_MAX
#define VXCAN_INFO_MAX	(__VXCAN_INFO_MAX - 1)
};

#endif