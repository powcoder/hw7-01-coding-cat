https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
// Copyright (C) 2005-2017 Andes Technology Corporation

#ifndef __ASMNDS32_TLB_H
#define __ASMNDS32_TLB_H

#include <asm-generic/tlb.h>

#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, pte)

#endif
