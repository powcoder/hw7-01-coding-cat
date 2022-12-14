https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
// Copyright (C) 2018 Hangzhou C-SKY Microsystems co.,ltd.

#ifndef __ASM_CSKY_PERF_EVENT_H
#define __ASM_CSKY_PERF_EVENT_H

#include <abi/regdef.h>

#define perf_arch_fetch_caller_regs(regs, __ip) { \
	(regs)->pc = (__ip); \
	regs_fp(regs) = (unsigned long) __builtin_frame_address(0); \
	asm volatile("mov %0, sp\n":"=r"((regs)->usp)); \
}

#endif /* __ASM_PERF_EVENT_ELF_H */
