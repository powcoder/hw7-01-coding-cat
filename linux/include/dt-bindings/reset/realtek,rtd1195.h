https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: (GPL-2.0-or-later OR BSD-2-Clause) */
/*
 * Realtek RTD1195 reset controllers
 *
 * Copyright (c) 2017 Andreas Färber
 */
#ifndef DT_BINDINGS_RESET_RTD1195_H
#define DT_BINDINGS_RESET_RTD1195_H

/* soft reset 1 */
#define RTD1195_RSTN_MISC		0
#define RTD1195_RSTN_RNG		1
#define RTD1195_RSTN_USB3_POW		2
#define RTD1195_RSTN_GSPI		3
#define RTD1195_RSTN_USB3_P0_MDIO	4
#define RTD1195_RSTN_VE_H265		5
#define RTD1195_RSTN_USB		6
#define RTD1195_RSTN_USB_PHY0		8
#define RTD1195_RSTN_USB_PHY1		9
#define RTD1195_RSTN_HDMIRX		11
#define RTD1195_RSTN_HDMI		12
#define RTD1195_RSTN_ETN		14
#define RTD1195_RSTN_AIO		15
#define RTD1195_RSTN_GPU		16
#define RTD1195_RSTN_VE_H264		17
#define RTD1195_RSTN_VE_JPEG		18
#define RTD1195_RSTN_TVE		19
#define RTD1195_RSTN_VO			20
#define RTD1195_RSTN_LVDS		21
#define RTD1195_RSTN_SE			22
#define RTD1195_RSTN_DCU		23
#define RTD1195_RSTN_DC_PHY		24
#define RTD1195_RSTN_CP			25
#define RTD1195_RSTN_MD			26
#define RTD1195_RSTN_TP			27
#define RTD1195_RSTN_AE			28
#define RTD1195_RSTN_NF			29
#define RTD1195_RSTN_MIPI		30

/* soft reset 2 */
#define RTD1195_RSTN_ACPU		0
#define RTD1195_RSTN_VCPU		1
#define RTD1195_RSTN_PCR		9
#define RTD1195_RSTN_CR			10
#define RTD1195_RSTN_EMMC		11
#define RTD1195_RSTN_SDIO		12
#define RTD1195_RSTN_I2C_5		18
#define RTD1195_RSTN_RTC		20
#define RTD1195_RSTN_I2C_4		23
#define RTD1195_RSTN_I2C_3		24
#define RTD1195_RSTN_I2C_2		25
#define RTD1195_RSTN_I2C_1		26
#define RTD1195_RSTN_UR1		28

/* soft reset 3 */
#define RTD1195_RSTN_SB2		0

/* iso soft reset */
#define RTD1195_ISO_RSTN_VFD		0
#define RTD1195_ISO_RSTN_IR		1
#define RTD1195_ISO_RSTN_CEC0		2
#define RTD1195_ISO_RSTN_CEC1		3
#define RTD1195_ISO_RSTN_DP		4
#define RTD1195_ISO_RSTN_CBUSTX		5
#define RTD1195_ISO_RSTN_CBUSRX		6
#define RTD1195_ISO_RSTN_EFUSE		7
#define RTD1195_ISO_RSTN_UR0		8
#define RTD1195_ISO_RSTN_GMAC		9
#define RTD1195_ISO_RSTN_GPHY		10
#define RTD1195_ISO_RSTN_I2C_0		11
#define RTD1195_ISO_RSTN_I2C_6		12
#define RTD1195_ISO_RSTN_CBUS		13

#endif
