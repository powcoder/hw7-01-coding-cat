https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_VDSOCLOCKSOURCE_H
#define __ASM_VDSOCLOCKSOURCE_H

#define VDSO_ARCH_CLOCKMODES					\
	/* vdso clocksource for both 32 and 64bit tasks */	\
	VDSO_CLOCKMODE_ARCHTIMER,				\
	/* vdso clocksource for 64bit tasks only */		\
	VDSO_CLOCKMODE_ARCHTIMER_NOCOMPAT

#endif
