https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
//
// rt1015.h  --  RT1015 ALSA SoC audio amplifier driver
//
// Copyright 2019 Realtek Semiconductor Corp.
// Author: Jack Yu <jack.yu@realtek.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//

#ifndef __RT1015_H__
#define __RT1015_H__
#include <sound/rt1015.h>

#define RT1015_DEVICE_ID_VAL			0x1011
#define RT1015_DEVICE_ID_VAL2			0x1015

#define RT1015_RESET				0x0000
#define RT1015_CLK2				0x0004
#define RT1015_CLK3				0x0006
#define RT1015_PLL1				0x000a
#define RT1015_PLL2				0x000c
#define RT1015_DUM_RW1				0x000e
#define RT1015_DUM_RW2				0x0010
#define RT1015_DUM_RW3				0x0012
#define RT1015_DUM_RW4				0x0014
#define RT1015_DUM_RW5				0x0016
#define RT1015_DUM_RW6				0x0018
#define RT1015_CLK_DET				0x0020
#define RT1015_SIL_DET				0x0022
#define RT1015_CUSTOMER_ID			0x0076
#define RT1015_PCODE_FWVER			0x0078
#define RT1015_VER_ID				0x007a
#define RT1015_VENDOR_ID			0x007c
#define RT1015_DEVICE_ID			0x007d
#define RT1015_PAD_DRV1				0x00f0
#define RT1015_PAD_DRV2				0x00f2
#define RT1015_GAT_BOOST			0x00f3
#define RT1015_PRO_ALT				0x00f4
#define RT1015_OSCK_STA				0x00f6
#define RT1015_MAN_I2C				0x0100
#define RT1015_DAC1				0x0102
#define RT1015_DAC2				0x0104
#define RT1015_DAC3				0x0106
#define RT1015_ADC1				0x010c
#define RT1015_ADC2				0x010e
#define RT1015_TDM_MASTER			0x0111
#define RT1015_TDM_TCON				0x0112
#define RT1015_TDM1_1				0x0114
#define RT1015_TDM1_2				0x0116
#define RT1015_TDM1_3				0x0118
#define RT1015_TDM1_4				0x011a
#define RT1015_TDM1_5				0x011c
#define RT1015_MIXER1				0x0300
#define RT1015_MIXER2				0x0302
#define RT1015_ANA_PROTECT1			0x0311
#define RT1015_ANA_CTRL_SEQ1			0x0313
#define RT1015_ANA_CTRL_SEQ2			0x0314
#define RT1015_VBAT_DET_DEB			0x031a
#define RT1015_VBAT_VOLT_DET1			0x031c
#define RT1015_VBAT_VOLT_DET2			0x031d
#define RT1015_VBAT_TEST_OUT1			0x031e
#define RT1015_VBAT_TEST_OUT2			0x031f
#define RT1015_VBAT_PROT_ATT			0x0320
#define RT1015_VBAT_DET_CODE			0x0321
#define RT1015_PWR1				0x0322
#define RT1015_PWR4				0x0328
#define RT1015_PWR5				0x0329
#define RT1015_PWR6				0x032a
#define RT1015_PWR7				0x032b
#define RT1015_PWR8				0x032c
#define RT1015_PWR9				0x032d
#define RT1015_CLASSD_SEQ			0x032e
#define RT1015_SMART_BST_CTRL1			0x0330
#define RT1015_SMART_BST_CTRL2			0x0332
#define RT1015_ANA_CTRL1			0x0334
#define RT1015_ANA_CTRL2			0x0336
#define RT1015_PWR_STATE_CTRL			0x0338
#define RT1015_MONO_DYNA_CTRL			0x04fa
#define RT1015_MONO_DYNA_CTRL1			0x04fc
#define RT1015_MONO_DYNA_CTRL2			0x04fe
#define RT1015_MONO_DYNA_CTRL3			0x0500
#define RT1015_MONO_DYNA_CTRL4			0x0502
#define RT1015_MONO_DYNA_CTRL5			0x0504
#define RT1015_SPK_VOL					0x0506
#define RT1015_SHORT_DETTOP1			0x0508
#define RT1015_SHORT_DETTOP2			0x050a
#define RT1015_SPK_DC_DETECT1			0x0519
#define RT1015_SPK_DC_DETECT2			0x051a
#define RT1015_SPK_DC_DETECT3			0x051b
#define RT1015_SPK_DC_DETECT4			0x051d
#define RT1015_SPK_DC_DETECT5			0x051f
#define RT1015_BAT_RPO_STEP1			0x0536
#define RT1015_BAT_RPO_STEP2			0x0538
#define RT1015_BAT_RPO_STEP3			0x053a
#define RT1015_BAT_RPO_STEP4			0x053c
#define RT1015_BAT_RPO_STEP5			0x053d
#define RT1015_BAT_RPO_STEP6			0x053e
#define RT1015_BAT_RPO_STEP7			0x053f
#define RT1015_BAT_RPO_STEP8			0x0540
#define RT1015_BAT_RPO_STEP9			0x0541
#define RT1015_BAT_RPO_STEP10			0x0542
#define RT1015_BAT_RPO_STEP11			0x0543
#define RT1015_BAT_RPO_STEP12			0x0544
#define RT1015_SPREAD_SPEC1			0x0568
#define RT1015_SPREAD_SPEC2			0x056a
#define RT1015_PAD_STATUS			0x1000
#define RT1015_PADS_PULLING_CTRL1		0x1002
#define RT1015_PADS_DRIVING			0x1006
#define RT1015_SYS_RST1				0x1007
#define RT1015_SYS_RST2				0x1009
#define RT1015_SYS_GATING1			0x100a
#define RT1015_TEST_MODE1			0x100c
#define RT1015_TEST_MODE2			0x100d
#define RT1015_TIMING_CTRL1			0x100e
#define RT1015_PLL_INT				0x1010
#define RT1015_TEST_OUT1			0x1020
#define RT1015_DC_CALIB_CLSD1			0x1200
#define RT1015_DC_CALIB_CLSD2			0x1202
#define RT1015_DC_CALIB_CLSD3			0x1204
#define RT1015_DC_CALIB_CLSD4			0x1206
#define RT1015_DC_CALIB_CLSD5			0x1208
#define RT1015_DC_CALIB_CLSD6			0x120a
#define RT1015_DC_CALIB_CLSD7			0x120c
#define RT1015_DC_CALIB_CLSD8			0x120e
#define RT1015_DC_CALIB_CLSD9			0x1210
#define RT1015_DC_CALIB_CLSD10			0x1212
#define RT1015_CLSD_INTERNAL1			0x1300
#define RT1015_CLSD_INTERNAL2			0x1302
#define RT1015_CLSD_INTERNAL3			0x1304
#define RT1015_CLSD_INTERNAL4			0x1305
#define RT1015_CLSD_INTERNAL5			0x1306
#define RT1015_CLSD_INTERNAL6			0x1308
#define RT1015_CLSD_INTERNAL7			0x130a
#define RT1015_CLSD_INTERNAL8			0x130c
#define RT1015_CLSD_INTERNAL9			0x130e
#define RT1015_CLSD_OCP_CTRL			0x130f
#define RT1015_VREF_LV				0x1310
#define RT1015_MBIAS1				0x1312
#define RT1015_MBIAS2				0x1314
#define RT1015_MBIAS3				0x1316
#define RT1015_MBIAS4				0x1318
#define RT1015_VREF_LV1				0x131a
#define RT1015_S_BST_TIMING_INTER1		0x1322
#define RT1015_S_BST_TIMING_INTER2		0x1323
#define RT1015_S_BST_TIMING_INTER3		0x1324
#define RT1015_S_BST_TIMING_INTER4		0x1325
#define RT1015_S_BST_TIMING_INTER5		0x1326
#define RT1015_S_BST_TIMING_INTER6		0x1327
#define RT1015_S_BST_TIMING_INTER7		0x1328
#define RT1015_S_BST_TIMING_INTER8		0x1329
#define RT1015_S_BST_TIMING_INTER9		0x132a
#define RT1015_S_BST_TIMING_INTER10		0x132b
#define RT1015_S_BST_TIMING_INTER11		0x1330
#define RT1015_S_BST_TIMING_INTER12		0x1331
#define RT1015_S_BST_TIMING_INTER13		0x1332
#define RT1015_S_BST_TIMING_INTER14		0x1333
#define RT1015_S_BST_TIMING_INTER15		0x1334
#define RT1015_S_BST_TIMING_INTER16		0x1335
#define RT1015_S_BST_TIMING_INTER17		0x1336
#define RT1015_S_BST_TIMING_INTER18		0x1337
#define RT1015_S_BST_TIMING_INTER19		0x1338
#define RT1015_S_BST_TIMING_INTER20		0x1339
#define RT1015_S_BST_TIMING_INTER21		0x133a
#define RT1015_S_BST_TIMING_INTER22		0x133b
#define RT1015_S_BST_TIMING_INTER23		0x133c
#define RT1015_S_BST_TIMING_INTER24		0x133d
#define RT1015_S_BST_TIMING_INTER25		0x133e
#define RT1015_S_BST_TIMING_INTER26		0x133f
#define RT1015_S_BST_TIMING_INTER27		0x1340
#define RT1015_S_BST_TIMING_INTER28		0x1341
#define RT1015_S_BST_TIMING_INTER29		0x1342
#define RT1015_S_BST_TIMING_INTER30		0x1343
#define RT1015_S_BST_TIMING_INTER31		0x1344
#define RT1015_S_BST_TIMING_INTER32		0x1345
#define RT1015_S_BST_TIMING_INTER33		0x1346
#define RT1015_S_BST_TIMING_INTER34		0x1347
#define RT1015_S_BST_TIMING_INTER35		0x1348
#define RT1015_S_BST_TIMING_INTER36		0x1349

