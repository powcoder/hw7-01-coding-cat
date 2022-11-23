https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/* drivers/gpu/drm/exynos/regs-scaler.h
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 * Author: Andrzej Pietrasiewicz <andrzejtp2010@gmail.com>
 *
 * Register definition file for Samsung scaler driver
 */

#ifndef EXYNOS_REGS_SCALER_H
#define EXYNOS_REGS_SCALER_H

/* Register part */

/* Global setting */
#define SCALER_STATUS			0x0	/* no shadow */
#define SCALER_CFG			0x4

/* Interrupt */
#define SCALER_INT_EN			0x8	/* no shadow */
#define SCALER_INT_STATUS		0xc	/* no shadow */

/* SRC */
#define SCALER_SRC_CFG			0x10
#define SCALER_SRC_Y_BASE		0x14
#define SCALER_SRC_CB_BASE		0x18
#define SCALER_SRC_CR_BASE		0x294
#define SCALER_SRC_SPAN			0x1c
#define SCALER_SRC_Y_POS		0x20
#define SCALER_SRC_WH			0x24
#define SCALER_SRC_C_POS		0x28

/* DST */
#define SCALER_DST_CFG			0x30
#define SCALER_DST_Y_BASE		0x34
#define SCALER_DST_CB_BASE		0x38
#define SCALER_DST_CR_BASE		0x298
#define SCALER_DST_SPAN			0x3c
#define SCALER_DST_WH			0x40
#define SCALER_DST_POS			0x44

/* Ratio */
#define SCALER_H_RATIO			0x50
#define SCALER_V_RATIO			0x54

/* Rotation */
#define SCALER_ROT_CFG			0x58

/* Coefficient */
/*
 * YHCOEF_{x}{A|B|C|D}			CHCOEF_{x}{A|B|C|D}
 *
 *	A	B	C	D	A	B	C	D
 * 0	60	64	68	6c	140	144	148	14c
 * 1	70	74	78	7c	150	154	158	15c
 * 2	80	84	88	8c	160	164	168	16c
 * 3	90	94	98	9c	170	174	178	17c
 * 4	a0	a4	a8	ac	180	184	188	18c
 * 5	b0	b4	b8	bc	190	194	198	19c
 * 6	c0	c4	c8	cc	1a0	1a4	1a8	1ac
 * 7	d0	d4	d8	dc	1b0	1b4	1b8	1bc
 * 8	e0	e4	e8	ec	1c0	1c4	1c8	1cc
 *
 *
 * YVCOEF_{x}{A|B}			CVCOEF_{x}{A|B}
 *
 *	A	B			A	B
 * 0	f0	f4			1d0	1d4
 * 1	f8	fc			1d8	1dc
 * 2	100	104			1e0	1e4
 * 3	108	10c			1e8	1ec
 * 4	110	114			1f0	1f4
 * 5	118	11c			1f8	1fc
 * 6	120	124			200	204
 * 7	128	12c			208	20c
 * 8	130	134			210	214
 */
#define _SCALER_HCOEF_DELTA(r, c)	((r) * 0x10 + (c) * 0x4)
#define _SCALER_VCOEF_DELTA(r, c)	((r) * 0x8 + (c) * 0x4)

#define SCALER_YHCOEF(r, c)		(0x60 + _SCALER_HCOEF_DELTA((r), (c)))
#define SCALER_YVCOEF(r, c)		(0xf0 + _SCALER_VCOEF_DELTA((r), (c)))
#define SCALER_CHCOEF(r, c)		(0x140 + _SCALER_HCOEF_DELTA((r), (c)))
#define SCALER_CVCOEF(r, c)		(0x1d0 + _SCALER_VCOEF_DELTA((r), (c)))


/* Color Space Conversion */
#define SCALER_CSC_COEF(x, y)		(0x220 + (y) * 0xc + (x) * 0x4)

/* Dithering */
#define SCALER_DITH_CFG			0x250

/* Version Number */
#define SCALER_VER			0x260	/* no shadow */

/* Cycle count and Timeout */
#define SCALER_CYCLE_COUNT		0x278	/* no shadow */
#define SCALER_TIMEOUT_CTRL		0x2c0	/* no shadow */
#define SCALER_TIMEOUT_CNT		0x2c4	/* no shadow */

