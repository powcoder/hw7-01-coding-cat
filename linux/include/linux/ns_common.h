https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_NS_COMMON_H
#define _LINUX_NS_COMMON_H

struct proc_ns_operations;

struct ns_common {
	atomic_long_t stashed;
	const struct proc_ns_operations *ops;
	unsigned int inum;
};

#endif