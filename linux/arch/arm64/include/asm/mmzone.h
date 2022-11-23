https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_MMZONE_H
#define __ASM_MMZONE_H

#ifdef CONFIG_NUMA

#include <asm/numa.h>

extern struct pglist_data *node_data[];
#define NODE_DATA(nid)		(node_data[(nid)])

#endif /* CONFIG_NUMA */
#endif /* __ASM_MMZONE_H */
