https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef REBOOT_H
#define REBOOT_H

extern void call_with_stack(void (*fn)(void *), void *arg, void *sp);
extern void _soft_restart(unsigned long addr, bool disable_l2);

#endif
