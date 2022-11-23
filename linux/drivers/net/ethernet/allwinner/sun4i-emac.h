https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Allwinner EMAC Fast Ethernet driver for Linux.
 *
 * Copyright 2012 Stefan Roese <sr@denx.de>
 * Copyright 2013 Maxime Ripard <maxime.ripard@free-electrons.com>
 *
 * Based on the Linux driver provided by Allwinner:
 * Copyright (C) 1997  Sten Wang
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef _SUN4I_EMAC_H_
#define _SUN4I_EMAC_H_

#define EMAC_CTL_REG		(0x00)
#define EMAC_CTL_RESET			(1 << 0)
#define EMAC_CTL_TX_EN			(1 << 1)
#define EMAC_CTL_RX_EN			(1 << 2)
#define EMAC_TX_MODE_REG	(0x04)
#define EMAC_TX_MODE_ABORTED_FRAME_EN	(1 << 0)
#define EMAC_TX_MODE_DMA_EN		(1 << 1)
#define EMAC_TX_FLOW_REG	(0x08)
#define EMAC_TX_CTL0_REG	(0x0c)
#define EMAC_TX_CTL1_REG	(0x10)
#define EMAC_TX_INS_REG		(0x14)
#define EMAC_TX_PL0_REG		(0x18)
#define EMAC_TX_PL1_REG		(0x1c)
#define EMAC_TX_STA_REG		(0x20)
#define EMAC_TX_IO_DATA_REG	(0x24)
#define EMAC_TX_IO_DATA1_REG	(0x28)
#define EMAC_TX_TSVL0_REG	(0x2c)
#define EMAC_TX_TSVH0_REG	(0x30)
#define EMAC_TX_TSVL1_REG	(0x34)
#define EMAC_TX_TSVH1_REG	(0x38)
#define EMAC_RX_CTL_REG		(0x3c)
#define EMAC_RX_CTL_AUTO_DRQ_EN		(1 << 1)
#define EMAC_RX_CTL_DMA_EN		(1 << 2)
#define EMAC_RX_CTL_PASS_ALL_EN		(1 << 4)
#define EMAC_RX_CTL_PASS_CTL_EN		(1 << 5)
#define EMAC_RX_CTL_PASS_CRC_ERR_EN	(1 << 6)
#define EMAC_RX_CTL_PASS_LEN_ERR_EN	(1 << 7)
#define EMAC_RX_CTL_PASS_LEN_OOR_EN	(1 << 8)
#define EMAC_RX_CTL_ACCEPT_UNICAST_EN	(1 << 16)
#define EMAC_RX_CTL_DA_FILTER_EN	(1 << 17)
#define EMAC_RX_CTL_ACCEPT_MULTICAST_EN	(1 << 20)
#define EMAC_RX_CTL_HASH_FILTER_EN	(1 << 21)
#define EMAC_RX_CTL_ACCEPT_BROADCAST_EN	(1 << 22)
#define EMAC_RX_CTL_SA_FILTER_EN	(1 << 24)
#define EMAC_RX_CTL_SA_FILTER_INVERT_EN	(1 << 25)
#define EMAC_RX_HASH0_REG	(0x40)
#define EMAC_RX_HASH1_REG	(0x44)
#define EMAC_RX_STA_REG		(0x48)
#define EMAC_RX_IO_DATA_REG	(0x4c)
#define EMAC_RX_IO_DATA_LEN(x)		(x & 0xffff)
#define EMAC_RX_IO_DATA_STATUS(x)	((x >> 16) & 0xffff)
#define EMAC_RX_IO_DATA_STATUS_CRC_ERR	(1 << 4)
#define EMAC_RX_IO_DATA_STATUS_LEN_ERR	(3 << 5)
#define EMAC_RX_IO_DATA_STATUS_OK	(1 << 7)
#define EMAC_RX_FBC_REG		(0x50)
#define EMAC_INT_CTL_REG	(0x54)
#define EMAC_INT_STA_REG	(0x58)
#define EMAC_MAC_CTL0_REG	(0x5c)
#define EMAC_MAC_CTL0_RX_FLOW_CTL_EN	(1 << 2)
#define EMAC_MAC_CTL0_TX_FLOW_CTL_EN	(1 << 3)
#define EMAC_MAC_CTL0_SOFT_RESET	(1 << 15)
#define EMAC_MAC_CTL1_REG	(0x60)
#define EMAC_MAC_CTL1_DUPLEX_EN		(1 << 0)
#define EMAC_MAC_CTL1_LEN_CHECK_EN	(1 << 1)
#define EMAC_MAC_CTL1_HUGE_FRAME_EN	(1 << 2)
#define EMAC_MAC_CTL1_DELAYED_CRC_EN	(1 << 3)
#define EMAC_MAC_CTL1_CRC_EN		(1 << 4)
#define EMAC_MAC_CTL1_PAD_EN		(1 << 5)
#define EMAC_MAC_CTL1_PAD_CRC_EN	(1 << 6)
#define EMAC_MAC_CTL1_AD_SHORT_FRAME_EN	(1 << 7)
#define EMAC_MAC_CTL1_BACKOFF_DIS	(1 << 12)
#define EMAC_MAC_IPGT_REG	(0x64)
#define EMAC_MAC_IPGT_HALF_DUPLEX	(0x12)
#define EMAC_MAC_IPGT_FULL_DUPLEX	(0x15)
#define EMAC_MAC_IPGR_REG	(0x68)
#define EMAC_MAC_IPGR_IPG1		(0x0c)
#define EMAC_MAC_IPGR_IPG2		(0x12)
#define EMAC_MAC_CLRT_REG	(0x6c)
#define EMAC_MAC_CLRT_COLLISION_WINDOW	(0x37)
#define EMAC_MAC_CLRT_RM		(0x0f)
#define EMAC_MAC_MAXF_REG	(0x70)
#define EMAC_MAC_SUPP_REG	(0x74)
#define EMAC_MAC_TEST_REG	(0x78)
#define EMAC_MAC_MCFG_REG	(0x7c)
#define EMAC_MAC_A0_REG		(0x98)
#define EMAC_MAC_A1_REG		(0x9c)
#define EMAC_MAC_A2_REG		(0xa0)
#define EMAC_SAFX_L_REG0	(0xa4)
#define EMAC_SAFX_H_REG0	(0xa8)
#define EMAC_SAFX_L_REG1	(0xac)
#define EMAC_SAFX_H_REG1	(0xb0)
#define EMAC_SAFX_L_REG2	(0xb4)
#define EMAC_SAFX_H_REG2	(0xb8)
#define EMAC_SAFX_L_REG3	(0xbc)
#define EMAC_SAFX_H_REG3	(0xc0)

#define EMAC_PHY_DUPLEX		(1 << 8)

#define EMAC_EEPROM_MAGIC	(0x444d394b)
#define EMAC_UNDOCUMENTED_MAGIC	(0x0143414d)
#endif /* _SUN4I_EMAC_H_ */