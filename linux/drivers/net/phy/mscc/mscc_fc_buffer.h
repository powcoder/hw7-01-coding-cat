https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: (GPL-2.0 OR MIT) */
/*
 * Driver for Microsemi VSC85xx PHYs
 *
 * Copyright (C) 2020 Microsemi Corporation
 */

#ifndef _MSCC_PHY_FC_BUFFER_H_
#define _MSCC_PHY_FC_BUFFER_H_

#define MSCC_FCBUF_ENA_CFG					0x00
#define MSCC_FCBUF_MODE_CFG					0x01
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG			0x02
#define MSCC_FCBUF_TX_CTRL_QUEUE_CFG				0x03
#define MSCC_FCBUF_TX_DATA_QUEUE_CFG				0x04
#define MSCC_FCBUF_RX_DATA_QUEUE_CFG				0x05
#define MSCC_FCBUF_TX_BUFF_XON_XOFF_THRESH_CFG			0x06
#define MSCC_FCBUF_FC_READ_THRESH_CFG				0x07
#define MSCC_FCBUF_TX_FRM_GAP_COMP				0x08

#define MSCC_FCBUF_ENA_CFG_TX_ENA				BIT(0)
#define MSCC_FCBUF_ENA_CFG_RX_ENA				BIT(4)

#define MSCC_FCBUF_MODE_CFG_DROP_BEHAVIOUR			BIT(4)
#define MSCC_FCBUF_MODE_CFG_PAUSE_REACT_ENA			BIT(8)
#define MSCC_FCBUF_MODE_CFG_RX_PPM_RATE_ADAPT_ENA		BIT(12)
#define MSCC_FCBUF_MODE_CFG_TX_PPM_RATE_ADAPT_ENA		BIT(16)
#define MSCC_FCBUF_MODE_CFG_TX_CTRL_QUEUE_ENA			BIT(20)
#define MSCC_FCBUF_MODE_CFG_PAUSE_GEN_ENA			BIT(24)
#define MSCC_FCBUF_MODE_CFG_INCLUDE_PAUSE_RCVD_IN_PAUSE_GEN	BIT(28)

#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_TX_THRESH(x)	(x)
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_TX_THRESH_M	GENMASK(15, 0)
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_TX_OFFSET(x)	((x) << 16)
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_TX_OFFSET_M	GENMASK(19, 16)
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_RX_THRESH(x)	((x) << 20)
#define MSCC_FCBUF_PPM_RATE_ADAPT_THRESH_CFG_RX_THRESH_M	GENMASK(31, 20)

#define MSCC_FCBUF_TX_CTRL_QUEUE_CFG_START(x)			(x)
#define MSCC_FCBUF_TX_CTRL_QUEUE_CFG_START_M			GENMASK(15, 0)
#define MSCC_FCBUF_TX_CTRL_QUEUE_CFG_END(x)			((x) << 16)
#define MSCC_FCBUF_TX_CTRL_QUEUE_CFG_END_M			GENMASK(31, 16)

#define MSCC_FCBUF_TX_DATA_QUEUE_CFG_START(x)			(x)
#define MSCC_FCBUF_TX_DATA_QUEUE_CFG_START_M			GENMASK(15, 0)
#define MSCC_FCBUF_TX_DATA_QUEUE_CFG_END(x)			((x) << 16)
#define MSCC_FCBUF_TX_DATA_QUEUE_CFG_END_M			GENMASK(31, 16)

#define MSCC_FCBUF_RX_DATA_QUEUE_CFG_START(x)			(x)
#define MSCC_FCBUF_RX_DATA_QUEUE_CFG_START_M			GENMASK(15, 0)
#define MSCC_FCBUF_RX_DATA_QUEUE_CFG_END(x)			((x) << 16)
#define MSCC_FCBUF_RX_DATA_QUEUE_CFG_END_M			GENMASK(31, 16)

#define MSCC_FCBUF_TX_BUFF_XON_XOFF_THRESH_CFG_XOFF_THRESH(x)	(x)
#define MSCC_FCBUF_TX_BUFF_XON_XOFF_THRESH_CFG_XOFF_THRESH_M	GENMASK(15, 0)
#define MSCC_FCBUF_TX_BUFF_XON_XOFF_THRESH_CFG_XON_THRESH(x)	((x) << 16)
#define MSCC_FCBUF_TX_BUFF_XON_XOFF_THRESH_CFG_XON_THRESH_M	GENMASK(31, 16)

#define MSCC_FCBUF_FC_READ_THRESH_CFG_TX_THRESH(x)		(x)
#define MSCC_FCBUF_FC_READ_THRESH_CFG_TX_THRESH_M		GENMASK(15, 0)
#define MSCC_FCBUF_FC_READ_THRESH_CFG_RX_THRESH(x)		((x) << 16)
#define MSCC_FCBUF_FC_READ_THRESH_CFG_RX_THRESH_M		GENMASK(31, 16)

#endif /* _MSCC_PHY_FC_BUFFER_H_ */
