https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef XMON_BPTS_H
#define XMON_BPTS_H

#define NBPTS	256
#ifndef __ASSEMBLY__
#include <asm/inst.h>
#define BPT_SIZE	(sizeof(struct ppc_inst) * 2)
#define BPT_WORDS	(BPT_SIZE / sizeof(struct ppc_inst))

extern unsigned int bpt_table[NBPTS * BPT_WORDS];
#endif /* __ASSEMBLY__ */

#endif /* XMON_BPTS_H */
