https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Qualcomm SDM845 interconnect IDs
 *
 * Copyright (c) 2018, Linaro Ltd.
 * Author: Georgi Djakov <georgi.djakov@linaro.org>
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SDM845_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SDM845_H

#define MASTER_A1NOC_CFG		0
#define MASTER_TSIF			1
#define MASTER_SDCC_2			2
#define MASTER_SDCC_4			3
#define MASTER_UFS_CARD			4
#define MASTER_UFS_MEM			5
#define MASTER_PCIE_0			6
#define SLAVE_A1NOC_SNOC		7
#define SLAVE_SERVICE_A1NOC		8
#define SLAVE_ANOC_PCIE_A1NOC_SNOC	9

#define MASTER_A2NOC_CFG		0
#define MASTER_QDSS_BAM			1
#define MASTER_CNOC_A2NOC		2
#define MASTER_CRYPTO			3
#define MASTER_IPA			4
#define MASTER_PCIE_1			5
#define MASTER_QDSS_ETR			6
#define MASTER_USB3_0			7
#define MASTER_USB3_1			8
#define SLAVE_A2NOC_SNOC		9
#define SLAVE_ANOC_PCIE_SNOC		10
#define SLAVE_SERVICE_A2NOC		11

#define MASTER_SPDM			0
#define MASTER_TIC			1
#define MASTER_SNOC_CNOC		2
#define MASTER_QDSS_DAP			3
#define SLAVE_A1NOC_CFG			4
#define SLAVE_A2NOC_CFG			5
#define SLAVE_AOP			6
#define SLAVE_AOSS			7
#define SLAVE_CAMERA_CFG		8
#define SLAVE_CLK_CTL			9
#define SLAVE_CDSP_CFG			10
#define SLAVE_RBCPR_CX_CFG		11
#define SLAVE_CRYPTO_0_CFG		12
#define SLAVE_DCC_CFG			13
#define SLAVE_CNOC_DDRSS		14
#define SLAVE_DISPLAY_CFG		15
#define SLAVE_GLM			16
#define SLAVE_GFX3D_CFG			17
#define SLAVE_IMEM_CFG			18
#define SLAVE_IPA_CFG			19
#define SLAVE_CNOC_MNOC_CFG		20
#define SLAVE_PCIE_0_CFG		21
#define SLAVE_PCIE_1_CFG		22
#define SLAVE_PDM			23
#define SLAVE_SOUTH_PHY_CFG		24
#define SLAVE_PIMEM_CFG			25
#define SLAVE_PRNG			26
#define SLAVE_QDSS_CFG			27
#define SLAVE_BLSP_2			28
#define SLAVE_BLSP_1			29
#define SLAVE_SDCC_2			30
#define SLAVE_SDCC_4			31
#define SLAVE_SNOC_CFG			32
#define SLAVE_SPDM_WRAPPER		33
#define SLAVE_SPSS_CFG			34
#define SLAVE_TCSR			35
#define SLAVE_TLMM_NORTH		36
#define SLAVE_TLMM_SOUTH		37
#define SLAVE_TSIF			38
#define SLAVE_UFS_CARD_CFG		39
#define SLAVE_UFS_MEM_CFG		40
#define SLAVE_USB3_0			41
#define SLAVE_USB3_1			42
#define SLAVE_VENUS_CFG			43
#define SLAVE_VSENSE_CTRL_CFG		44
#define SLAVE_CNOC_A2NOC		45
#define SLAVE_SERVICE_CNOC		46

#define MASTER_CNOC_DC_NOC		0
#define SLAVE_LLCC_CFG			1
#define SLAVE_MEM_NOC_CFG		2

#define MASTER_APPSS_PROC		0
#define MASTER_GNOC_CFG			1
#define SLAVE_GNOC_SNOC			2
#define SLAVE_GNOC_MEM_NOC		3
#define SLAVE_SERVICE_GNOC		4

#define MASTER_TCU_0			0
#define MASTER_MEM_NOC_CFG		1
#define MASTER_GNOC_MEM_NOC		2
#define MASTER_MNOC_HF_MEM_NOC		3
#define MASTER_MNOC_SF_MEM_NOC		4
#define MASTER_SNOC_GC_MEM_NOC		5
#define MASTER_SNOC_SF_MEM_NOC		6
#define MASTER_GFX3D			7
#define SLAVE_MSS_PROC_MS_MPU_CFG	8
#define SLAVE_MEM_NOC_GNOC		9
#define SLAVE_LLCC			10
#define SLAVE_MEM_NOC_SNOC		11
#define SLAVE_SERVICE_MEM_NOC		12
#define MASTER_LLCC			13
#define SLAVE_EBI1			14

#define MASTER_CNOC_MNOC_CFG		0
#define MASTER_CAMNOC_HF0		1
#define MASTER_CAMNOC_HF1		2
#define MASTER_CAMNOC_SF		3
#define MASTER_MDP0			4
#define MASTER_MDP1			5
#define MASTER_ROTATOR			6
#define MASTER_VIDEO_P0			7
#define MASTER_VIDEO_P1			8
#define MASTER_VIDEO_PROC		9
#define SLAVE_MNOC_SF_MEM_NOC		10
#define SLAVE_MNOC_HF_MEM_NOC		11
#define SLAVE_SERVICE_MNOC		12
#define MASTER_CAMNOC_HF0_UNCOMP	13
#define MASTER_CAMNOC_HF1_UNCOMP	14
#define MASTER_CAMNOC_SF_UNCOMP		15
#define SLAVE_CAMNOC_UNCOMP		16

#define MASTER_SNOC_CFG			0
#define MASTER_A1NOC_SNOC		1
#define MASTER_A2NOC_SNOC		2
#define MASTER_GNOC_SNOC		3
#define MASTER_MEM_NOC_SNOC		4
#define MASTER_ANOC_PCIE_SNOC		5
#define MASTER_PIMEM			6
#define MASTER_GIC			7
#define SLAVE_APPSS			8
#define SLAVE_SNOC_CNOC			9
#define SLAVE_SNOC_MEM_NOC_GC		10
#define SLAVE_SNOC_MEM_NOC_SF		11
#define SLAVE_IMEM			12
#define SLAVE_PCIE_0			13
#define SLAVE_PCIE_1			14
#define SLAVE_PIMEM			15
#define SLAVE_SERVICE_SNOC		16
#define SLAVE_QDSS_STM			17
#define SLAVE_TCU			18

#endif
