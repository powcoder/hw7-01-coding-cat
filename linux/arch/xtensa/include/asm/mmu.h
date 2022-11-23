https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001 - 2013 Tensilica Inc.
 */

#ifndef _XTENSA_MMU_H
#define _XTENSA_MMU_H

#ifndef CONFIG_MMU
#include <asm-generic/mmu.h>
#else

typedef struct {
	unsigned long asid[NR_CPUS];
	unsigned int cpu;
} mm_context_t;

#endif /* CONFIG_MMU */
#endif	/* _XTENSA_MMU_H */