/* Blending */
#define SCALER_SRC_BLEND_COLOR		0x280
#define SCALER_SRC_BLEND_ALPHA		0x284
#define SCALER_DST_BLEND_COLOR		0x288
#define SCALER_DST_BLEND_ALPHA		0x28c

/* Color Fill */
#define SCALER_FILL_COLOR		0x290

/* Multiple Command Queue */
#define SCALER_ADDR_Q_CONFIG		0x2a0	/* no shadow */
#define SCALER_SRC_ADDR_Q_STATUS	0x2a4	/* no shadow */
#define SCALER_SRC_ADDR_Q		0x2a8	/* no shadow */

/* CRC */
#define SCALER_CRC_COLOR00_10		0x2b0	/* no shadow */
#define SCALER_CRC_COLOR20_30		0x2b4	/* no shadow */
#define SCALER_CRC_COLOR01_11		0x2b8	/* no shadow */
#define SCALER_CRC_COLOR21_31		0x2bc	/* no shadow */

/* Shadow Registers */
#define SCALER_SHADOW_OFFSET		0x1000


/* Bit definition part */
#define SCALER_MASK(hi_b, lo_b)		((1 << ((hi_b) - (lo_b) + 1)) - 1)
#define SCALER_GET(reg, hi_b, lo_b)	\
	(((reg) >> (lo_b)) & SCALER_MASK(hi_b, lo_b))
#define SCALER_SET(val, hi_b, lo_b) \
	(((val) & SCALER_MASK(hi_b, lo_b)) << lo_b)

/* SCALER_STATUS */
#define SCALER_STATUS_SCALER_RUNNING		(1 << 1)
#define SCALER_STATUS_SCALER_READY_CLK_DOWN	(1 << 0)

/* SCALER_CFG */
#define SCALER_CFG_FILL_EN			(1 << 24)
#define SCALER_CFG_BLEND_COLOR_DIVIDE_ALPHA_EN	(1 << 17)
#define SCALER_CFG_BLEND_EN			(1 << 16)
#define SCALER_CFG_CSC_Y_OFFSET_SRC_EN		(1 << 10)
#define SCALER_CFG_CSC_Y_OFFSET_DST_EN		(1 << 9)
#define SCALER_CFG_16_BURST_MODE		(1 << 8)
#define SCALER_CFG_SOFT_RESET			(1 << 1)
#define SCALER_CFG_START_CMD			(1 << 0)

/* SCALER_INT_EN */
#define SCALER_INT_EN_TIMEOUT			(1 << 31)
#define SCALER_INT_EN_ILLEGAL_BLEND		(1 << 24)
#define SCALER_INT_EN_ILLEGAL_RATIO		(1 << 23)
#define SCALER_INT_EN_ILLEGAL_DST_HEIGHT	(1 << 22)
#define SCALER_INT_EN_ILLEGAL_DST_WIDTH		(1 << 21)
#define SCALER_INT_EN_ILLEGAL_DST_V_POS		(1 << 20)
#define SCALER_INT_EN_ILLEGAL_DST_H_POS		(1 << 19)
#define SCALER_INT_EN_ILLEGAL_DST_C_SPAN	(1 << 18)
#define SCALER_INT_EN_ILLEGAL_DST_Y_SPAN	(1 << 17)
#define SCALER_INT_EN_ILLEGAL_DST_CR_BASE	(1 << 16)
#define SCALER_INT_EN_ILLEGAL_DST_CB_BASE	(1 << 15)
#define SCALER_INT_EN_ILLEGAL_DST_Y_BASE	(1 << 14)
#define SCALER_INT_EN_ILLEGAL_DST_COLOR		(1 << 13)
#define SCALER_INT_EN_ILLEGAL_SRC_HEIGHT	(1 << 12)
#define SCALER_INT_EN_ILLEGAL_SRC_WIDTH		(1 << 11)
#define SCALER_INT_EN_ILLEGAL_SRC_CV_POS	(1 << 10)
#define SCALER_INT_EN_ILLEGAL_SRC_CH_POS	(1 << 9)
#define SCALER_INT_EN_ILLEGAL_SRC_YV_POS	(1 << 8)
#define SCALER_INT_EN_ILLEGAL_SRC_YH_POS	(1 << 7)
#define SCALER_INT_EN_ILLEGAL_DST_SPAN		(1 << 6)
#define SCALER_INT_EN_ILLEGAL_SRC_Y_SPAN	(1 << 5)
#define SCALER_INT_EN_ILLEGAL_SRC_CR_BASE	(1 << 4)
#define SCALER_INT_EN_ILLEGAL_SRC_CB_BASE	(1 << 3)
#define SCALER_INT_EN_ILLEGAL_SRC_Y_BASE	(1 << 2)
#define SCALER_INT_EN_ILLEGAL_SRC_COLOR		(1 << 1)
#define SCALER_INT_EN_FRAME_END			(1 << 0)

