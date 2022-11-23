https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-only
/*
 *
 * Copyright (C) 2015 Naveen N. Rao, IBM Corporation
 */

#include <asm/trace_clock.h>
#include <asm/time.h>

u64 notrace trace_clock_ppc_tb(void)
{
	return get_tb();
}
