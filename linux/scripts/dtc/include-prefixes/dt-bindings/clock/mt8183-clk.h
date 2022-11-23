https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2018 MediaTek Inc.
 * Author: Weiyi Lu <weiyi.lu@mediatek.com>
 */

#ifndef _DT_BINDINGS_CLK_MT8183_H
#define _DT_BINDINGS_CLK_MT8183_H

/* APMIXED */
#define CLK_APMIXED_ARMPLL_LL		0
#define CLK_APMIXED_ARMPLL_L		1
#define CLK_APMIXED_CCIPLL		2
#define CLK_APMIXED_MAINPLL		3
#define CLK_APMIXED_UNIV2PLL		4
#define CLK_APMIXED_MSDCPLL		5
#define CLK_APMIXED_MMPLL		6
#define CLK_APMIXED_MFGPLL		7
#define CLK_APMIXED_TVDPLL		8
#define CLK_APMIXED_APLL1		9
#define CLK_APMIXED_APLL2		10
#define CLK_APMIXED_SSUSB_26M		11
#define CLK_APMIXED_APPLL_26M		12
#define CLK_APMIXED_MIPIC0_26M		13
#define CLK_APMIXED_MDPLLGP_26M		14
#define CLK_APMIXED_MMSYS_26M		15
#define CLK_APMIXED_UFS_26M		16
#define CLK_APMIXED_MIPIC1_26M		17
#define CLK_APMIXED_MEMPLL_26M		18
#define CLK_APMIXED_CLKSQ_LVPLL_26M	19
#define CLK_APMIXED_MIPID0_26M		20
#define CLK_APMIXED_MIPID1_26M		21
#define CLK_APMIXED_NR_CLK		22

