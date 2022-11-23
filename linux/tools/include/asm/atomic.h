https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __TOOLS_LINUX_ASM_ATOMIC_H
#define __TOOLS_LINUX_ASM_ATOMIC_H

#if defined(__i386__) || defined(__x86_64__)
#include "../../arch/x86/include/asm/atomic.h"
#else
#include <asm-generic/atomic-gcc.h>
#endif

#endif /* __TOOLS_LINUX_ASM_ATOMIC_H */
