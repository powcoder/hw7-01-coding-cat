https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __TOOLS_LINUX_ASM_ALPHA_BARRIER_H
#define __TOOLS_LINUX_ASM_ALPHA_BARRIER_H

#define mb()	__asm__ __volatile__("mb": : :"memory")
#define rmb()	__asm__ __volatile__("mb": : :"memory")
#define wmb()	__asm__ __volatile__("wmb": : :"memory")

#endif		/* __TOOLS_LINUX_ASM_ALPHA_BARRIER_H */