/* SCALER_INT_STATUS */
#define SCALER_INT_STATUS_TIMEOUT		(1 << 31)
#define SCALER_INT_STATUS_ILLEGAL_BLEND		(1 << 24)
#define SCALER_INT_STATUS_ILLEGAL_RATIO		(1 << 23)
#define SCALER_INT_STATUS_ILLEGAL_DST_HEIGHT	(1 << 22)
#define SCALER_INT_STATUS_ILLEGAL_DST_WIDTH	(1 << 21)
#define SCALER_INT_STATUS_ILLEGAL_DST_V_POS	(1 << 20)
#define SCALER_INT_STATUS_ILLEGAL_DST_H_POS	(1 << 19)
#define SCALER_INT_STATUS_ILLEGAL_DST_C_SPAN	(1 << 18)
#define SCALER_INT_STATUS_ILLEGAL_DST_Y_SPAN	(1 << 17)
#define SCALER_INT_STATUS_ILLEGAL_DST_CR_BASE	(1 << 16)
#define SCALER_INT_STATUS_ILLEGAL_DST_CB_BASE	(1 << 15)
#define SCALER_INT_STATUS_ILLEGAL_DST_Y_BASE	(1 << 14)
#define SCALER_INT_STATUS_ILLEGAL_DST_COLOR	(1 << 13)
#define SCALER_INT_STATUS_ILLEGAL_SRC_HEIGHT	(1 << 12)
#define SCALER_INT_STATUS_ILLEGAL_SRC_WIDTH	(1 << 11)
#define SCALER_INT_STATUS_ILLEGAL_SRC_CV_POS	(1 << 10)
#define SCALER_INT_STATUS_ILLEGAL_SRC_CH_POS	(1 << 9)
#define SCALER_INT_STATUS_ILLEGAL_SRC_YV_POS	(1 << 8)
#define SCALER_INT_STATUS_ILLEGAL_SRC_YH_POS	(1 << 7)
#define SCALER_INT_STATUS_ILLEGAL_DST_SPAN	(1 << 6)
#define SCALER_INT_STATUS_ILLEGAL_SRC_Y_SPAN	(1 << 5)
#define SCALER_INT_STATUS_ILLEGAL_SRC_CR_BASE	(1 << 4)
#define SCALER_INT_STATUS_ILLEGAL_SRC_CB_BASE	(1 << 3)
#define SCALER_INT_STATUS_ILLEGAL_SRC_Y_BASE	(1 << 2)
#define SCALER_INT_STATUS_ILLEGAL_SRC_COLOR	(1 << 1)
#define SCALER_INT_STATUS_FRAME_END		(1 << 0)

/* SCALER_SRC_CFG */
#define SCALER_SRC_CFG_TILE_EN			(1 << 10)
#define SCALER_SRC_CFG_GET_BYTE_SWAP(r)		SCALER_GET(r, 6, 5)
#define SCALER_SRC_CFG_SET_BYTE_SWAP(v)		SCALER_SET(v, 6, 5)
#define SCALER_SRC_CFG_GET_COLOR_FORMAT(r)	SCALER_GET(r, 4, 0)
#define SCALER_SRC_CFG_SET_COLOR_FORMAT(v)	SCALER_SET(v, 4, 0)
#define SCALER_YUV420_2P_UV			0
#define SCALER_YUV422_2P_UV			2
#define SCALER_YUV444_2P_UV			3
#define SCALER_RGB_565				4
#define SCALER_ARGB1555				5
#define SCALER_ARGB8888				6
#define SCALER_ARGB8888_PRE			7
#define SCALER_YUV422_1P_YVYU			9
#define SCALER_YUV422_1P_YUYV			10
#define SCALER_YUV422_1P_UYVY			11
#define SCALER_ARGB4444				12
#define SCALER_L8A8				13
#define SCALER_RGBA8888				14
#define SCALER_L8				15
#define SCALER_YUV420_2P_VU			16
#define SCALER_YUV422_2P_VU			18
#define SCALER_YUV444_2P_VU			19
#define SCALER_YUV420_3P			20
#define SCALER_YUV422_3P			22
#define SCALER_YUV444_3P			23

