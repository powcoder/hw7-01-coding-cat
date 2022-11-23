https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2020 Martin Blumenstingl <martin.blumenstingl@googlemail.com>
 */

#ifndef _MESON_MX_SDHC_H_
#define _MESON_MX_SDHC_H_

#include <linux/bitfield.h>

#define MESON_SDHC_ARGU						0x00

#define MESON_SDHC_SEND						0x04
	#define MESON_SDHC_SEND_CMD_INDEX			GENMASK(5, 0)
	#define MESON_SDHC_SEND_CMD_HAS_RESP			BIT(6)
	#define MESON_SDHC_SEND_CMD_HAS_DATA			BIT(7)
	#define MESON_SDHC_SEND_RESP_LEN			BIT(8)
	#define MESON_SDHC_SEND_RESP_NO_CRC			BIT(9)
	#define MESON_SDHC_SEND_DATA_DIR			BIT(10)
	#define MESON_SDHC_SEND_DATA_STOP			BIT(11)
	#define MESON_SDHC_SEND_R1B				BIT(12)
	#define MESON_SDHC_SEND_TOTAL_PACK			GENMASK(31, 16)

#define MESON_SDHC_CTRL						0x08
	#define MESON_SDHC_CTRL_DAT_TYPE			GENMASK(1, 0)
	#define MESON_SDHC_CTRL_DDR_MODE			BIT(2)
	#define MESON_SDHC_CTRL_TX_CRC_NOCHECK			BIT(3)
	#define MESON_SDHC_CTRL_PACK_LEN			GENMASK(12, 4)
	#define MESON_SDHC_CTRL_RX_TIMEOUT			GENMASK(19, 13)
	#define MESON_SDHC_CTRL_RX_PERIOD			GENMASK(23, 20)
	#define MESON_SDHC_CTRL_RX_ENDIAN			GENMASK(26, 24)
	#define MESON_SDHC_CTRL_SDIO_IRQ_MODE			BIT(27)
	#define MESON_SDHC_CTRL_DAT0_IRQ_SEL			BIT(28)
	#define MESON_SDHC_CTRL_TX_ENDIAN			GENMASK(31, 29)

#define MESON_SDHC_STAT						0x0c
	#define MESON_SDHC_STAT_CMD_BUSY			BIT(0)
	#define MESON_SDHC_STAT_DAT3_0				GENMASK(4, 1)
	#define MESON_SDHC_STAT_CMD				BIT(5)
	#define MESON_SDHC_STAT_RXFIFO_CNT			GENMASK(12, 6)
	#define MESON_SDHC_STAT_TXFIFO_CNT			GENMASK(19, 13)
	#define MESON_SDHC_STAT_DAT7_4				GENMASK(23, 20)

#define MESON_SDHC_CLKC						0x10
	#define MESON_SDHC_CLKC_CLK_DIV				GENMASK(11, 0)
	#define MESON_SDHC_CLKC_CLK_JIC				BIT(24)
	#define MESON_SDHC_CLKC_MEM_PWR_OFF			GENMASK(26, 25)

#define MESON_SDHC_ADDR						0x14

#define MESON_SDHC_PDMA						0x18
	#define MESON_SDHC_PDMA_DMA_MODE			BIT(0)
	#define MESON_SDHC_PDMA_PIO_RDRESP			GENMASK(3, 1)
	#define MESON_SDHC_PDMA_DMA_URGENT			BIT(4)
	#define MESON_SDHC_PDMA_WR_BURST			GENMASK(9, 5)
	#define MESON_SDHC_PDMA_RD_BURST			GENMASK(14, 10)
	#define MESON_SDHC_PDMA_RXFIFO_TH			GENMASK(21, 15)
	#define MESON_SDHC_PDMA_TXFIFO_TH			GENMASK(28, 22)
	#define MESON_SDHC_PDMA_RXFIFO_MANUAL_FLUSH		GENMASK(30, 29)
	#define MESON_SDHC_PDMA_TXFIFO_FILL			BIT(31)

#define MESON_SDHC_MISC						0x1c
	#define MESON_SDHC_MISC_WCRC_ERR_PATT			GENMASK(6, 4)
	#define MESON_SDHC_MISC_WCRC_OK_PATT			GENMASK(9, 7)
	#define MESON_SDHC_MISC_BURST_NUM			GENMASK(21, 16)
	#define MESON_SDHC_MISC_THREAD_ID			GENMASK(27, 22)
	#define MESON_SDHC_MISC_MANUAL_STOP			BIT(28)
	#define MESON_SDHC_MISC_TXSTART_THRES			GENMASK(31, 29)

#define MESON_SDHC_DATA						0x20

