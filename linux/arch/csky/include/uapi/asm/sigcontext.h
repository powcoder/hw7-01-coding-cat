https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
// Copyright (C) 2018 Hangzhou C-SKY Microsystems co.,ltd.

#ifndef __ASM_CSKY_SIGCONTEXT_H
#define __ASM_CSKY_SIGCONTEXT_H

#include <asm/ptrace.h>

struct sigcontext {
	struct pt_regs	sc_pt_regs;
	struct user_fp	sc_user_fp;
};

#endif /* __ASM_CSKY_SIGCONTEXT_H */