/* TOPCKGEN */
#define CLK_TOP_MUX_AXI			0
#define CLK_TOP_MUX_MM			1
#define CLK_TOP_MUX_CAM			2
#define CLK_TOP_MUX_MFG			3
#define CLK_TOP_MUX_CAMTG		4
#define CLK_TOP_MUX_UART		5
#define CLK_TOP_MUX_SPI			6
#define CLK_TOP_MUX_MSDC50_0_HCLK	7
#define CLK_TOP_MUX_MSDC50_0		8
#define CLK_TOP_MUX_MSDC30_1		9
#define CLK_TOP_MUX_MSDC30_2		10
#define CLK_TOP_MUX_AUDIO		11
#define CLK_TOP_MUX_AUD_INTBUS		12
#define CLK_TOP_MUX_FPWRAP_ULPOSC	13
#define CLK_TOP_MUX_SCP			14
#define CLK_TOP_MUX_ATB			15
#define CLK_TOP_MUX_SSPM		16
#define CLK_TOP_MUX_DPI0		17
#define CLK_TOP_MUX_SCAM		18
#define CLK_TOP_MUX_AUD_1		19
#define CLK_TOP_MUX_AUD_2		20
#define CLK_TOP_MUX_DISP_PWM		21
#define CLK_TOP_MUX_SSUSB_TOP_XHCI	22
#define CLK_TOP_MUX_USB_TOP		23
#define CLK_TOP_MUX_SPM			24
#define CLK_TOP_MUX_I2C			25
#define CLK_TOP_MUX_F52M_MFG		26
#define CLK_TOP_MUX_SENINF		27
#define CLK_TOP_MUX_DXCC		28
#define CLK_TOP_MUX_CAMTG2		29
#define CLK_TOP_MUX_AUD_ENG1		30
#define CLK_TOP_MUX_AUD_ENG2		31
#define CLK_TOP_MUX_FAES_UFSFDE		32
#define CLK_TOP_MUX_FUFS		33
#define CLK_TOP_MUX_IMG			34
#define CLK_TOP_MUX_DSP			35
#define CLK_TOP_MUX_DSP1		36
#define CLK_TOP_MUX_DSP2		37
#define CLK_TOP_MUX_IPU_IF		38
#define CLK_TOP_MUX_CAMTG3		39
#define CLK_TOP_MUX_CAMTG4		40
#define CLK_TOP_MUX_PMICSPI		41
#define CLK_TOP_SYSPLL_CK		42
#define CLK_TOP_SYSPLL_D2		43
#define CLK_TOP_SYSPLL_D3		44
#define CLK_TOP_SYSPLL_D5		45
#define CLK_TOP_SYSPLL_D7		46
#define CLK_TOP_SYSPLL_D2_D2		47
#define CLK_TOP_SYSPLL_D2_D4		48
#define CLK_TOP_SYSPLL_D2_D8		49
#define CLK_TOP_SYSPLL_D2_D16		50
#define CLK_TOP_SYSPLL_D3_D2		51
#define CLK_TOP_SYSPLL_D3_D4		52
#define CLK_TOP_SYSPLL_D3_D8		53
#define CLK_TOP_SYSPLL_D5_D2		54
#define CLK_TOP_SYSPLL_D5_D4		55
#define CLK_TOP_SYSPLL_D7_D2		56
#define CLK_TOP_SYSPLL_D7_D4		57
#define CLK_TOP_UNIVPLL_CK		58
#define CLK_TOP_UNIVPLL_D2		59
#define CLK_TOP_UNIVPLL_D3		60
#define CLK_TOP_UNIVPLL_D5		61
#define CLK_TOP_UNIVPLL_D7		62
#define CLK_TOP_UNIVPLL_D2_D2		63
#define CLK_TOP_UNIVPLL_D2_D4		64
#define CLK_TOP_UNIVPLL_D2_D8		65
#define CLK_TOP_UNIVPLL_D3_D2		66
#define CLK_TOP_UNIVPLL_D3_D4		67
#define CLK_TOP_UNIVPLL_D3_D8		68
#define CLK_TOP_UNIVPLL_D5_D2		69
#define CLK_TOP_UNIVPLL_D5_D4		70
#define CLK_TOP_UNIVPLL_D5_D8		71
#define CLK_TOP_APLL1_CK		72
#define CLK_TOP_APLL1_D2		73
#define CLK_TOP_APLL1_D4		74
#define CLK_TOP_APLL1_D8		75
#define CLK_TOP_APLL2_CK		76
#define CLK_TOP_APLL2_D2		77
#define CLK_TOP_APLL2_D4		78
#define CLK_TOP_APLL2_D8		79
#define CLK_TOP_TVDPLL_CK		80
#define CLK_TOP_TVDPLL_D2		81
#define CLK_TOP_TVDPLL_D4		82
#define CLK_TOP_TVDPLL_D8		83
#define CLK_TOP_TVDPLL_D16		84
#define CLK_TOP_MSDCPLL_CK		85
#define CLK_TOP_MSDCPLL_D2		86
#define CLK_TOP_MSDCPLL_D4		87
#define CLK_TOP_MSDCPLL_D8		88
#define CLK_TOP_MSDCPLL_D16		89
#define CLK_TOP_AD_OSC_CK		90
#define CLK_TOP_OSC_D2			91
#define CLK_TOP_OSC_D4			92
#define CLK_TOP_OSC_D8			93
#define CLK_TOP_OSC_D16			94
#define CLK_TOP_F26M_CK_D2		95
#define CLK_TOP_MFGPLL_CK		96
#define CLK_TOP_UNIVP_192M_CK		97
#define CLK_TOP_UNIVP_192M_D2		98
#define CLK_TOP_UNIVP_192M_D4		99
#define CLK_TOP_UNIVP_192M_D8		100
#define CLK_TOP_UNIVP_192M_D16		101
#define CLK_TOP_UNIVP_192M_D32		102
#define CLK_TOP_MMPLL_CK		103
#define CLK_TOP_MMPLL_D4		104
#define CLK_TOP_MMPLL_D4_D2		105
#define CLK_TOP_MMPLL_D4_D4		106
#define CLK_TOP_MMPLL_D5		107
#define CLK_TOP_MMPLL_D5_D2		108
#define CLK_TOP_MMPLL_D5_D4		109
#define CLK_TOP_MMPLL_D6		110
#define CLK_TOP_MMPLL_D7		111
#define CLK_TOP_CLK26M			112
#define CLK_TOP_CLK13M			113
#define CLK_TOP_ULPOSC			114
#define CLK_TOP_UNIVP_192M		115
#define CLK_TOP_MUX_APLL_I2S0		116
#define CLK_TOP_MUX_APLL_I2S1		117
#define CLK_TOP_MUX_APLL_I2S2		118
#define CLK_TOP_MUX_APLL_I2S3		119
#define CLK_TOP_MUX_APLL_I2S4		120
#define CLK_TOP_MUX_APLL_I2S5		121
#define CLK_TOP_APLL12_DIV0		122
#define CLK_TOP_APLL12_DIV1		123
#define CLK_TOP_APLL12_DIV2		124
#define CLK_TOP_APLL12_DIV3		125
#define CLK_TOP_APLL12_DIV4		126
#define CLK_TOP_APLL12_DIVB		127
#define CLK_TOP_UNIVPLL			128
#define CLK_TOP_ARMPLL_DIV_PLL1		129
#define CLK_TOP_ARMPLL_DIV_PLL2		130
#define CLK_TOP_UNIVPLL_D3_D16		131
#define CLK_TOP_NR_CLK			132

