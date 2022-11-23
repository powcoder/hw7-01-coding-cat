https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _CPUIDLE_HALTPOLL_H
#define _CPUIDLE_HALTPOLL_H

#ifdef CONFIG_ARCH_CPUIDLE_HALTPOLL
#include <asm/cpuidle_haltpoll.h>
#else
static inline void arch_haltpoll_enable(unsigned int cpu)
{
}

static inline void arch_haltpoll_disable(unsigned int cpu)
{
}
#endif
#endif
