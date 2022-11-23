https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef _UAPI_LINUX_BPFILTER_H
#define _UAPI_LINUX_BPFILTER_H

#include <linux/if.h>

enum {
	BPFILTER_IPT_SO_SET_REPLACE = 64,
	BPFILTER_IPT_SO_SET_ADD_COUNTERS = 65,
	BPFILTER_IPT_SET_MAX,
};

enum {
	BPFILTER_IPT_SO_GET_INFO = 64,
	BPFILTER_IPT_SO_GET_ENTRIES = 65,
	BPFILTER_IPT_SO_GET_REVISION_MATCH = 66,
	BPFILTER_IPT_SO_GET_REVISION_TARGET = 67,
	BPFILTER_IPT_GET_MAX,
};

#endif /* _UAPI_LINUX_BPFILTER_H */