/* 0x0004 */
#define RT1015_CLK_SYS_PRE_SEL_MASK		(0x3 << 14)
#define RT1015_CLK_SYS_PRE_SEL_SFT		14
#define RT1015_CLK_SYS_PRE_SEL_MCLK		(0x0 << 14)
#define RT1015_CLK_SYS_PRE_SEL_PLL		(0x2 << 14)
#define RT1015_PLL_SEL_MASK			(0x1 << 13)
#define RT1015_PLL_SEL_SFT			13
#define RT1015_PLL_SEL_PLL_SRC2			(0x0 << 13)
#define RT1015_PLL_SEL_BCLK			(0x1 << 13)
#define RT1015_FS_PD_MASK			(0x7 << 4)
#define RT1015_FS_PD_SFT			4

/* 0x000a */
#define RT1015_PLL_M_MAX			0xf
#define RT1015_PLL_M_MASK			(RT1015_PLL_M_MAX << 12)
#define RT1015_PLL_M_SFT			12
#define RT1015_PLL_M_BP				(0x1 << 11)
#define RT1015_PLL_M_BP_SFT			11
#define RT1015_PLL_N_MAX			0x1ff
#define RT1015_PLL_N_MASK			(RT1015_PLL_N_MAX << 0)
#define RT1015_PLL_N_SFT			0

