https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _SPARC64_SYSCALLS_H
#define _SPARC64_SYSCALLS_H

struct pt_regs;

asmlinkage long sparc_fork(struct pt_regs *regs);
asmlinkage long sparc_vfork(struct pt_regs *regs);
asmlinkage long sparc_clone(struct pt_regs *regs);

#endif /* _SPARC64_SYSCALLS_H */
