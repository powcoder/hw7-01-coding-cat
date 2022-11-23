https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: (GPL-2.0 OR MIT) */
/*
 * Copyright (c) 2018 BayLibre, SAS.
 * Author: Jerome Brunet <jbrunet@baylibre.com>
 */

#ifndef __AXG_AUDIO_CLKC_H
#define __AXG_AUDIO_CLKC_H

/*
 * Audio Clock  register offsets
 *
 * Register offsets from the datasheet must be multiplied by 4 before
 * to get the right offset
 */
#define AUDIO_CLK_GATE_EN	0x000
#define AUDIO_MCLK_A_CTRL	0x004
#define AUDIO_MCLK_B_CTRL	0x008
#define AUDIO_MCLK_C_CTRL	0x00C
#define AUDIO_MCLK_D_CTRL	0x010
#define AUDIO_MCLK_E_CTRL	0x014
#define AUDIO_MCLK_F_CTRL	0x018
#define AUDIO_MST_PAD_CTRL0	0x01c
#define AUDIO_MST_PAD_CTRL1	0x020
#define AUDIO_SW_RESET		0x024
#define AUDIO_MST_A_SCLK_CTRL0	0x040
#define AUDIO_MST_A_SCLK_CTRL1	0x044
#define AUDIO_MST_B_SCLK_CTRL0	0x048
#define AUDIO_MST_B_SCLK_CTRL1	0x04C
#define AUDIO_MST_C_SCLK_CTRL0	0x050
#define AUDIO_MST_C_SCLK_CTRL1	0x054
#define AUDIO_MST_D_SCLK_CTRL0	0x058
#define AUDIO_MST_D_SCLK_CTRL1	0x05C
#define AUDIO_MST_E_SCLK_CTRL0	0x060
#define AUDIO_MST_E_SCLK_CTRL1	0x064
#define AUDIO_MST_F_SCLK_CTRL0	0x068
#define AUDIO_MST_F_SCLK_CTRL1	0x06C
#define AUDIO_CLK_TDMIN_A_CTRL	0x080
#define AUDIO_CLK_TDMIN_B_CTRL	0x084
#define AUDIO_CLK_TDMIN_C_CTRL	0x088
#define AUDIO_CLK_TDMIN_LB_CTRL 0x08C
#define AUDIO_CLK_TDMOUT_A_CTRL 0x090
#define AUDIO_CLK_TDMOUT_B_CTRL 0x094
#define AUDIO_CLK_TDMOUT_C_CTRL 0x098
#define AUDIO_CLK_SPDIFIN_CTRL	0x09C
#define AUDIO_CLK_SPDIFOUT_CTRL 0x0A0
#define AUDIO_CLK_RESAMPLE_CTRL 0x0A4
#define AUDIO_CLK_LOCKER_CTRL	0x0A8
#define AUDIO_CLK_PDMIN_CTRL0	0x0AC
#define AUDIO_CLK_PDMIN_CTRL1	0x0B0
#define AUDIO_CLK_SPDIFOUT_B_CTRL 0x0B4

/* SM1 introduce new register and some shifts :( */
#define AUDIO_CLK_GATE_EN1	0x004
#define AUDIO_SM1_MCLK_A_CTRL	0x008
#define AUDIO_SM1_MCLK_B_CTRL	0x00C
#define AUDIO_SM1_MCLK_C_CTRL	0x010
#define AUDIO_SM1_MCLK_D_CTRL	0x014
#define AUDIO_SM1_MCLK_E_CTRL	0x018
#define AUDIO_SM1_MCLK_F_CTRL	0x01C
#define AUDIO_SM1_MST_PAD_CTRL0	0x020
#define AUDIO_SM1_MST_PAD_CTRL1	0x024
#define AUDIO_SM1_SW_RESET0	0x028
#define AUDIO_SM1_SW_RESET1	0x02C
#define AUDIO_CLK81_CTRL	0x030
#define AUDIO_CLK81_EN		0x034
/*
 * CLKID index values
 * These indices are entirely contrived and do not map onto the hardware.
 */

