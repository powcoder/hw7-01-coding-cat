https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2013 Texas Instruments Inc.
 *
 * David Griego, <dagriego@biglakesoftware.com>
 * Dale Farnsworth, <dale@farnsworth.org>
 * Archit Taneja, <archit@ti.com>
 */

#ifndef __TI_VPE_REGS_H
#define __TI_VPE_REGS_H

/* VPE register offsets and field selectors */

/* VPE top level regs */
#define VPE_PID				0x0000
#define VPE_PID_MINOR_MASK		0x3f
#define VPE_PID_MINOR_SHIFT		0
#define VPE_PID_CUSTOM_MASK		0x03
#define VPE_PID_CUSTOM_SHIFT		6
#define VPE_PID_MAJOR_MASK		0x07
#define VPE_PID_MAJOR_SHIFT		8
#define VPE_PID_RTL_MASK		0x1f
#define VPE_PID_RTL_SHIFT		11
#define VPE_PID_FUNC_MASK		0xfff
#define VPE_PID_FUNC_SHIFT		16
#define VPE_PID_SCHEME_MASK		0x03
#define VPE_PID_SCHEME_SHIFT		30

#define VPE_SYSCONFIG			0x0010
#define VPE_SYSCONFIG_IDLE_MASK		0x03
#define VPE_SYSCONFIG_IDLE_SHIFT	2
#define VPE_SYSCONFIG_STANDBY_MASK	0x03
#define VPE_SYSCONFIG_STANDBY_SHIFT	4
#define VPE_FORCE_IDLE_MODE		0
#define VPE_NO_IDLE_MODE		1
#define VPE_SMART_IDLE_MODE		2
#define VPE_SMART_IDLE_WAKEUP_MODE	3
#define VPE_FORCE_STANDBY_MODE		0
#define VPE_NO_STANDBY_MODE		1
#define VPE_SMART_STANDBY_MODE		2
#define VPE_SMART_STANDBY_WAKEUP_MODE	3

#define VPE_INT0_STATUS0_RAW_SET	0x0020
#define VPE_INT0_STATUS0_RAW		VPE_INT0_STATUS0_RAW_SET
#define VPE_INT0_STATUS0_CLR		0x0028
#define VPE_INT0_STATUS0		VPE_INT0_STATUS0_CLR
#define VPE_INT0_ENABLE0_SET		0x0030
#define VPE_INT0_ENABLE0		VPE_INT0_ENABLE0_SET
#define VPE_INT0_ENABLE0_CLR		0x0038
#define VPE_INT0_LIST0_COMPLETE		BIT(0)
#define VPE_INT0_LIST0_NOTIFY		BIT(1)
#define VPE_INT0_LIST1_COMPLETE		BIT(2)
#define VPE_INT0_LIST1_NOTIFY		BIT(3)
#define VPE_INT0_LIST2_COMPLETE		BIT(4)
#define VPE_INT0_LIST2_NOTIFY		BIT(5)
#define VPE_INT0_LIST3_COMPLETE		BIT(6)
#define VPE_INT0_LIST3_NOTIFY		BIT(7)
#define VPE_INT0_LIST4_COMPLETE		BIT(8)
#define VPE_INT0_LIST4_NOTIFY		BIT(9)
#define VPE_INT0_LIST5_COMPLETE		BIT(10)
#define VPE_INT0_LIST5_NOTIFY		BIT(11)
#define VPE_INT0_LIST6_COMPLETE		BIT(12)
#define VPE_INT0_LIST6_NOTIFY		BIT(13)
#define VPE_INT0_LIST7_COMPLETE		BIT(14)
#define VPE_INT0_LIST7_NOTIFY		BIT(15)
#define VPE_INT0_DESCRIPTOR		BIT(16)
#define VPE_DEI_FMD_INT			BIT(18)