/* SCALER_SRC_SPAN */
#define SCALER_SRC_SPAN_GET_C_SPAN(r)		SCALER_GET(r, 29, 16)
#define SCALER_SRC_SPAN_SET_C_SPAN(v)		SCALER_SET(v, 29, 16)
#define SCALER_SRC_SPAN_GET_Y_SPAN(r)		SCALER_GET(r, 13, 0)
#define SCALER_SRC_SPAN_SET_Y_SPAN(v)		SCALER_SET(v, 13, 0)

/* SCALER_SRC_Y_POS */
#define SCALER_SRC_Y_POS_GET_YH_POS(r)		SCALER_GET(r, 31, 16)
#define SCALER_SRC_Y_POS_SET_YH_POS(v)		SCALER_SET(v, 31, 16)
#define SCALER_SRC_Y_POS_GET_YV_POS(r)		SCALER_GET(r, 15, 0)
#define SCALER_SRC_Y_POS_SET_YV_POS(v)		SCALER_SET(v, 15, 0)

/* SCALER_SRC_WH */
#define SCALER_SRC_WH_GET_WIDTH(r)		SCALER_GET(r, 29, 16)
#define SCALER_SRC_WH_SET_WIDTH(v)		SCALER_SET(v, 29, 16)
#define SCALER_SRC_WH_GET_HEIGHT(r)		SCALER_GET(r, 13, 0)
#define SCALER_SRC_WH_SET_HEIGHT(v)		SCALER_SET(v, 13, 0)

/* SCALER_SRC_C_POS */
#define SCALER_SRC_C_POS_GET_CH_POS(r)		SCALER_GET(r, 31, 16)
#define SCALER_SRC_C_POS_SET_CH_POS(v)		SCALER_SET(v, 31, 16)
#define SCALER_SRC_C_POS_GET_CV_POS(r)		SCALER_GET(r, 15, 0)
#define SCALER_SRC_C_POS_SET_CV_POS(v)		SCALER_SET(v, 15, 0)

/* SCALER_DST_CFG */
#define SCALER_DST_CFG_GET_BYTE_SWAP(r)		SCALER_GET(r, 6, 5)
#define SCALER_DST_CFG_SET_BYTE_SWAP(v)		SCALER_SET(v, 6, 5)
#define SCALER_DST_CFG_GET_COLOR_FORMAT(r)	SCALER_GET(r, 4, 0)
#define SCALER_DST_CFG_SET_COLOR_FORMAT(v)	SCALER_SET(v, 4, 0)

/* SCALER_DST_SPAN */
#define SCALER_DST_SPAN_GET_C_SPAN(r)		SCALER_GET(r, 29, 16)
#define SCALER_DST_SPAN_SET_C_SPAN(v)		SCALER_SET(v, 29, 16)
#define SCALER_DST_SPAN_GET_Y_SPAN(r)		SCALER_GET(r, 13, 0)
#define SCALER_DST_SPAN_SET_Y_SPAN(v)		SCALER_SET(v, 13, 0)

/* SCALER_DST_WH */
#define SCALER_DST_WH_GET_WIDTH(r)		SCALER_GET(r, 29, 16)
#define SCALER_DST_WH_SET_WIDTH(v)		SCALER_SET(v, 29, 16)
#define SCALER_DST_WH_GET_HEIGHT(r)		SCALER_GET(r, 13, 0)
#define SCALER_DST_WH_SET_HEIGHT(v)		SCALER_SET(v, 13, 0)

/* SCALER_DST_POS */
#define SCALER_DST_POS_GET_H_POS(r)		SCALER_GET(r, 29, 16)
#define SCALER_DST_POS_SET_H_POS(v)		SCALER_SET(v, 29, 16)
#define SCALER_DST_POS_GET_V_POS(r)		SCALER_GET(r, 13, 0)
#define SCALER_DST_POS_SET_V_POS(v)		SCALER_SET(v, 13, 0)

