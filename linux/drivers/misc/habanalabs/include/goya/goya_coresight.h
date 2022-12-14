https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef GOYA_CORESIGHT_H
#define GOYA_CORESIGHT_H

enum goya_debug_stm_regs_index {
	GOYA_STM_FIRST = 0,
	GOYA_STM_CPU = GOYA_STM_FIRST,
	GOYA_STM_DMA_CH_0_CS,
	GOYA_STM_DMA_CH_1_CS,
	GOYA_STM_DMA_CH_2_CS,
	GOYA_STM_DMA_CH_3_CS,
	GOYA_STM_DMA_CH_4_CS,
	GOYA_STM_DMA_MACRO_CS,
	GOYA_STM_MME1_SBA,
	GOYA_STM_MME3_SBB,
	GOYA_STM_MME4_WACS2,
	GOYA_STM_MME4_WACS,
	GOYA_STM_MMU_CS,
	GOYA_STM_PCIE,
	GOYA_STM_PSOC,
	GOYA_STM_TPC0_EML,
	GOYA_STM_TPC1_EML,
	GOYA_STM_TPC2_EML,
	GOYA_STM_TPC3_EML,
	GOYA_STM_TPC4_EML,
	GOYA_STM_TPC5_EML,
	GOYA_STM_TPC6_EML,
	GOYA_STM_TPC7_EML,
	GOYA_STM_LAST = GOYA_STM_TPC7_EML
};

enum goya_debug_etf_regs_index {
	GOYA_ETF_FIRST = 0,
	GOYA_ETF_CPU_0 = GOYA_ETF_FIRST,
	GOYA_ETF_CPU_1,
	GOYA_ETF_CPU_TRACE,
	GOYA_ETF_DMA_CH_0_CS,
	GOYA_ETF_DMA_CH_1_CS,
	GOYA_ETF_DMA_CH_2_CS,
	GOYA_ETF_DMA_CH_3_CS,
	GOYA_ETF_DMA_CH_4_CS,
	GOYA_ETF_DMA_MACRO_CS,
	GOYA_ETF_MME1_SBA,
	GOYA_ETF_MME3_SBB,
	GOYA_ETF_MME4_WACS2,
	GOYA_ETF_MME4_WACS,
	GOYA_ETF_MMU_CS,
	GOYA_ETF_PCIE,
	GOYA_ETF_PSOC,
	GOYA_ETF_TPC0_EML,
	GOYA_ETF_TPC1_EML,
	GOYA_ETF_TPC2_EML,
	GOYA_ETF_TPC3_EML,
	GOYA_ETF_TPC4_EML,
	GOYA_ETF_TPC5_EML,
	GOYA_ETF_TPC6_EML,
	GOYA_ETF_TPC7_EML,
	GOYA_ETF_LAST = GOYA_ETF_TPC7_EML
};

enum goya_debug_funnel_regs_index {
	GOYA_FUNNEL_FIRST = 0,
	GOYA_FUNNEL_CPU = GOYA_FUNNEL_FIRST,
	GOYA_FUNNEL_DMA_CH_6_1,
	GOYA_FUNNEL_DMA_MACRO_3_1,
	GOYA_FUNNEL_MME0_RTR,
	GOYA_FUNNEL_MME1_RTR,
	GOYA_FUNNEL_MME2_RTR,
	GOYA_FUNNEL_MME3_RTR,
	GOYA_FUNNEL_MME4_RTR,
	GOYA_FUNNEL_MME5_RTR,
	GOYA_FUNNEL_PCIE,
	GOYA_FUNNEL_PSOC,
	GOYA_FUNNEL_TPC0_EML,
	GOYA_FUNNEL_TPC1_EML,
	GOYA_FUNNEL_TPC1_RTR,
	GOYA_FUNNEL_TPC2_EML,
	GOYA_FUNNEL_TPC2_RTR,
	GOYA_FUNNEL_TPC3_EML,
	GOYA_FUNNEL_TPC3_RTR,
	GOYA_FUNNEL_TPC4_EML,
	GOYA_FUNNEL_TPC4_RTR,
	GOYA_FUNNEL_TPC5_EML,
	GOYA_FUNNEL_TPC5_RTR,
	GOYA_FUNNEL_TPC6_EML,
	GOYA_FUNNEL_TPC6_RTR,
	GOYA_FUNNEL_TPC7_EML,
	GOYA_FUNNEL_LAST = GOYA_FUNNEL_TPC7_EML
};

