https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Device Tree constants for the Texas Instruments DP83869 PHY
 *
 * Author: Dan Murphy <dmurphy@ti.com>
 *
 * Copyright:   (C) 2019 Texas Instruments, Inc.
 */

#ifndef _DT_BINDINGS_TI_DP83869_H
#define _DT_BINDINGS_TI_DP83869_H

/* PHY CTRL bits */
#define DP83869_PHYCR_FIFO_DEPTH_3_B_NIB	0x00
#define DP83869_PHYCR_FIFO_DEPTH_4_B_NIB	0x01
#define DP83869_PHYCR_FIFO_DEPTH_6_B_NIB	0x02
#define DP83869_PHYCR_FIFO_DEPTH_8_B_NIB	0x03

/* IO_MUX_CFG - Clock output selection */
#define DP83869_CLK_O_SEL_CHN_A_RCLK		0x0
#define DP83869_CLK_O_SEL_CHN_B_RCLK		0x1
#define DP83869_CLK_O_SEL_CHN_C_RCLK		0x2
#define DP83869_CLK_O_SEL_CHN_D_RCLK		0x3
#define DP83869_CLK_O_SEL_CHN_A_RCLK_DIV5	0x4
#define DP83869_CLK_O_SEL_CHN_B_RCLK_DIV5	0x5
#define DP83869_CLK_O_SEL_CHN_C_RCLK_DIV5	0x6
#define DP83869_CLK_O_SEL_CHN_D_RCLK_DIV5	0x7
#define DP83869_CLK_O_SEL_CHN_A_TCLK		0x8
#define DP83869_CLK_O_SEL_CHN_B_TCLK		0x9
#define DP83869_CLK_O_SEL_CHN_C_TCLK		0xa
#define DP83869_CLK_O_SEL_CHN_D_TCLK		0xb
#define DP83869_CLK_O_SEL_REF_CLK		0xc

#define DP83869_RGMII_COPPER_ETHERNET		0x00
#define DP83869_RGMII_1000_BASE			0x01
#define DP83869_RGMII_100_BASE			0x02
#define DP83869_RGMII_SGMII_BRIDGE		0x03
#define DP83869_1000M_MEDIA_CONVERT		0x04
#define DP83869_100M_MEDIA_CONVERT		0x05
#define DP83869_SGMII_COPPER_ETHERNET		0x06

#endif