/* SCALER_H_RATIO */
#define SCALER_H_RATIO_GET(r)			SCALER_GET(r, 18, 0)
#define SCALER_H_RATIO_SET(v)			SCALER_SET(v, 18, 0)

/* SCALER_V_RATIO */
#define SCALER_V_RATIO_GET(r)			SCALER_GET(r, 18, 0)
#define SCALER_V_RATIO_SET(v)			SCALER_SET(v, 18, 0)

/* SCALER_ROT_CFG */
#define SCALER_ROT_CFG_FLIP_X_EN		(1 << 3)
#define SCALER_ROT_CFG_FLIP_Y_EN		(1 << 2)
#define SCALER_ROT_CFG_GET_ROTMODE(r)		SCALER_GET(r, 1, 0)
#define SCALER_ROT_CFG_SET_ROTMODE(v)		SCALER_SET(v, 1, 0)
#define SCALER_ROT_MODE_90			1
#define SCALER_ROT_MODE_180			2
#define SCALER_ROT_MODE_270			3

/* SCALER_HCOEF, SCALER_VCOEF */
#define SCALER_COEF_SHIFT(i)			(16 * (1 - (i) % 2))
#define SCALER_COEF_GET(r, i)			\
				(((r) >> SCALER_COEF_SHIFT(i)) & 0x1ff)
#define SCALER_COEF_SET(v, i)			\
				(((v) & 0x1ff) << SCALER_COEF_SHIFT(i))

/* SCALER_CSC_COEFxy */
#define SCALER_CSC_COEF_GET(r)			SCALER_GET(r, 11, 0)
#define SCALER_CSC_COEF_SET(v)			SCALER_SET(v, 11, 0)

/* SCALER_DITH_CFG */
#define SCALER_DITH_CFG_GET_R_TYPE(r)		SCALER_GET(r, 8, 6)
#define SCALER_DITH_CFG_SET_R_TYPE(v)		SCALER_SET(v, 8, 6)
#define SCALER_DITH_CFG_GET_G_TYPE(r)		SCALER_GET(r, 5, 3)
#define SCALER_DITH_CFG_SET_G_TYPE(v)		SCALER_SET(v, 5, 3)
#define SCALER_DITH_CFG_GET_B_TYPE(r)		SCALER_GET(r, 2, 0)
#define SCALER_DITH_CFG_SET_B_TYPE(v)		SCALER_SET(v, 2, 0)

/* SCALER_TIMEOUT_CTRL */
#define SCALER_TIMEOUT_CTRL_GET_TIMER_VALUE(r)	SCALER_GET(r, 31, 16)
#define SCALER_TIMEOUT_CTRL_SET_TIMER_VALUE(v)	SCALER_SET(v, 31, 16)
#define SCALER_TIMEOUT_CTRL_GET_TIMER_DIV(r)	SCALER_GET(r, 7, 4)
#define SCALER_TIMEOUT_CTRL_SET_TIMER_DIV(v)	SCALER_SET(v, 7, 4)
#define SCALER_TIMEOUT_CTRL_TIMER_ENABLE	(1 << 0)

/* SCALER_TIMEOUT_CNT */
#define SCALER_TIMEOUT_CTRL_GET_TIMER_COUNT(r)	SCALER_GET(r, 31, 16)

/* SCALER_SRC_BLEND_COLOR */
#define SCALER_SRC_BLEND_COLOR_SEL_INV		(1 << 31)
#define SCALER_SRC_BLEND_COLOR_GET_SEL(r)	SCALER_GET(r, 30, 29)
#define SCALER_SRC_BLEND_COLOR_SET_SEL(v)	SCALER_SET(v, 30, 29)
#define SCALER_SRC_BLEND_COLOR_OP_SEL_INV	(1 << 28)
#define SCALER_SRC_BLEND_COLOR_GET_OP_SEL(r)	SCALER_GET(r, 27, 24)
#define SCALER_SRC_BLEND_COLOR_SET_OP_SEL(v)	SCALER_SET(v, 27, 24)
#define SCALER_SRC_BLEND_COLOR_GET_COLOR0(r)	SCALER_GET(r, 23, 16)
#define SCALER_SRC_BLEND_COLOR_SET_COLOR0(v)	SCALER_SET(v, 23, 16)
#define SCALER_SRC_BLEND_COLOR_GET_COLOR1(r)	SCALER_GET(r, 15, 8)
#define SCALER_SRC_BLEND_COLOR_SET_COLOR1(v)	SCALER_SET(v, 15, 8)
#define SCALER_SRC_BLEND_COLOR_GET_COLOR2(r)	SCALER_GET(r, 7, 0)
#define SCALER_SRC_BLEND_COLOR_SET_COLOR2(v)	SCALER_SET(v, 7, 0)

