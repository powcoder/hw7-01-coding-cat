https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright 2010 Michael Ellerman, IBM Corp.
 */

#include <linux/kernel.h>
#include <linux/jump_label.h>
#include <asm/code-patching.h>
#include <asm/inst.h>

void arch_jump_label_transform(struct jump_entry *entry,
			       enum jump_label_type type)
{
	struct ppc_inst *addr = (struct ppc_inst *)(unsigned long)entry->code;

	if (type == JUMP_LABEL_JMP)
		patch_branch(addr, entry->target, 0);
	else
		patch_instruction(addr, ppc_inst(PPC_INST_NOP));
}