/* CAMSYS */
#define CLK_CAM_LARB6			0
#define CLK_CAM_DFP_VAD			1
#define CLK_CAM_CAM			2
#define CLK_CAM_CAMTG			3
#define CLK_CAM_SENINF			4
#define CLK_CAM_CAMSV0			5
#define CLK_CAM_CAMSV1			6
#define CLK_CAM_CAMSV2			7
#define CLK_CAM_CCU			8
#define CLK_CAM_LARB3			9
#define CLK_CAM_NR_CLK			10

/* INFRACFG_AO */
#define CLK_INFRA_PMIC_TMR		0
#define CLK_INFRA_PMIC_AP		1
#define CLK_INFRA_PMIC_MD		2
#define CLK_INFRA_PMIC_CONN		3
#define CLK_INFRA_SCPSYS		4
#define CLK_INFRA_SEJ			5
#define CLK_INFRA_APXGPT		6
#define CLK_INFRA_ICUSB			7
#define CLK_INFRA_GCE			8
#define CLK_INFRA_THERM			9
#define CLK_INFRA_I2C0			10
#define CLK_INFRA_I2C1			11
#define CLK_INFRA_I2C2			12
#define CLK_INFRA_I2C3			13
#define CLK_INFRA_PWM_HCLK		14
#define CLK_INFRA_PWM1			15
#define CLK_INFRA_PWM2			16
#define CLK_INFRA_PWM3			17
#define CLK_INFRA_PWM4			18
#define CLK_INFRA_PWM			19
#define CLK_INFRA_UART0			20
#define CLK_INFRA_UART1			21
#define CLK_INFRA_UART2			22
#define CLK_INFRA_UART3			23
#define CLK_INFRA_GCE_26M		24
#define CLK_INFRA_CQ_DMA_FPC		25
#define CLK_INFRA_BTIF			26
#define CLK_INFRA_SPI0			27
#define CLK_INFRA_MSDC0			28
#define CLK_INFRA_MSDC1			29
#define CLK_INFRA_MSDC2			30
#define CLK_INFRA_MSDC0_SCK		31
#define CLK_INFRA_DVFSRC		32
#define CLK_INFRA_GCPU			33
#define CLK_INFRA_TRNG			34
#define CLK_INFRA_AUXADC		35
#define CLK_INFRA_CPUM			36
#define CLK_INFRA_CCIF1_AP		37
#define CLK_INFRA_CCIF1_MD		38
#define CLK_INFRA_AUXADC_MD		39
#define CLK_INFRA_MSDC1_SCK		40
#define CLK_INFRA_MSDC2_SCK		41
#define CLK_INFRA_AP_DMA		42
#define CLK_INFRA_XIU			43
#define CLK_INFRA_DEVICE_APC		44
#define CLK_INFRA_CCIF_AP		45
#define CLK_INFRA_DEBUGSYS		46
#define CLK_INFRA_AUDIO			47
#define CLK_INFRA_CCIF_MD		48
#define CLK_INFRA_DXCC_SEC_CORE		49
#define CLK_INFRA_DXCC_AO		50
#define CLK_INFRA_DRAMC_F26M		51
#define CLK_INFRA_IRTX			52
#define CLK_INFRA_DISP_PWM		53
#define CLK_INFRA_CLDMA_BCLK		54
#define CLK_INFRA_AUDIO_26M_BCLK	55
#define CLK_INFRA_SPI1			56
#define CLK_INFRA_I2C4			57
#define CLK_INFRA_MODEM_TEMP_SHARE	58
#define CLK_INFRA_SPI2			59
#define CLK_INFRA_SPI3			60
#define CLK_INFRA_UNIPRO_SCK		61
#define CLK_INFRA_UNIPRO_TICK		62
#define CLK_INFRA_UFS_MP_SAP_BCLK	63
#define CLK_INFRA_MD32_BCLK		64
#define CLK_INFRA_SSPM			65
#define CLK_INFRA_UNIPRO_MBIST		66
#define CLK_INFRA_SSPM_BUS_HCLK		67
#define CLK_INFRA_I2C5			68
#define CLK_INFRA_I2C5_ARBITER		69
#define CLK_INFRA_I2C5_IMM		70
#define CLK_INFRA_I2C1_ARBITER		71
#define CLK_INFRA_I2C1_IMM		72
#define CLK_INFRA_I2C2_ARBITER		73
#define CLK_INFRA_I2C2_IMM		74
#define CLK_INFRA_SPI4			75
#define CLK_INFRA_SPI5			76
#define CLK_INFRA_CQ_DMA		77
#define CLK_INFRA_UFS			78
#define CLK_INFRA_AES_UFSFDE		79
#define CLK_INFRA_UFS_TICK		80
#define CLK_INFRA_MSDC0_SELF		81
#define CLK_INFRA_MSDC1_SELF		82
#define CLK_INFRA_MSDC2_SELF		83
#define CLK_INFRA_SSPM_26M_SELF		84
#define CLK_INFRA_SSPM_32K_SELF		85
#define CLK_INFRA_UFS_AXI		86
#define CLK_INFRA_I2C6			87
#define CLK_INFRA_AP_MSDC0		88
#define CLK_INFRA_MD_MSDC0		89
#define CLK_INFRA_USB			90
#define CLK_INFRA_DEVMPU_BCLK		91
#define CLK_INFRA_CCIF2_AP		92
#define CLK_INFRA_CCIF2_MD		93
#define CLK_INFRA_CCIF3_AP		94
#define CLK_INFRA_CCIF3_MD		95
#define CLK_INFRA_SEJ_F13M		96
#define CLK_INFRA_AES_BCLK		97
#define CLK_INFRA_I2C7			98
#define CLK_INFRA_I2C8			99
#define CLK_INFRA_FBIST2FPC		100
#define CLK_INFRA_NR_CLK		101

