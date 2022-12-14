https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright 2020, NXP Semiconductors
 */
#ifndef _SJA1105_SGMII_H
#define _SJA1105_SGMII_H

#define SJA1105_SGMII_PORT		4

/* DIGITAL_CONTROL_1 (address 1f8000h) */
#define SJA1105_DC1			0x8000
#define SJA1105_DC1_VS_RESET		BIT(15)
#define SJA1105_DC1_REMOTE_LOOPBACK	BIT(14)
#define SJA1105_DC1_EN_VSMMD1		BIT(13)
#define SJA1105_DC1_POWER_SAVE		BIT(11)
#define SJA1105_DC1_CLOCK_STOP_EN	BIT(10)
#define SJA1105_DC1_MAC_AUTO_SW		BIT(9)
#define SJA1105_DC1_INIT		BIT(8)
#define SJA1105_DC1_TX_DISABLE		BIT(4)
#define SJA1105_DC1_AUTONEG_TIMER_OVRR	BIT(3)
#define SJA1105_DC1_BYP_POWERUP		BIT(1)
#define SJA1105_DC1_PHY_MODE_CONTROL	BIT(0)

/* DIGITAL_CONTROL_2 register (address 1f80E1h) */
#define SJA1105_DC2			0x80e1
#define SJA1105_DC2_TX_POL_INV_DISABLE	BIT(4)
#define SJA1105_DC2_RX_POL_INV		BIT(0)

/* DIGITAL_ERROR_CNT register (address 1f80E2h) */
#define SJA1105_DEC			0x80e2
#define SJA1105_DEC_ICG_EC_ENA		BIT(4)
#define SJA1105_DEC_CLEAR_ON_READ	BIT(0)

/* AUTONEG_CONTROL register (address 1f8001h) */
#define SJA1105_AC			0x8001
#define SJA1105_AC_MII_CONTROL		BIT(8)
#define SJA1105_AC_SGMII_LINK		BIT(4)
#define SJA1105_AC_PHY_MODE		BIT(3)
#define SJA1105_AC_AUTONEG_MODE(x)	(((x) << 1) & GENMASK(2, 1))
#define SJA1105_AC_AUTONEG_MODE_SGMII	SJA1105_AC_AUTONEG_MODE(2)

/* AUTONEG_INTR_STATUS register (address 1f8002h) */
#define SJA1105_AIS			0x8002
#define SJA1105_AIS_LINK_STATUS(x)	(!!((x) & BIT(4)))
#define SJA1105_AIS_SPEED(x)		(((x) & GENMASK(3, 2)) >> 2)
#define SJA1105_AIS_DUPLEX_MODE(x)	(!!((x) & BIT(1)))
#define SJA1105_AIS_COMPLETE(x)		(!!((x) & BIT(0)))

/* DEBUG_CONTROL register (address 1f8005h) */
#define SJA1105_DC			0x8005
#define SJA1105_DC_SUPPRESS_LOS		BIT(4)
#define SJA1105_DC_RESTART_SYNC		BIT(0)

#endif