#define AUD_CLKID_MST_A_MCLK_SEL	59
#define AUD_CLKID_MST_B_MCLK_SEL	60
#define AUD_CLKID_MST_C_MCLK_SEL	61
#define AUD_CLKID_MST_D_MCLK_SEL	62
#define AUD_CLKID_MST_E_MCLK_SEL	63
#define AUD_CLKID_MST_F_MCLK_SEL	64
#define AUD_CLKID_MST_A_MCLK_DIV	65
#define AUD_CLKID_MST_B_MCLK_DIV	66
#define AUD_CLKID_MST_C_MCLK_DIV	67
#define AUD_CLKID_MST_D_MCLK_DIV	68
#define AUD_CLKID_MST_E_MCLK_DIV	69
#define AUD_CLKID_MST_F_MCLK_DIV	70
#define AUD_CLKID_SPDIFOUT_CLK_SEL	71
#define AUD_CLKID_SPDIFOUT_CLK_DIV	72
#define AUD_CLKID_SPDIFIN_CLK_SEL	73
#define AUD_CLKID_SPDIFIN_CLK_DIV	74
#define AUD_CLKID_PDM_DCLK_SEL		75
#define AUD_CLKID_PDM_DCLK_DIV		76
#define AUD_CLKID_PDM_SYSCLK_SEL	77
#define AUD_CLKID_PDM_SYSCLK_DIV	78
#define AUD_CLKID_MST_A_SCLK_PRE_EN	92
#define AUD_CLKID_MST_B_SCLK_PRE_EN	93
#define AUD_CLKID_MST_C_SCLK_PRE_EN	94
#define AUD_CLKID_MST_D_SCLK_PRE_EN	95
#define AUD_CLKID_MST_E_SCLK_PRE_EN	96
#define AUD_CLKID_MST_F_SCLK_PRE_EN	97
#define AUD_CLKID_MST_A_SCLK_DIV	98
#define AUD_CLKID_MST_B_SCLK_DIV	99
#define AUD_CLKID_MST_C_SCLK_DIV	100
#define AUD_CLKID_MST_D_SCLK_DIV	101
#define AUD_CLKID_MST_E_SCLK_DIV	102
#define AUD_CLKID_MST_F_SCLK_DIV	103
#define AUD_CLKID_MST_A_SCLK_POST_EN	104
#define AUD_CLKID_MST_B_SCLK_POST_EN	105
#define AUD_CLKID_MST_C_SCLK_POST_EN	106
#define AUD_CLKID_MST_D_SCLK_POST_EN	107
#define AUD_CLKID_MST_E_SCLK_POST_EN	108
#define AUD_CLKID_MST_F_SCLK_POST_EN	109
#define AUD_CLKID_MST_A_LRCLK_DIV	110
#define AUD_CLKID_MST_B_LRCLK_DIV	111
#define AUD_CLKID_MST_C_LRCLK_DIV	112
#define AUD_CLKID_MST_D_LRCLK_DIV	113
#define AUD_CLKID_MST_E_LRCLK_DIV	114
#define AUD_CLKID_MST_F_LRCLK_DIV	115
#define AUD_CLKID_TDMIN_A_SCLK_PRE_EN	137
#define AUD_CLKID_TDMIN_B_SCLK_PRE_EN	138
#define AUD_CLKID_TDMIN_C_SCLK_PRE_EN	139
#define AUD_CLKID_TDMIN_LB_SCLK_PRE_EN	140
#define AUD_CLKID_TDMOUT_A_SCLK_PRE_EN	141
#define AUD_CLKID_TDMOUT_B_SCLK_PRE_EN	142
#define AUD_CLKID_TDMOUT_C_SCLK_PRE_EN	143
#define AUD_CLKID_TDMIN_A_SCLK_POST_EN	144
#define AUD_CLKID_TDMIN_B_SCLK_POST_EN	145
#define AUD_CLKID_TDMIN_C_SCLK_POST_EN	146
#define AUD_CLKID_TDMIN_LB_SCLK_POST_EN	147
#define AUD_CLKID_TDMOUT_A_SCLK_POST_EN	148
#define AUD_CLKID_TDMOUT_B_SCLK_POST_EN	149
#define AUD_CLKID_TDMOUT_C_SCLK_POST_EN	150
#define AUD_CLKID_SPDIFOUT_B_CLK_SEL	153
#define AUD_CLKID_SPDIFOUT_B_CLK_DIV	154
#define AUD_CLKID_CLK81_EN		173
#define AUD_CLKID_SYSCLK_A_DIV		174
#define AUD_CLKID_SYSCLK_B_DIV		175
#define AUD_CLKID_SYSCLK_A_EN		176
#define AUD_CLKID_SYSCLK_B_EN		177

/* include the CLKIDs which are part of the DT bindings */
#include <dt-bindings/clock/axg-audio-clkc.h>

#define NR_CLKS	178

#endif /*__AXG_AUDIO_CLKC_H */