#define MESON_SDHC_ICTL						0x24
	#define MESON_SDHC_ICTL_RESP_OK				BIT(0)
	#define MESON_SDHC_ICTL_RESP_TIMEOUT			BIT(1)
	#define MESON_SDHC_ICTL_RESP_ERR_CRC			BIT(2)
	#define MESON_SDHC_ICTL_RESP_OK_NOCLEAR			BIT(3)
	#define MESON_SDHC_ICTL_DATA_1PACK_OK			BIT(4)
	#define MESON_SDHC_ICTL_DATA_TIMEOUT			BIT(5)
	#define MESON_SDHC_ICTL_DATA_ERR_CRC			BIT(6)
	#define MESON_SDHC_ICTL_DATA_XFER_OK			BIT(7)
	#define MESON_SDHC_ICTL_RX_HIGHER			BIT(8)
	#define MESON_SDHC_ICTL_RX_LOWER			BIT(9)
	#define MESON_SDHC_ICTL_DAT1_IRQ			BIT(10)
	#define MESON_SDHC_ICTL_DMA_DONE			BIT(11)
	#define MESON_SDHC_ICTL_RXFIFO_FULL			BIT(12)
	#define MESON_SDHC_ICTL_TXFIFO_EMPTY			BIT(13)
	#define MESON_SDHC_ICTL_ADDI_DAT1_IRQ			BIT(14)
	#define MESON_SDHC_ICTL_ALL_IRQS			GENMASK(14, 0)
	#define MESON_SDHC_ICTL_DAT1_IRQ_DELAY			GENMASK(17, 16)

#define MESON_SDHC_ISTA						0x28
	#define MESON_SDHC_ISTA_RESP_OK				BIT(0)
	#define MESON_SDHC_ISTA_RESP_TIMEOUT			BIT(1)
	#define MESON_SDHC_ISTA_RESP_ERR_CRC			BIT(2)
	#define MESON_SDHC_ISTA_RESP_OK_NOCLEAR			BIT(3)
	#define MESON_SDHC_ISTA_DATA_1PACK_OK			BIT(4)
	#define MESON_SDHC_ISTA_DATA_TIMEOUT			BIT(5)
	#define MESON_SDHC_ISTA_DATA_ERR_CRC			BIT(6)
	#define MESON_SDHC_ISTA_DATA_XFER_OK			BIT(7)
	#define MESON_SDHC_ISTA_RX_HIGHER			BIT(8)
	#define MESON_SDHC_ISTA_RX_LOWER			BIT(9)
	#define MESON_SDHC_ISTA_DAT1_IRQ			BIT(10)
	#define MESON_SDHC_ISTA_DMA_DONE			BIT(11)
	#define MESON_SDHC_ISTA_RXFIFO_FULL			BIT(12)
	#define MESON_SDHC_ISTA_TXFIFO_EMPTY			BIT(13)
	#define MESON_SDHC_ISTA_ADDI_DAT1_IRQ			BIT(14)
	#define MESON_SDHC_ISTA_ALL_IRQS			GENMASK(14, 0)

#define MESON_SDHC_SRST						0x2c
	#define MESON_SDHC_SRST_MAIN_CTRL			BIT(0)
	#define MESON_SDHC_SRST_RXFIFO				BIT(1)
	#define MESON_SDHC_SRST_TXFIFO				BIT(2)
	#define MESON_SDHC_SRST_DPHY_RX				BIT(3)
	#define MESON_SDHC_SRST_DPHY_TX				BIT(4)
	#define MESON_SDHC_SRST_DMA_IF				BIT(5)

#define MESON_SDHC_ESTA						0x30
	#define MESON_SDHC_ESTA_11_13				GENMASK(13, 11)

#define MESON_SDHC_ENHC						0x34
	#define MESON_SDHC_ENHC_MESON8M2_WRRSP_MODE		BIT(0)
	#define MESON_SDHC_ENHC_MESON8M2_CHK_WRRSP		BIT(1)
	#define MESON_SDHC_ENHC_MESON8M2_CHK_DMA		BIT(2)
	#define MESON_SDHC_ENHC_MESON8M2_DEBUG			GENMASK(5, 3)
	#define MESON_SDHC_ENHC_MESON6_RX_TIMEOUT		GENMASK(7, 0)
	#define MESON_SDHC_ENHC_MESON6_DMA_RD_RESP		BIT(16)
	#define MESON_SDHC_ENHC_MESON6_DMA_WR_RESP		BIT(17)
	#define MESON_SDHC_ENHC_SDIO_IRQ_PERIOD			GENMASK(15, 8)
	#define MESON_SDHC_ENHC_RXFIFO_TH			GENMASK(24, 18)
	#define MESON_SDHC_ENHC_TXFIFO_TH			GENMASK(31, 25)

#define MESON_SDHC_CLK2						0x38
	#define MESON_SDHC_CLK2_RX_CLK_PHASE			GENMASK(11, 0)
	#define MESON_SDHC_CLK2_SD_CLK_PHASE			GENMASK(23, 12)

struct clk_bulk_data;

int meson_mx_sdhc_register_clkc(struct device *dev, void __iomem *base,
				struct clk_bulk_data *clk_bulk_data);

#endif /* _MESON_MX_SDHC_H_ */