enum goya_debug_bmon_regs_index {
	GOYA_BMON_FIRST = 0,
	GOYA_BMON_CPU_RD = GOYA_BMON_FIRST,
	GOYA_BMON_CPU_WR,
	GOYA_BMON_DMA_CH_0_0,
	GOYA_BMON_DMA_CH_0_1,
	GOYA_BMON_DMA_CH_1_0,
	GOYA_BMON_DMA_CH_1_1,
	GOYA_BMON_DMA_CH_2_0,
	GOYA_BMON_DMA_CH_2_1,
	GOYA_BMON_DMA_CH_3_0,
	GOYA_BMON_DMA_CH_3_1,
	GOYA_BMON_DMA_CH_4_0,
	GOYA_BMON_DMA_CH_4_1,
	GOYA_BMON_DMA_MACRO_0,
	GOYA_BMON_DMA_MACRO_1,
	GOYA_BMON_DMA_MACRO_2,
	GOYA_BMON_DMA_MACRO_3,
	GOYA_BMON_DMA_MACRO_4,
	GOYA_BMON_DMA_MACRO_5,
	GOYA_BMON_DMA_MACRO_6,
	GOYA_BMON_DMA_MACRO_7,
	GOYA_BMON_MME1_SBA_0,
	GOYA_BMON_MME1_SBA_1,
	GOYA_BMON_MME3_SBB_0,
	GOYA_BMON_MME3_SBB_1,
	GOYA_BMON_MME4_WACS2_0,
	GOYA_BMON_MME4_WACS2_1,
	GOYA_BMON_MME4_WACS2_2,
	GOYA_BMON_MME4_WACS_0,
	GOYA_BMON_MME4_WACS_1,
	GOYA_BMON_MME4_WACS_2,
	GOYA_BMON_MME4_WACS_3,
	GOYA_BMON_MME4_WACS_4,
	GOYA_BMON_MME4_WACS_5,
	GOYA_BMON_MME4_WACS_6,
	GOYA_BMON_MMU_0,
	GOYA_BMON_MMU_1,
	GOYA_BMON_PCIE_MSTR_RD,
	GOYA_BMON_PCIE_MSTR_WR,
	GOYA_BMON_PCIE_SLV_RD,
	GOYA_BMON_PCIE_SLV_WR,
	GOYA_BMON_TPC0_EML_0,
	GOYA_BMON_TPC0_EML_1,
	GOYA_BMON_TPC0_EML_2,
	GOYA_BMON_TPC0_EML_3,
	GOYA_BMON_TPC1_EML_0,
	GOYA_BMON_TPC1_EML_1,
	GOYA_BMON_TPC1_EML_2,
	GOYA_BMON_TPC1_EML_3,
	GOYA_BMON_TPC2_EML_0,
	GOYA_BMON_TPC2_EML_1,
	GOYA_BMON_TPC2_EML_2,
	GOYA_BMON_TPC2_EML_3,
	GOYA_BMON_TPC3_EML_0,
	GOYA_BMON_TPC3_EML_1,
	GOYA_BMON_TPC3_EML_2,
	GOYA_BMON_TPC3_EML_3,
	GOYA_BMON_TPC4_EML_0,
	GOYA_BMON_TPC4_EML_1,
	GOYA_BMON_TPC4_EML_2,
	GOYA_BMON_TPC4_EML_3,
	GOYA_BMON_TPC5_EML_0,
	GOYA_BMON_TPC5_EML_1,
	GOYA_BMON_TPC5_EML_2,
	GOYA_BMON_TPC5_EML_3,
	GOYA_BMON_TPC6_EML_0,
	GOYA_BMON_TPC6_EML_1,
	GOYA_BMON_TPC6_EML_2,
	GOYA_BMON_TPC6_EML_3,
	GOYA_BMON_TPC7_EML_0,
	GOYA_BMON_TPC7_EML_1,
	GOYA_BMON_TPC7_EML_2,
	GOYA_BMON_TPC7_EML_3,
	GOYA_BMON_LAST = GOYA_BMON_TPC7_EML_3
};

enum goya_debug_spmu_regs_index {
	GOYA_SPMU_FIRST = 0,
	GOYA_SPMU_DMA_CH_0_CS = GOYA_SPMU_FIRST,
	GOYA_SPMU_DMA_CH_1_CS,
	GOYA_SPMU_DMA_CH_2_CS,
	GOYA_SPMU_DMA_CH_3_CS,
	GOYA_SPMU_DMA_CH_4_CS,
	GOYA_SPMU_DMA_MACRO_CS,
	GOYA_SPMU_MME1_SBA,
	GOYA_SPMU_MME3_SBB,
	GOYA_SPMU_MME4_WACS2,
	GOYA_SPMU_MME4_WACS,
	GOYA_SPMU_MMU_CS,
	GOYA_SPMU_PCIE,
	GOYA_SPMU_TPC0_EML,
	GOYA_SPMU_TPC1_EML,
	GOYA_SPMU_TPC2_EML,
	GOYA_SPMU_TPC3_EML,
	GOYA_SPMU_TPC4_EML,
	GOYA_SPMU_TPC5_EML,
	GOYA_SPMU_TPC6_EML,
	GOYA_SPMU_TPC7_EML,
	GOYA_SPMU_LAST = GOYA_SPMU_TPC7_EML
};

#endif /* GOYA_CORESIGHT_H */
