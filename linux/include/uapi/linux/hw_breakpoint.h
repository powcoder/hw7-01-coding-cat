https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI_LINUX_HW_BREAKPOINT_H
#define _UAPI_LINUX_HW_BREAKPOINT_H

enum {
	HW_BREAKPOINT_LEN_1 = 1,
	HW_BREAKPOINT_LEN_2 = 2,
	HW_BREAKPOINT_LEN_3 = 3,
	HW_BREAKPOINT_LEN_4 = 4,
	HW_BREAKPOINT_LEN_5 = 5,
	HW_BREAKPOINT_LEN_6 = 6,
	HW_BREAKPOINT_LEN_7 = 7,
	HW_BREAKPOINT_LEN_8 = 8,
};

enum {
	HW_BREAKPOINT_EMPTY	= 0,
	HW_BREAKPOINT_R		= 1,
	HW_BREAKPOINT_W		= 2,
	HW_BREAKPOINT_RW	= HW_BREAKPOINT_R | HW_BREAKPOINT_W,
	HW_BREAKPOINT_X		= 4,
	HW_BREAKPOINT_INVALID   = HW_BREAKPOINT_RW | HW_BREAKPOINT_X,
};

enum bp_type_idx {
	TYPE_INST 	= 0,
#ifdef CONFIG_HAVE_MIXED_BREAKPOINTS_REGS
	TYPE_DATA	= 0,
#else
	TYPE_DATA	= 1,
#endif
	TYPE_MAX
};

#endif /* _UAPI_LINUX_HW_BREAKPOINT_H */