/* PERICFG */
#define CLK_PERI_AXI			0
#define CLK_PERI_NR_CLK			1

/* MFGCFG */
#define CLK_MFG_BG3D			0
#define CLK_MFG_NR_CLK			1

/* IMG */
#define CLK_IMG_OWE			0
#define CLK_IMG_WPE_B			1
#define CLK_IMG_WPE_A			2
#define CLK_IMG_MFB			3
#define CLK_IMG_RSC			4
#define CLK_IMG_DPE			5
#define CLK_IMG_FDVT			6
#define CLK_IMG_DIP			7
#define CLK_IMG_LARB2			8
#define CLK_IMG_LARB5			9
#define CLK_IMG_NR_CLK			10

/* MMSYS_CONFIG */
#define CLK_MM_SMI_COMMON		0
#define CLK_MM_SMI_LARB0		1
#define CLK_MM_SMI_LARB1		2
#define CLK_MM_GALS_COMM0		3
#define CLK_MM_GALS_COMM1		4
#define CLK_MM_GALS_CCU2MM		5
#define CLK_MM_GALS_IPU12MM		6
#define CLK_MM_GALS_IMG2MM		7
#define CLK_MM_GALS_CAM2MM		8
#define CLK_MM_GALS_IPU2MM		9
#define CLK_MM_MDP_DL_TXCK		10
#define CLK_MM_IPU_DL_TXCK		11
#define CLK_MM_MDP_RDMA0		12
#define CLK_MM_MDP_RDMA1		13
#define CLK_MM_MDP_RSZ0			14
#define CLK_MM_MDP_RSZ1			15
#define CLK_MM_MDP_TDSHP		16
#define CLK_MM_MDP_WROT0		17
#define CLK_MM_FAKE_ENG			18
#define CLK_MM_DISP_OVL0		19
#define CLK_MM_DISP_OVL0_2L		20
#define CLK_MM_DISP_OVL1_2L		21
#define CLK_MM_DISP_RDMA0		22
#define CLK_MM_DISP_RDMA1		23
#define CLK_MM_DISP_WDMA0		24
#define CLK_MM_DISP_COLOR0		25
#define CLK_MM_DISP_CCORR0		26
#define CLK_MM_DISP_AAL0		27
#define CLK_MM_DISP_GAMMA0		28
#define CLK_MM_DISP_DITHER0		29
#define CLK_MM_DISP_SPLIT		30
#define CLK_MM_DSI0_MM			31
#define CLK_MM_DSI0_IF			32
#define CLK_MM_DPI_MM			33
#define CLK_MM_DPI_IF			34
#define CLK_MM_FAKE_ENG2		35
#define CLK_MM_MDP_DL_RX		36
#define CLK_MM_IPU_DL_RX		37
#define CLK_MM_26M			38
#define CLK_MM_MMSYS_R2Y		39
#define CLK_MM_DISP_RSZ			40
#define CLK_MM_MDP_WDMA0		41
#define CLK_MM_MDP_AAL			42
#define CLK_MM_MDP_CCORR		43
#define CLK_MM_DBI_MM			44
#define CLK_MM_DBI_IF			45
#define CLK_MM_NR_CLK			46

