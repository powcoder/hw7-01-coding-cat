https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Qualcomm SM8250 interconnect IDs
 *
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SM8250_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SM8250_H

#define MASTER_A1NOC_CFG		0
#define MASTER_QSPI_0			1
#define MASTER_QUP_1			2
#define MASTER_QUP_2			3
#define MASTER_TSIF			4
#define MASTER_PCIE_2			5
#define MASTER_SDCC_4			6
#define MASTER_UFS_MEM			7
#define MASTER_USB3			8
#define MASTER_USB3_1			9
#define A1NOC_SNOC_SLV			10
#define SLAVE_ANOC_PCIE_GEM_NOC_1	11
#define SLAVE_SERVICE_A1NOC		12

#define MASTER_A2NOC_CFG		0
#define MASTER_QDSS_BAM			1
#define MASTER_QUP_0			2
#define MASTER_CNOC_A2NOC		3
#define MASTER_CRYPTO_CORE_0		4
#define MASTER_IPA			5
#define MASTER_PCIE			6
#define MASTER_PCIE_1			7
#define MASTER_QDSS_ETR			8
#define MASTER_SDCC_2			9
#define MASTER_UFS_CARD			10
#define A2NOC_SNOC_SLV			11
#define SLAVE_ANOC_PCIE_GEM_NOC		12
#define SLAVE_SERVICE_A2NOC		13

#define MASTER_NPU			0
#define SLAVE_CDSP_MEM_NOC		1

#define SNOC_CNOC_MAS			0
#define MASTER_QDSS_DAP			1
#define SLAVE_A1NOC_CFG			2
#define SLAVE_A2NOC_CFG			3
#define SLAVE_AHB2PHY_SOUTH		4
#define SLAVE_AHB2PHY_NORTH		5
#define SLAVE_AOSS			6
#define SLAVE_CAMERA_CFG		7
#define SLAVE_CLK_CTL			8
#define SLAVE_CDSP_CFG			9
#define SLAVE_RBCPR_CX_CFG		10
#define SLAVE_RBCPR_MMCX_CFG		11
#define SLAVE_RBCPR_MX_CFG		12
#define SLAVE_CRYPTO_0_CFG		13
#define SLAVE_CX_RDPM			14
#define SLAVE_DCC_CFG			15
#define SLAVE_CNOC_DDRSS		16
#define SLAVE_DISPLAY_CFG		17
#define SLAVE_GRAPHICS_3D_CFG		18
#define SLAVE_IMEM_CFG			19
#define SLAVE_IPA_CFG			20
#define SLAVE_IPC_ROUTER_CFG		21
#define SLAVE_LPASS			22
#define SLAVE_CNOC_MNOC_CFG		23
#define SLAVE_NPU_CFG			24
#define SLAVE_PCIE_0_CFG		25
#define SLAVE_PCIE_1_CFG		26
#define SLAVE_PCIE_2_CFG		27
#define SLAVE_PDM			28
#define SLAVE_PIMEM_CFG			29
#define SLAVE_PRNG			30
#define SLAVE_QDSS_CFG			31
#define SLAVE_QSPI_0			32
#define SLAVE_QUP_0			33
#define SLAVE_QUP_1			34
#define SLAVE_QUP_2			35
#define SLAVE_SDCC_2			36
#define SLAVE_SDCC_4			37
#define SLAVE_SNOC_CFG			38
#define SLAVE_TCSR			39
#define SLAVE_TLMM_NORTH		40
#define SLAVE_TLMM_SOUTH		41
#define SLAVE_TLMM_WEST			42
#define SLAVE_TSIF			43
#define SLAVE_UFS_CARD_CFG		44
#define SLAVE_UFS_MEM_CFG		45
#define SLAVE_USB3			46
#define SLAVE_USB3_1			47
#define SLAVE_VENUS_CFG			48
#define SLAVE_VSENSE_CTRL_CFG		49
#define SLAVE_CNOC_A2NOC		50
#define SLAVE_SERVICE_CNOC		51

#define MASTER_CNOC_DC_NOC		0
#define SLAVE_LLCC_CFG			1
#define SLAVE_GEM_NOC_CFG		2

#define MASTER_GPU_TCU			0
#define MASTER_SYS_TCU			1
#define MASTER_AMPSS_M0			2
#define MASTER_GEM_NOC_CFG		3
#define MASTER_COMPUTE_NOC		4
#define MASTER_GRAPHICS_3D		5
#define MASTER_MNOC_HF_MEM_NOC		6
#define MASTER_MNOC_SF_MEM_NOC		7
#define MASTER_ANOC_PCIE_GEM_NOC	8
#define MASTER_SNOC_GC_MEM_NOC		9
#define MASTER_SNOC_SF_MEM_NOC		10
#define SLAVE_GEM_NOC_SNOC		11
#define SLAVE_LLCC			12
#define SLAVE_MEM_NOC_PCIE_SNOC		13
#define SLAVE_SERVICE_GEM_NOC_1		14
#define SLAVE_SERVICE_GEM_NOC_2		15
#define SLAVE_SERVICE_GEM_NOC		16

#define MASTER_IPA_CORE			0
#define SLAVE_IPA_CORE			1

#define MASTER_LLCC			0
#define SLAVE_EBI_CH0			1

#define MASTER_CNOC_MNOC_CFG		0
#define MASTER_CAMNOC_HF		1
#define MASTER_CAMNOC_ICP		2
#define MASTER_CAMNOC_SF		3
#define MASTER_VIDEO_P0			4
#define MASTER_VIDEO_P1			5
#define MASTER_VIDEO_PROC		6
#define MASTER_MDP_PORT0		7
#define MASTER_MDP_PORT1		8
#define MASTER_ROTATOR			9
#define SLAVE_MNOC_HF_MEM_NOC		10
#define SLAVE_MNOC_SF_MEM_NOC		11
#define SLAVE_SERVICE_MNOC		12

#define MASTER_NPU_SYS			0
#define MASTER_NPU_CDP			1
#define MASTER_NPU_NOC_CFG		2
#define SLAVE_NPU_CAL_DP0		3
#define SLAVE_NPU_CAL_DP1		4
#define SLAVE_NPU_CP			5
#define SLAVE_NPU_INT_DMA_BWMON_CFG	6
#define SLAVE_NPU_DPM			7
#define SLAVE_ISENSE_CFG		8
#define SLAVE_NPU_LLM_CFG		9
#define SLAVE_NPU_TCM			10
#define SLAVE_NPU_COMPUTE_NOC		11
#define SLAVE_SERVICE_NPU_NOC		12

#define MASTER_SNOC_CFG			0
#define A1NOC_SNOC_MAS			1
#define A2NOC_SNOC_MAS			2
#define MASTER_GEM_NOC_SNOC		3
#define MASTER_GEM_NOC_PCIE_SNOC	4
#define MASTER_PIMEM			5
#define MASTER_GIC			6
#define SLAVE_APPSS			7
#define SNOC_CNOC_SLV			8
#define SLAVE_SNOC_GEM_NOC_GC		9
#define SLAVE_SNOC_GEM_NOC_SF		10
#define SLAVE_OCIMEM			11
#define SLAVE_PIMEM			12
#define SLAVE_SERVICE_SNOC		13
#define SLAVE_PCIE_0			14
#define SLAVE_PCIE_1			15
#define SLAVE_PCIE_2			16
#define SLAVE_QDSS_STM			17
#define SLAVE_TCU			18

#endif
