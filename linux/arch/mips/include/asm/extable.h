https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_EXTABLE_H
#define _ASM_EXTABLE_H

struct exception_table_entry
{
	unsigned long insn;
	unsigned long nextinsn;
};

struct pt_regs;
extern int fixup_exception(struct pt_regs *regs);

#endif