#define VPE_INT0_STATUS1_RAW_SET	0x0024
#define VPE_INT0_STATUS1_RAW		VPE_INT0_STATUS1_RAW_SET
#define VPE_INT0_STATUS1_CLR		0x002c
#define VPE_INT0_STATUS1		VPE_INT0_STATUS1_CLR
#define VPE_INT0_ENABLE1_SET		0x0034
#define VPE_INT0_ENABLE1		VPE_INT0_ENABLE1_SET
#define VPE_INT0_ENABLE1_CLR		0x003c
#define VPE_INT0_CHANNEL_GROUP0		BIT(0)
#define VPE_INT0_CHANNEL_GROUP1		BIT(1)
#define VPE_INT0_CHANNEL_GROUP2		BIT(2)
#define VPE_INT0_CHANNEL_GROUP3		BIT(3)
#define VPE_INT0_CHANNEL_GROUP4		BIT(4)
#define VPE_INT0_CHANNEL_GROUP5		BIT(5)
#define VPE_INT0_CLIENT			BIT(7)
#define VPE_DEI_ERROR_INT		BIT(16)
#define VPE_DS1_UV_ERROR_INT		BIT(22)

#define VPE_INTC_EOI			0x00a0

#define VPE_CLK_ENABLE			0x0100
#define VPE_VPEDMA_CLK_ENABLE		BIT(0)
#define VPE_DATA_PATH_CLK_ENABLE	BIT(1)

#define VPE_CLK_RESET			0x0104
#define VPE_VPDMA_CLK_RESET_MASK	0x1
#define VPE_VPDMA_CLK_RESET_SHIFT	0
#define VPE_DATA_PATH_CLK_RESET_MASK	0x1
#define VPE_DATA_PATH_CLK_RESET_SHIFT	1
#define VPE_MAIN_RESET_MASK		0x1
#define VPE_MAIN_RESET_SHIFT		31

#define VPE_CLK_FORMAT_SELECT		0x010c
#define VPE_CSC_SRC_SELECT_MASK		0x03
#define VPE_CSC_SRC_SELECT_SHIFT	0
#define VPE_RGB_OUT_SELECT		BIT(8)
#define VPE_DS_SRC_SELECT_MASK		0x07
#define VPE_DS_SRC_SELECT_SHIFT		9
#define VPE_DS_BYPASS			BIT(16)
#define VPE_COLOR_SEPARATE_422		BIT(18)

#define VPE_DS_SRC_DEI_SCALER		(5 << VPE_DS_SRC_SELECT_SHIFT)
#define VPE_CSC_SRC_DEI_SCALER		(3 << VPE_CSC_SRC_SELECT_SHIFT)

#define VPE_CLK_RANGE_MAP		0x011c
#define VPE_RANGE_RANGE_MAP_Y_MASK	0x07
#define VPE_RANGE_RANGE_MAP_Y_SHIFT	0
#define VPE_RANGE_RANGE_MAP_UV_MASK	0x07
#define VPE_RANGE_RANGE_MAP_UV_SHIFT	3
#define VPE_RANGE_MAP_ON		BIT(6)
#define VPE_RANGE_REDUCTION_ON		BIT(28)

/* VPE chrominance upsampler regs */
#define VPE_US1_R0			0x0304
#define VPE_US2_R0			0x0404
#define VPE_US3_R0			0x0504
#define VPE_US_C1_MASK			0x3fff
#define VPE_US_C1_SHIFT			2
#define VPE_US_C0_MASK			0x3fff
#define VPE_US_C0_SHIFT			18
#define VPE_US_MODE_MASK		0x03
#define VPE_US_MODE_SHIFT		16
#define VPE_ANCHOR_FID0_C1_MASK		0x3fff
#define VPE_ANCHOR_FID0_C1_SHIFT	2
#define VPE_ANCHOR_FID0_C0_MASK		0x3fff
#define VPE_ANCHOR_FID0_C0_SHIFT	18

#define VPE_US1_R1			0x0308
#define VPE_US2_R1			0x0408
#define VPE_US3_R1			0x0508
#define VPE_ANCHOR_FID0_C3_MASK		0x3fff
#define VPE_ANCHOR_FID0_C3_SHIFT	2
#define VPE_ANCHOR_FID0_C2_MASK		0x3fff
#define VPE_ANCHOR_FID0_C2_SHIFT	18

#define VPE_US1_R2			0x030c
#define VPE_US2_R2			0x040c
#define VPE_US3_R2			0x050c
#define VPE_INTERP_FID0_C1_MASK		0x3fff
#define VPE_INTERP_FID0_C1_SHIFT	2
#define VPE_INTERP_FID0_C0_MASK		0x3fff
#define VPE_INTERP_FID0_C0_SHIFT	18

