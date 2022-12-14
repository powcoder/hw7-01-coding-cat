https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * livepatch.h - x86-specific Kernel Live Patching Core
 *
 * Copyright (C) 2014 Seth Jennings <sjenning@redhat.com>
 * Copyright (C) 2014 SUSE
 */

#ifndef _ASM_X86_LIVEPATCH_H
#define _ASM_X86_LIVEPATCH_H

#include <asm/setup.h>
#include <linux/ftrace.h>

static inline void klp_arch_set_pc(struct pt_regs *regs, unsigned long ip)
{
	regs->ip = ip;
}

#endif /* _ASM_X86_LIVEPATCH_H */