/* 0x000c */
#define RT1015_PLL_BPK_MASK			(0x1 << 5)
#define RT1015_PLL_BPK				(0x0 << 5)
#define RT1015_PLL_K_MAX			0x1f
#define RT1015_PLL_K_MASK			(RT1015_PLL_K_MAX)
#define RT1015_PLL_K_SFT			0

/* 0x007a */
#define RT1015_ID_MASK				0xff
#define RT1015_ID_VERA				0x0
#define RT1015_ID_VERB				0x1

/* 0x0102 */
#define RT1015_DAC_VOL_MASK			(0x7f << 9)
#define RT1015_DAC_VOL_SFT			9

/* 0x0104 */
#define RT1015_DAC_CLK				(0x1 << 13)
#define RT1015_DAC_CLK_BIT			13

/* 0x0106 */
#define RT1015_DAC_MUTE_MASK			(0x1 << 15)
#define RT1015_DA_MUTE_SFT			15
#define RT1015_DVOL_MUTE_FLAG_SFT		12

/* 0x0111 */
#define RT1015_TCON_TDM_MS_MASK			(0x1 << 14)
#define RT1015_TCON_TDM_MS_SFT			14
#define RT1015_TCON_TDM_MS_S			(0x0 << 14)
#define RT1015_TCON_TDM_MS_M			(0x1 << 14)
#define RT1015_I2S_DL_MASK			(0x7 << 8)
#define RT1015_I2S_DL_SFT			8
#define RT1015_I2S_DL_16			(0x0 << 8)
#define RT1015_I2S_DL_20			(0x1 << 8)
#define RT1015_I2S_DL_24			(0x2 << 8)
#define RT1015_I2S_DL_8				(0x3 << 8)
#define RT1015_I2S_M_DF_MASK			(0x7 << 0)
#define RT1015_I2S_M_DF_SFT			0
#define RT1015_I2S_M_DF_I2S			(0x0)
#define RT1015_I2S_M_DF_LEFT			(0x1)
#define RT1015_I2S_M_DF_PCM_A			(0x2)
#define RT1015_I2S_M_DF_PCM_B			(0x3)
#define RT1015_I2S_M_DF_PCM_A_N			(0x6)
#define RT1015_I2S_M_DF_PCM_B_N			(0x7)