/* VDEC_GCON */
#define CLK_VDEC_VDEC			0
#define CLK_VDEC_LARB1			1
#define CLK_VDEC_NR_CLK			2

/* VENC_GCON */
#define CLK_VENC_LARB			0
#define CLK_VENC_VENC			1
#define CLK_VENC_JPGENC			2
#define CLK_VENC_NR_CLK			3

/* AUDIO */
#define CLK_AUDIO_TML			0
#define CLK_AUDIO_DAC_PREDIS		1
#define CLK_AUDIO_DAC			2
#define CLK_AUDIO_ADC			3
#define CLK_AUDIO_APLL_TUNER		4
#define CLK_AUDIO_APLL2_TUNER		5
#define CLK_AUDIO_24M			6
#define CLK_AUDIO_22M			7
#define CLK_AUDIO_AFE			8
#define CLK_AUDIO_I2S4			9
#define CLK_AUDIO_I2S3			10
#define CLK_AUDIO_I2S2			11
#define CLK_AUDIO_I2S1			12
#define CLK_AUDIO_PDN_ADDA6_ADC		13
#define CLK_AUDIO_TDM			14
#define CLK_AUDIO_NR_CLK		15

/* IPU_CONN */
#define CLK_IPU_CONN_IPU		0
#define CLK_IPU_CONN_AHB		1
#define CLK_IPU_CONN_AXI		2
#define CLK_IPU_CONN_ISP		3
#define CLK_IPU_CONN_CAM_ADL		4
#define CLK_IPU_CONN_IMG_ADL		5
#define CLK_IPU_CONN_DAP_RX		6
#define CLK_IPU_CONN_APB2AXI		7
#define CLK_IPU_CONN_APB2AHB		8
#define CLK_IPU_CONN_IPU_CAB1TO2	9
#define CLK_IPU_CONN_IPU1_CAB1TO2	10
#define CLK_IPU_CONN_IPU2_CAB1TO2	11
#define CLK_IPU_CONN_CAB3TO3		12
#define CLK_IPU_CONN_CAB2TO1		13
#define CLK_IPU_CONN_CAB3TO1_SLICE	14
#define CLK_IPU_CONN_NR_CLK		15

/* IPU_ADL */
#define CLK_IPU_ADL_CABGEN		0
#define CLK_IPU_ADL_NR_CLK		1

/* IPU_CORE0 */
#define CLK_IPU_CORE0_JTAG		0
#define CLK_IPU_CORE0_AXI		1
#define CLK_IPU_CORE0_IPU		2
#define CLK_IPU_CORE0_NR_CLK		3

/* IPU_CORE1 */
#define CLK_IPU_CORE1_JTAG		0
#define CLK_IPU_CORE1_AXI		1
#define CLK_IPU_CORE1_IPU		2
#define CLK_IPU_CORE1_NR_CLK		3

/* MCUCFG */
#define CLK_MCU_MP0_SEL			0
#define CLK_MCU_MP2_SEL			1
#define CLK_MCU_BUS_SEL			2
#define CLK_MCU_NR_CLK			3

#endif /* _DT_BINDINGS_CLK_MT8183_H */
