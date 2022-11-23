https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_MMIOWB_H
#define _ASM_MMIOWB_H

#include <asm/io.h>

#define mmiowb()	iobarrier_w()

#include <asm-generic/mmiowb.h>

#endif	/* _ASM_MMIOWB_H */