/* TDM_tcon Setting (0x0112) */
#define RT1015_I2S_TCON_DF_MASK			(0x7 << 13)
#define RT1015_I2S_TCON_DF_SFT			13
#define RT1015_I2S_TCON_DF_I2S			(0x0 << 13)
#define RT1015_I2S_TCON_DF_LEFT			(0x1 << 13)
#define RT1015_I2S_TCON_DF_PCM_A		(0x2 << 13)
#define RT1015_I2S_TCON_DF_PCM_B		(0x3 << 13)
#define RT1015_I2S_TCON_DF_PCM_A_N		(0x6 << 13)
#define RT1015_I2S_TCON_DF_PCM_B_N		(0x7 << 13)
#define RT1015_TCON_BCLK_SEL_MASK		(0x3 << 10)
#define RT1015_TCON_BCLK_SEL_SFT		10
#define RT1015_TCON_BCLK_SEL_32FS		(0x0 << 10)
#define RT1015_TCON_BCLK_SEL_64FS		(0x1 << 10)
#define RT1015_TCON_BCLK_SEL_128FS		(0x2 << 10)
#define RT1015_TCON_BCLK_SEL_256FS		(0x3 << 10)
#define RT1015_TCON_CH_LEN_MASK			(0x3 << 5)
#define RT1015_TCON_CH_LEN_SFT			5
#define RT1015_TCON_CH_LEN_16B			(0x0 << 5)
#define RT1015_TCON_CH_LEN_20B			(0x1 << 5)
#define RT1015_TCON_CH_LEN_24B			(0x2 << 5)
#define RT1015_TCON_CH_LEN_32B			(0x3 << 5)
#define RT1015_TCON_BCLK_MST_MASK			(0x1 << 4)
#define RT1015_TCON_BCLK_MST_SFT			4
#define RT1015_TCON_BCLK_MST_INV		(0x1 << 4)

/* TDM1 Setting-1 (0x0114) */
#define RT1015_TDM_INV_BCLK_MASK		(0x1 << 15)
#define RT1015_TDM_INV_BCLK_SFT			15
#define RT1015_TDM_INV_BCLK			(0x1 << 15)

/* 0x0330 */
#define RT1015_ABST_AUTO_EN_MASK		(0x1 << 13)
#define RT1015_ABST_AUTO_MODE			(0x1 << 13)
#define RT1015_ABST_REG_MODE			(0x0 << 13)
#define RT1015_ABST_FIX_TGT_MASK		(0x1 << 12)
#define RT1015_ABST_FIX_TGT_EN			(0x1 << 12)
#define RT1015_ABST_FIX_TGT_DIS			(0x0 << 12)
#define RT1015_BYPASS_SWR_REG_MASK		(0x1 << 7)
#define RT1015_BYPASS_SWRREG_BYPASS		(0x1 << 7)
#define RT1015_BYPASS_SWRREG_PASS		(0x0 << 7)

