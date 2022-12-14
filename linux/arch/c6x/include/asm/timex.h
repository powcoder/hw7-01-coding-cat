https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 *  Port on Texas Instruments TMS320C6x architecture
 *
 *  Copyright (C) 2004, 2009, 2010, 2011 Texas Instruments Incorporated
 *  Author: Aurelien Jacquiot (aurelien.jacquiot@jaluna.com)
 *
 *  Modified for 2.6.34: Mark Salter <msalter@redhat.com>
 */
#ifndef _ASM_C6X_TIMEX_H
#define _ASM_C6X_TIMEX_H

#define CLOCK_TICK_RATE ((1000 * 1000000UL) / 6)

/* 64-bit timestamp */
typedef unsigned long long cycles_t;

static inline cycles_t get_cycles(void)
{
	unsigned l, h;

	asm volatile (" dint\n"
		      " mvc .s2 TSCL,%0\n"
		      " mvc .s2 TSCH,%1\n"
		      " rint\n"
		      : "=b"(l), "=b"(h));
	return ((cycles_t)h << 32) | l;
}

#endif /* _ASM_C6X_TIMEX_H */
