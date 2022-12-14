https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef INCLUDE_MMU_GENERAL_H_
#define INCLUDE_MMU_GENERAL_H_

#define PAGE_SHIFT_4KB			12
#define PAGE_SHIFT_2MB			21
#define PAGE_SIZE_2MB			(_AC(1, UL) << PAGE_SHIFT_2MB)
#define PAGE_SIZE_4KB			(_AC(1, UL) << PAGE_SHIFT_4KB)

#define PAGE_PRESENT_MASK		0x0000000000001ull
#define SWAP_OUT_MASK			0x0000000000004ull
#define LAST_MASK			0x0000000000800ull
#define HOP0_MASK			0x3000000000000ull
#define HOP1_MASK			0x0FF8000000000ull
#define HOP2_MASK			0x0007FC0000000ull
#define HOP3_MASK			0x000003FE00000ull
#define HOP4_MASK			0x00000001FF000ull
#define FLAGS_MASK			0x0000000000FFFull

#define HOP0_SHIFT			48
#define HOP1_SHIFT			39
#define HOP2_SHIFT			30
#define HOP3_SHIFT			21
#define HOP4_SHIFT			12

#define MMU_ARCH_5_HOPS			5

#define HOP_PHYS_ADDR_MASK		(~FLAGS_MASK)

#define HL_PTE_SIZE			sizeof(u64)
#define HOP_TABLE_SIZE			PAGE_SIZE_4KB
#define PTE_ENTRIES_IN_HOP		(HOP_TABLE_SIZE / HL_PTE_SIZE)
#define HOP0_TABLES_TOTAL_SIZE		(HOP_TABLE_SIZE * MAX_ASID)

#define MMU_HOP0_PA43_12_SHIFT		12
#define MMU_HOP0_PA49_44_SHIFT		(12 + 32)

#define MMU_CONFIG_TIMEOUT_USEC		2000 /* 2 ms */

#endif /* INCLUDE_MMU_GENERAL_H_ */
