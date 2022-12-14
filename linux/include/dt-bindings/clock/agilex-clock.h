https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019, Intel Corporation
 */

#ifndef __AGILEX_CLOCK_H
#define __AGILEX_CLOCK_H

/* fixed rate clocks */
#define AGILEX_OSC1			0
#define AGILEX_CB_INTOSC_HS_DIV2_CLK	1
#define AGILEX_CB_INTOSC_LS_CLK		2
#define AGILEX_L4_SYS_FREE_CLK		3
#define AGILEX_F2S_FREE_CLK		4

/* PLL clocks */
#define AGILEX_MAIN_PLL_CLK		5
#define AGILEX_MAIN_PLL_C0_CLK		6
#define AGILEX_MAIN_PLL_C1_CLK		7
#define AGILEX_MAIN_PLL_C2_CLK		8
#define AGILEX_MAIN_PLL_C3_CLK		9
#define AGILEX_PERIPH_PLL_CLK		10
#define AGILEX_PERIPH_PLL_C0_CLK	11
#define AGILEX_PERIPH_PLL_C1_CLK	12
#define AGILEX_PERIPH_PLL_C2_CLK	13
#define AGILEX_PERIPH_PLL_C3_CLK	14
#define AGILEX_MPU_FREE_CLK		15
#define AGILEX_MPU_CCU_CLK		16
#define AGILEX_BOOT_CLK			17

/* fixed factor clocks */
#define AGILEX_L3_MAIN_FREE_CLK		18
#define AGILEX_NOC_FREE_CLK		19
#define AGILEX_S2F_USR0_CLK		20
#define AGILEX_NOC_CLK			21
#define AGILEX_EMAC_A_FREE_CLK		22
#define AGILEX_EMAC_B_FREE_CLK		23
#define AGILEX_EMAC_PTP_FREE_CLK	24
#define AGILEX_GPIO_DB_FREE_CLK		25
#define AGILEX_SDMMC_FREE_CLK		26
#define AGILEX_S2F_USER0_FREE_CLK	27
#define AGILEX_S2F_USER1_FREE_CLK	28
#define AGILEX_PSI_REF_FREE_CLK		29

/* Gate clocks */
#define AGILEX_MPU_CLK			30
#define AGILEX_MPU_L2RAM_CLK		31
#define AGILEX_MPU_PERIPH_CLK		32
#define AGILEX_L4_MAIN_CLK		33
#define AGILEX_L4_MP_CLK		34
#define AGILEX_L4_SP_CLK		35
#define AGILEX_CS_AT_CLK		36
#define AGILEX_CS_TRACE_CLK		37
#define AGILEX_CS_PDBG_CLK		38
#define AGILEX_CS_TIMER_CLK		39
#define AGILEX_S2F_USER0_CLK		40
#define AGILEX_EMAC0_CLK		41
#define AGILEX_EMAC1_CLK		43
#define AGILEX_EMAC2_CLK		44
#define AGILEX_EMAC_PTP_CLK		45
#define AGILEX_GPIO_DB_CLK		46
#define AGILEX_NAND_CLK			47
#define AGILEX_PSI_REF_CLK		48
#define AGILEX_S2F_USER1_CLK		49
#define AGILEX_SDMMC_CLK		50
#define AGILEX_SPI_M_CLK		51
#define AGILEX_USB_CLK			52
#define AGILEX_NAND_X_CLK		53
#define AGILEX_NAND_ECC_CLK		54
#define AGILEX_NUM_CLKS			55

#endif	/* __AGILEX_CLOCK_H */