/* SCALER_SRC_BLEND_ALPHA */
#define SCALER_SRC_BLEND_ALPHA_SEL_INV		(1 << 31)
#define SCALER_SRC_BLEND_ALPHA_GET_SEL(r)	SCALER_GET(r, 30, 29)
#define SCALER_SRC_BLEND_ALPHA_SET_SEL(v)	SCALER_SET(v, 30, 29)
#define SCALER_SRC_BLEND_ALPHA_OP_SEL_INV	(1 << 28)
#define SCALER_SRC_BLEND_ALPHA_GET_OP_SEL(r)	SCALER_GET(r, 27, 24)
#define SCALER_SRC_BLEND_ALPHA_SET_OP_SEL(v)	SCALER_SET(v, 27, 24)
#define SCALER_SRC_BLEND_ALPHA_GET_ALPHA(r)	SCALER_GET(r, 7, 0)
#define SCALER_SRC_BLEND_ALPHA_SET_ALPHA(v)	SCALER_SET(v, 7, 0)

/* SCALER_DST_BLEND_COLOR */
#define SCALER_DST_BLEND_COLOR_SEL_INV		(1 << 31)
#define SCALER_DST_BLEND_COLOR_GET_SEL(r)	SCALER_GET(r, 30, 29)
#define SCALER_DST_BLEND_COLOR_SET_SEL(v)	SCALER_SET(v, 30, 29)
#define SCALER_DST_BLEND_COLOR_OP_SEL_INV	(1 << 28)
#define SCALER_DST_BLEND_COLOR_GET_OP_SEL(r)	SCALER_GET(r, 27, 24)
#define SCALER_DST_BLEND_COLOR_SET_OP_SEL(v)	SCALER_SET(v, 27, 24)
#define SCALER_DST_BLEND_COLOR_GET_COLOR0(r)	SCALER_GET(r, 23, 16)
#define SCALER_DST_BLEND_COLOR_SET_COLOR0(v)	SCALER_SET(v, 23, 16)
#define SCALER_DST_BLEND_COLOR_GET_COLOR1(r)	SCALER_GET(r, 15, 8)
#define SCALER_DST_BLEND_COLOR_SET_COLOR1(v)	SCALER_SET(v, 15, 8)
#define SCALER_DST_BLEND_COLOR_GET_COLOR2(r)	SCALER_GET(r, 7, 0)
#define SCALER_DST_BLEND_COLOR_SET_COLOR2(v)	SCALER_SET(v, 7, 0)

/* SCALER_DST_BLEND_ALPHA */
#define SCALER_DST_BLEND_ALPHA_SEL_INV		(1 << 31)
#define SCALER_DST_BLEND_ALPHA_GET_SEL(r)	SCALER_GET(r, 30, 29)
#define SCALER_DST_BLEND_ALPHA_SET_SEL(v)	SCALER_SET(v, 30, 29)
#define SCALER_DST_BLEND_ALPHA_OP_SEL_INV	(1 << 28)
#define SCALER_DST_BLEND_ALPHA_GET_OP_SEL(r)	SCALER_GET(r, 27, 24)
#define SCALER_DST_BLEND_ALPHA_SET_OP_SEL(v)	SCALER_SET(v, 27, 24)
#define SCALER_DST_BLEND_ALPHA_GET_ALPHA(r)	SCALER_GET(r, 7, 0)
#define SCALER_DST_BLEND_ALPHA_SET_ALPHA(v)	SCALER_SET(v, 7, 0)