#define VPE_US1_R3			0x0310
#define VPE_US2_R3			0x0410
#define VPE_US3_R3			0x0510
#define VPE_INTERP_FID0_C3_MASK		0x3fff
#define VPE_INTERP_FID0_C3_SHIFT	2
#define VPE_INTERP_FID0_C2_MASK		0x3fff
#define VPE_INTERP_FID0_C2_SHIFT	18

#define VPE_US1_R4			0x0314
#define VPE_US2_R4			0x0414
#define VPE_US3_R4			0x0514
#define VPE_ANCHOR_FID1_C1_MASK		0x3fff
#define VPE_ANCHOR_FID1_C1_SHIFT	2
#define VPE_ANCHOR_FID1_C0_MASK		0x3fff
#define VPE_ANCHOR_FID1_C0_SHIFT	18

#define VPE_US1_R5			0x0318
#define VPE_US2_R5			0x0418
#define VPE_US3_R5			0x0518
#define VPE_ANCHOR_FID1_C3_MASK		0x3fff
#define VPE_ANCHOR_FID1_C3_SHIFT	2
#define VPE_ANCHOR_FID1_C2_MASK		0x3fff
#define VPE_ANCHOR_FID1_C2_SHIFT	18

#define VPE_US1_R6			0x031c
#define VPE_US2_R6			0x041c
#define VPE_US3_R6			0x051c
#define VPE_INTERP_FID1_C1_MASK		0x3fff
#define VPE_INTERP_FID1_C1_SHIFT	2
#define VPE_INTERP_FID1_C0_MASK		0x3fff
#define VPE_INTERP_FID1_C0_SHIFT	18

#define VPE_US1_R7			0x0320
#define VPE_US2_R7			0x0420
#define VPE_US3_R7			0x0520
#define VPE_INTERP_FID0_C3_MASK		0x3fff
#define VPE_INTERP_FID0_C3_SHIFT	2
#define VPE_INTERP_FID0_C2_MASK		0x3fff
#define VPE_INTERP_FID0_C2_SHIFT	18

/* VPE de-interlacer regs */
#define VPE_DEI_FRAME_SIZE		0x0600
#define VPE_DEI_WIDTH_MASK		0x07ff
#define VPE_DEI_WIDTH_SHIFT		0
#define VPE_DEI_HEIGHT_MASK		0x07ff
#define VPE_DEI_HEIGHT_SHIFT		16
#define VPE_DEI_INTERLACE_BYPASS	BIT(29)
#define VPE_DEI_FIELD_FLUSH		BIT(30)
#define VPE_DEI_PROGRESSIVE		BIT(31)

#define VPE_MDT_BYPASS			0x0604
#define VPE_MDT_TEMPMAX_BYPASS		BIT(0)
#define VPE_MDT_SPATMAX_BYPASS		BIT(1)

#define VPE_MDT_SF_THRESHOLD		0x0608
#define VPE_MDT_SF_SC_THR1_MASK		0xff
#define VPE_MDT_SF_SC_THR1_SHIFT	0
#define VPE_MDT_SF_SC_THR2_MASK		0xff
#define VPE_MDT_SF_SC_THR2_SHIFT	0
#define VPE_MDT_SF_SC_THR3_MASK		0xff
#define VPE_MDT_SF_SC_THR3_SHIFT	0

#define VPE_EDI_CONFIG			0x060c
#define VPE_EDI_INP_MODE_MASK		0x03
#define VPE_EDI_INP_MODE_SHIFT		0
#define VPE_EDI_ENABLE_3D		BIT(2)
#define VPE_EDI_ENABLE_CHROMA_3D	BIT(3)
#define VPE_EDI_CHROMA3D_COR_THR_MASK	0xff
#define VPE_EDI_CHROMA3D_COR_THR_SHIFT	8
#define VPE_EDI_DIR_COR_LOWER_THR_MASK	0xff
#define VPE_EDI_DIR_COR_LOWER_THR_SHIFT	16
#define VPE_EDI_COR_SCALE_FACTOR_MASK	0xff
#define VPE_EDI_COR_SCALE_FACTOR_SHIFT	23

