https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_VERMAGIC_H
#define _ASM_VERMAGIC_H

#ifdef CONFIG_MPROFILE_KERNEL
#define MODULE_ARCH_VERMAGIC_FTRACE	"mprofile-kernel "
#else
#define MODULE_ARCH_VERMAGIC_FTRACE	""
#endif

#ifdef CONFIG_RELOCATABLE
#define MODULE_ARCH_VERMAGIC_RELOCATABLE	"relocatable "
#else
#define MODULE_ARCH_VERMAGIC_RELOCATABLE	""
#endif

#define MODULE_ARCH_VERMAGIC \
		MODULE_ARCH_VERMAGIC_FTRACE MODULE_ARCH_VERMAGIC_RELOCATABLE

#endif /* _ASM_VERMAGIC_H */