/* 0x0322 */
#define RT1015_PWR_LDO2				(0x1 << 15)
#define RT1015_PWR_LDO2_BIT			15
#define RT1015_PWR_DAC				(0x1 << 14)
#define RT1015_PWR_DAC_BIT			14
#define RT1015_PWR_INTCLK			(0x1 << 13)
#define RT1015_PWR_INTCLK_BIT			13
#define RT1015_PWR_ISENSE			(0x1 << 12)
#define RT1015_PWR_ISENSE_BIT			12
#define RT1015_PWR_VSENSE			(0x1 << 10)
#define RT1015_PWR_VSENSE_BIT			10
#define RT1015_PWR_PLL				(0x1 << 9)
#define RT1015_PWR_PLL_BIT			9
#define RT1015_PWR_BG_1_2			(0x1 << 8)
#define RT1015_PWR_BG_1_2_BIT			8
#define RT1015_PWR_MBIAS_BG			(0x1 << 7)
#define RT1015_PWR_MBIAS_BG_BIT			7
#define RT1015_PWR_VBAT				(0x1 << 6)
#define RT1015_PWR_VBAT_BIT			6
#define RT1015_PWR_MBIAS			(0x1 << 4)
#define RT1015_PWR_MBIAS_BIT			4
#define RT1015_PWR_ADCV				(0x1 << 3)
#define RT1015_PWR_ADCV_BIT			3
#define RT1015_PWR_MIXERV			(0x1 << 2)
#define RT1015_PWR_MIXERV_BIT			2
#define RT1015_PWR_SUMV				(0x1 << 1)
#define RT1015_PWR_SUMV_BIT			1
#define RT1015_PWR_VREFLV			(0x1 << 0)
#define RT1015_PWR_VREFLV_BIT			0

/* 0x0324 */
#define RT1015_PWR_BASIC			(0x1 << 15)
#define RT1015_PWR_BASIC_BIT			15
#define RT1015_PWR_SD				(0x1 << 14)
#define RT1015_PWR_SD_BIT			14
#define RT1015_PWR_IBIAS			(0x1 << 13)
#define RT1015_PWR_IBIAS_BIT			13
#define RT1015_PWR_VCM				(0x1 << 11)
#define RT1015_PWR_VCM_BIT			11

/* 0x0328 */
#define RT1015_PWR_SWR				(0x1 << 12)
#define RT1015_PWR_SWR_BIT			12

/* 0x1300 */
#define RT1015_PWR_CLSD				(0x1 << 12)
#define RT1015_PWR_CLSD_BIT			12

/* 0x007a */
#define RT1015_ID_MASK				0xff
#define RT1015_ID_VERA				0x0
#define RT1015_ID_VERB				0x1

/* System Clock Source */
enum {
	RT1015_SCLK_S_MCLK,
	RT1015_SCLK_S_PLL,
};

/* PLL1 Source */
enum {
	RT1015_PLL_S_MCLK,
	RT1015_PLL_S_BCLK,
};

enum {
	RT1015_AIF1,
	RT1015_AIFS,
};

enum {
	RT1015_VERA,
	RT1015_VERB,
};

enum {
	BYPASS,
	ADAPTIVE,
	FIXED_ADAPTIVE,
};

enum {
	RT1015_Enable_Boost = 0,
	RT1015_Bypass_Boost,
};

enum {
	RT1015_HW_28 = 0,
	RT1015_HW_29,
};

struct rt1015_priv {
	struct snd_soc_component *component;
	struct rt1015_platform_data pdata;
	struct regmap *regmap;
	int sysclk;
	int sysclk_src;
	int lrck;
	int bclk;
	int bclk_ratio;
	int id;
	int pll_src;
	int pll_in;
	int pll_out;
	int boost_mode;
	int bypass_boost;
	int amp_ver;
	int dac_is_used;
	int cali_done;
	int hw_config;
	struct delayed_work flush_work;
};

#endif /* __RT1015_H__ */
