https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 BayLibre, SAS.
 * Author: Jerome Brunet <jbrunet@baylibre.com>
 *
 */

#ifndef _DT_BINDINGS_AMLOGIC_MESON_G12A_AUDIO_RESET_H
#define _DT_BINDINGS_AMLOGIC_MESON_G12A_AUDIO_RESET_H

#define AUD_RESET_PDM		0
#define AUD_RESET_TDMIN_A	1
#define AUD_RESET_TDMIN_B	2
#define AUD_RESET_TDMIN_C	3
#define AUD_RESET_TDMIN_LB	4
#define AUD_RESET_LOOPBACK	5
#define AUD_RESET_TODDR_A	6
#define AUD_RESET_TODDR_B	7
#define AUD_RESET_TODDR_C	8
#define AUD_RESET_FRDDR_A	9
#define AUD_RESET_FRDDR_B	10
#define AUD_RESET_FRDDR_C	11
#define AUD_RESET_TDMOUT_A	12
#define AUD_RESET_TDMOUT_B	13
#define AUD_RESET_TDMOUT_C	14
#define AUD_RESET_SPDIFOUT	15
#define AUD_RESET_SPDIFOUT_B	16
#define AUD_RESET_SPDIFIN	17
#define AUD_RESET_EQDRC		18
#define AUD_RESET_RESAMPLE	19
#define AUD_RESET_DDRARB	20
#define AUD_RESET_POWDET	21
#define AUD_RESET_TORAM		22
#define AUD_RESET_TOACODEC	23
#define AUD_RESET_TOHDMITX	24
#define AUD_RESET_CLKTREE	25

/* SM1 added resets */
#define AUD_RESET_RESAMPLE_B	26
#define AUD_RESET_TOVAD		27
#define AUD_RESET_LOCKER	28
#define AUD_RESET_SPDIFIN_LB	29
#define AUD_RESET_FRATV		30
#define AUD_RESET_FRHDMIRX	31
#define AUD_RESET_FRDDR_D	32
#define AUD_RESET_TODDR_D	33
#define AUD_RESET_LOOPBACK_B	34
#define AUD_RESET_EARCTX	35
#define AUD_RESET_EARCRX	36
#define AUD_RESET_FRDDR_E	37
#define AUD_RESET_TODDR_E	38

#endif
