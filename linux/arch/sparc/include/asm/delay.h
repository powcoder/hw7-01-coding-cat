https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef ___ASM_SPARC_DELAY_H
#define ___ASM_SPARC_DELAY_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/delay_64.h>
#else
#include <asm/delay_32.h>
#endif
#endif
