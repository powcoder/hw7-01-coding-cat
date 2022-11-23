https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_BARRIER_H
#define __ASM_BARRIER_H

#define mb() asm volatile ("l.msync" ::: "memory")

#include <asm-generic/barrier.h>

#endif /* __ASM_BARRIER_H */
