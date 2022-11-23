https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __ASM_REGS_OPS_H
#define __ASM_REGS_OPS_H

#define mfcr(reg)		\
({				\
	unsigned int tmp;	\
	asm volatile(		\
	"mfcr %0, "reg"\n"	\
	: "=r"(tmp)		\
	:			\
	: "memory");		\
	tmp;			\
})

#define mtcr(reg, val)		\
({				\
	asm volatile(		\
	"mtcr %0, "reg"\n"	\
	:			\
	: "r"(val)		\
	: "memory");		\
})

#endif /* __ASM_REGS_OPS_H */