#define VPE_DEI_EDI_LUT_R0		0x0610
#define VPE_EDI_LUT0_MASK		0x1f
#define VPE_EDI_LUT0_SHIFT		0
#define VPE_EDI_LUT1_MASK		0x1f
#define VPE_EDI_LUT1_SHIFT		8
#define VPE_EDI_LUT2_MASK		0x1f
#define VPE_EDI_LUT2_SHIFT		16
#define VPE_EDI_LUT3_MASK		0x1f
#define VPE_EDI_LUT3_SHIFT		24

#define VPE_DEI_EDI_LUT_R1		0x0614
#define VPE_EDI_LUT0_MASK		0x1f
#define VPE_EDI_LUT0_SHIFT		0
#define VPE_EDI_LUT1_MASK		0x1f
#define VPE_EDI_LUT1_SHIFT		8
#define VPE_EDI_LUT2_MASK		0x1f
#define VPE_EDI_LUT2_SHIFT		16
#define VPE_EDI_LUT3_MASK		0x1f
#define VPE_EDI_LUT3_SHIFT		24

#define VPE_DEI_EDI_LUT_R2		0x0618
#define VPE_EDI_LUT4_MASK		0x1f
#define VPE_EDI_LUT4_SHIFT		0
#define VPE_EDI_LUT5_MASK		0x1f
#define VPE_EDI_LUT5_SHIFT		8
#define VPE_EDI_LUT6_MASK		0x1f
#define VPE_EDI_LUT6_SHIFT		16
#define VPE_EDI_LUT7_MASK		0x1f
#define VPE_EDI_LUT7_SHIFT		24

#define VPE_DEI_EDI_LUT_R3		0x061c
#define VPE_EDI_LUT8_MASK		0x1f
#define VPE_EDI_LUT8_SHIFT		0
#define VPE_EDI_LUT9_MASK		0x1f
#define VPE_EDI_LUT9_SHIFT		8
#define VPE_EDI_LUT10_MASK		0x1f
#define VPE_EDI_LUT10_SHIFT		16
#define VPE_EDI_LUT11_MASK		0x1f
#define VPE_EDI_LUT11_SHIFT		24

#define VPE_DEI_FMD_WINDOW_R0		0x0620
#define VPE_FMD_WINDOW_MINX_MASK	0x07ff
#define VPE_FMD_WINDOW_MINX_SHIFT	0
#define VPE_FMD_WINDOW_MAXX_MASK	0x07ff
#define VPE_FMD_WINDOW_MAXX_SHIFT	16
#define VPE_FMD_WINDOW_ENABLE		BIT(31)

#define VPE_DEI_FMD_WINDOW_R1		0x0624
#define VPE_FMD_WINDOW_MINY_MASK	0x07ff
#define VPE_FMD_WINDOW_MINY_SHIFT	0
#define VPE_FMD_WINDOW_MAXY_MASK	0x07ff
#define VPE_FMD_WINDOW_MAXY_SHIFT	16

#define VPE_DEI_FMD_CONTROL_R0		0x0628
#define VPE_FMD_ENABLE			BIT(0)
#define VPE_FMD_LOCK			BIT(1)
#define VPE_FMD_JAM_DIR			BIT(2)
#define VPE_FMD_BED_ENABLE		BIT(3)
#define VPE_FMD_CAF_FIELD_THR_MASK	0xff
#define VPE_FMD_CAF_FIELD_THR_SHIFT	16
#define VPE_FMD_CAF_LINE_THR_MASK	0xff
#define VPE_FMD_CAF_LINE_THR_SHIFT	24

#define VPE_DEI_FMD_CONTROL_R1		0x062c
#define VPE_FMD_CAF_THR_MASK		0x000fffff
#define VPE_FMD_CAF_THR_SHIFT		0

#define VPE_DEI_FMD_STATUS_R0		0x0630
#define VPE_FMD_CAF_MASK		0x000fffff
#define VPE_FMD_CAF_SHIFT		0
#define VPE_FMD_RESET			BIT(24)

#define VPE_DEI_FMD_STATUS_R1		0x0634
#define VPE_FMD_FIELD_DIFF_MASK		0x0fffffff
#define VPE_FMD_FIELD_DIFF_SHIFT	0

#define VPE_DEI_FMD_STATUS_R2		0x0638
#define VPE_FMD_FRAME_DIFF_MASK		0x000fffff
#define VPE_FMD_FRAME_DIFF_SHIFT	0

#endif
