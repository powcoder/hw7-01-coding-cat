https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Qualcomm SC7180 interconnect IDs
 *
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SC7180_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SC7180_H

#define MASTER_A1NOC_CFG			0
#define MASTER_QSPI			1
#define MASTER_QUP_0			2
#define MASTER_SDCC_2			3
#define MASTER_EMMC			4
#define MASTER_UFS_MEM			5
#define SLAVE_A1NOC_SNOC			6
#define SLAVE_SERVICE_A1NOC			7

#define MASTER_A2NOC_CFG			0
#define MASTER_QDSS_BAM			1
#define MASTER_QUP_1			2
#define MASTER_USB3			3
#define MASTER_CRYPTO			4
#define MASTER_IPA			5
#define MASTER_QDSS_ETR			6
#define SLAVE_A2NOC_SNOC			7
#define SLAVE_SERVICE_A2NOC			8

#define MASTER_CAMNOC_HF0_UNCOMP			0
#define MASTER_CAMNOC_HF1_UNCOMP			1
#define MASTER_CAMNOC_SF_UNCOMP			2
#define SLAVE_CAMNOC_UNCOMP			3

#define MASTER_NPU			0
#define MASTER_NPU_PROC			1
#define SLAVE_CDSP_GEM_NOC			2

#define MASTER_SNOC_CNOC			0
#define MASTER_QDSS_DAP			1
#define SLAVE_A1NOC_CFG			2
#define SLAVE_A2NOC_CFG			3
#define SLAVE_AHB2PHY_SOUTH			4
#define SLAVE_AHB2PHY_CENTER			5
#define SLAVE_AOP			6
#define SLAVE_AOSS			7
#define SLAVE_BOOT_ROM			8
#define SLAVE_CAMERA_CFG				9
#define SLAVE_CAMERA_NRT_THROTTLE_CFG			10
#define SLAVE_CAMERA_RT_THROTTLE_CFG			11
#define SLAVE_CLK_CTL			12
#define SLAVE_RBCPR_CX_CFG			13
#define SLAVE_RBCPR_MX_CFG			14
#define SLAVE_CRYPTO_0_CFG			15
#define SLAVE_DCC_CFG			16
#define SLAVE_CNOC_DDRSS			17
#define SLAVE_DISPLAY_CFG			18
#define SLAVE_DISPLAY_RT_THROTTLE_CFG			19
#define SLAVE_DISPLAY_THROTTLE_CFG			20
#define SLAVE_EMMC_CFG			21
#define SLAVE_GLM					22
#define SLAVE_GFX3D_CFG			23
#define SLAVE_IMEM_CFG			24
#define SLAVE_IPA_CFG			25
#define SLAVE_CNOC_MNOC_CFG			26
#define SLAVE_CNOC_MSS			27
#define SLAVE_NPU_CFG			28
#define SLAVE_NPU_DMA_BWMON_CFG			29
#define SLAVE_NPU_PROC_BWMON_CFG			30
#define SLAVE_PDM			31
#define SLAVE_PIMEM_CFG			32
#define SLAVE_PRNG			33
#define SLAVE_QDSS_CFG			34
#define SLAVE_QM_CFG			35
#define SLAVE_QM_MPU_CFG			36
#define SLAVE_QSPI_0			37
#define SLAVE_QUP_0			38
#define SLAVE_QUP_1			39
#define SLAVE_SDCC_2			40
#define SLAVE_SECURITY			41
#define SLAVE_SNOC_CFG			42
#define SLAVE_TCSR			43
#define SLAVE_TLMM_WEST			44
#define SLAVE_TLMM_NORTH			45
#define SLAVE_TLMM_SOUTH			46
#define SLAVE_UFS_MEM_CFG			47
#define SLAVE_USB3			48
#define SLAVE_VENUS_CFG			49
#define SLAVE_VENUS_THROTTLE_CFG			50
#define SLAVE_VSENSE_CTRL_CFG			51
#define SLAVE_SERVICE_CNOC			52

#define MASTER_CNOC_DC_NOC			0
#define SLAVE_GEM_NOC_CFG			1
#define SLAVE_LLCC_CFG			2

#define MASTER_APPSS_PROC		0
#define MASTER_SYS_TCU			1
#define MASTER_GEM_NOC_CFG			2
#define MASTER_COMPUTE_NOC			3
#define MASTER_MNOC_HF_MEM_NOC			4
#define MASTER_MNOC_SF_MEM_NOC			5
#define MASTER_SNOC_GC_MEM_NOC			6
#define MASTER_SNOC_SF_MEM_NOC			7
#define MASTER_GFX3D			8
#define SLAVE_MSS_PROC_MS_MPU_CFG			9
#define SLAVE_GEM_NOC_SNOC			10
#define SLAVE_LLCC			11
#define SLAVE_SERVICE_GEM_NOC			12

#define MASTER_IPA_CORE			0
#define SLAVE_IPA_CORE			1

#define MASTER_LLCC			0
#define SLAVE_EBI1			1

#define MASTER_CNOC_MNOC_CFG			0
#define MASTER_CAMNOC_HF0			1
#define MASTER_CAMNOC_HF1			2
#define MASTER_CAMNOC_SF			3
#define MASTER_MDP0			4
#define MASTER_ROTATOR			5
#define MASTER_VIDEO_P0			6
#define MASTER_VIDEO_PROC			7
#define SLAVE_MNOC_HF_MEM_NOC			8
#define SLAVE_MNOC_SF_MEM_NOC			9
#define SLAVE_SERVICE_MNOC			10

#define MASTER_NPU_SYS			0
#define MASTER_NPU_NOC_CFG			1
#define SLAVE_NPU_CAL_DP0			2
#define SLAVE_NPU_CP			3
#define SLAVE_NPU_INT_DMA_BWMON_CFG			4
#define SLAVE_NPU_DPM			5
#define SLAVE_ISENSE_CFG			6
#define SLAVE_NPU_LLM_CFG			7
#define SLAVE_NPU_TCM			8
#define SLAVE_NPU_COMPUTE_NOC			9
#define SLAVE_SERVICE_NPU_NOC			10

#define MASTER_QUP_CORE_0			0
#define MASTER_QUP_CORE_1			1
#define SLAVE_QUP_CORE_0			2
#define SLAVE_QUP_CORE_1			3

#define MASTER_SNOC_CFG			0
#define MASTER_A1NOC_SNOC			1
#define MASTER_A2NOC_SNOC			2
#define MASTER_GEM_NOC_SNOC			3
#define MASTER_PIMEM			4
#define SLAVE_APPSS			5
#define SLAVE_SNOC_CNOC			6
#define SLAVE_SNOC_GEM_NOC_GC			7
#define SLAVE_SNOC_GEM_NOC_SF			8
#define SLAVE_IMEM			9
#define SLAVE_PIMEM			10
#define SLAVE_SERVICE_SNOC			11
#define SLAVE_QDSS_STM			12
#define SLAVE_TCU			13

#endif