/* SCALER_FILL_COLOR */
#define SCALER_FILL_COLOR_GET_ALPHA(r)		SCALER_GET(r, 31, 24)
#define SCALER_FILL_COLOR_SET_ALPHA(v)		SCALER_SET(v, 31, 24)
#define SCALER_FILL_COLOR_GET_FILL_COLOR0(r)	SCALER_GET(r, 23, 16)
#define SCALER_FILL_COLOR_SET_FILL_COLOR0(v)	SCALER_SET(v, 23, 16)
#define SCALER_FILL_COLOR_GET_FILL_COLOR1(r)	SCALER_GET(r, 15, 8)
#define SCALER_FILL_COLOR_SET_FILL_COLOR1(v)	SCALER_SET(v, 15, 8)
#define SCALER_FILL_COLOR_GET_FILL_COLOR2(r)	SCALER_GET(r, 7, 0)
#define SCALER_FILL_COLOR_SET_FILL_COLOR2(v)	SCALER_SET(v, 7, 0)

/* SCALER_ADDR_Q_CONFIG */
#define SCALER_ADDR_Q_CONFIG_RST		(1 << 0)

/* SCALER_SRC_ADDR_Q_STATUS */
#define SCALER_SRC_ADDR_Q_STATUS_Y_FULL		(1 << 23)
#define SCALER_SRC_ADDR_Q_STATUS_Y_EMPTY	(1 << 22)
#define SCALER_SRC_ADDR_Q_STATUS_GET_Y_WR_IDX(r)	SCALER_GET(r, 21, 16)
#define SCALER_SRC_ADDR_Q_STATUS_CB_FULL	(1 << 15)
#define SCALER_SRC_ADDR_Q_STATUS_CB_EMPTY	(1 << 14)
#define SCALER_SRC_ADDR_Q_STATUS_GET_CB_WR_IDX(r)	SCALER_GET(r, 13, 8)
#define SCALER_SRC_ADDR_Q_STATUS_CR_FULL	(1 << 7)
#define SCALER_SRC_ADDR_Q_STATUS_CR_EMPTY	(1 << 6)
#define SCALER_SRC_ADDR_Q_STATUS_GET_CR_WR_IDX(r)	SCALER_GET(r, 5, 0)

/* SCALER_DST_ADDR_Q_STATUS */
#define SCALER_DST_ADDR_Q_STATUS_Y_FULL		(1 << 23)
#define SCALER_DST_ADDR_Q_STATUS_Y_EMPTY	(1 << 22)
#define SCALER_DST_ADDR_Q_STATUS_GET_Y_WR_IDX(r)	SCALER_GET(r, 21, 16)
#define SCALER_DST_ADDR_Q_STATUS_CB_FULL	(1 << 15)
#define SCALER_DST_ADDR_Q_STATUS_CB_EMPTY	(1 << 14)
#define SCALER_DST_ADDR_Q_STATUS_GET_CB_WR_IDX(r)	SCALER_GET(r, 13, 8)
#define SCALER_DST_ADDR_Q_STATUS_CR_FULL	(1 << 7)
#define SCALER_DST_ADDR_Q_STATUS_CR_EMPTY	(1 << 6)
#define SCALER_DST_ADDR_Q_STATUS_GET_CR_WR_IDX(r)	SCALER_GET(r, 5, 0)

/* SCALER_CRC_COLOR00_10 */
#define SCALER_CRC_COLOR00_10_GET_00(r)		SCALER_GET(r, 31, 16)
#define SCALER_CRC_COLOR00_10_GET_10(r)		SCALER_GET(r, 15, 0)

/* SCALER_CRC_COLOR20_30 */
#define SCALER_CRC_COLOR20_30_GET_20(r)		SCALER_GET(r, 31, 16)
#define SCALER_CRC_COLOR20_30_GET_30(r)		SCALER_GET(r, 15, 0)

/* SCALER_CRC_COLOR01_11 */
#define SCALER_CRC_COLOR01_11_GET_01(r)		SCALER_GET(r, 31, 16)
#define SCALER_CRC_COLOR01_11_GET_11(r)		SCALER_GET(r, 15, 0)

/* SCALER_CRC_COLOR21_31 */
#define SCALER_CRC_COLOR21_31_GET_21(r)		SCALER_GET(r, 31, 16)
#define SCALER_CRC_COLOR21_31_GET_31(r)		SCALER_GET(r, 15, 0)

#endif /* EXYNOS_REGS_SCALER_H */
