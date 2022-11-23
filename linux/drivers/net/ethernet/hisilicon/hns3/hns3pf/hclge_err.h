https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
/*  Copyright (c) 2016-2017 Hisilicon Limited. */

#ifndef __HCLGE_ERR_H
#define __HCLGE_ERR_H

#include "hclge_main.h"
#include "hnae3.h"

#define HCLGE_MPF_RAS_INT_MIN_BD_NUM	10
#define HCLGE_PF_RAS_INT_MIN_BD_NUM	4
#define HCLGE_MPF_MSIX_INT_MIN_BD_NUM	10
#define HCLGE_PF_MSIX_INT_MIN_BD_NUM	4

#define HCLGE_RAS_PF_OTHER_INT_STS_REG   0x20B00
#define HCLGE_RAS_REG_NFE_MASK   0xFF00
#define HCLGE_RAS_REG_ROCEE_ERR_MASK   0x3000000

#define HCLGE_VECTOR0_REG_MSIX_MASK   0x1FF00

#define HCLGE_IMP_TCM_ECC_ERR_INT_EN	0xFFFF0000
#define HCLGE_IMP_TCM_ECC_ERR_INT_EN_MASK	0xFFFF0000
#define HCLGE_IMP_ITCM4_ECC_ERR_INT_EN	0x300
#define HCLGE_IMP_ITCM4_ECC_ERR_INT_EN_MASK	0x300
#define HCLGE_CMDQ_NIC_ECC_ERR_INT_EN	0xFFFF
#define HCLGE_CMDQ_NIC_ECC_ERR_INT_EN_MASK	0xFFFF
#define HCLGE_CMDQ_ROCEE_ECC_ERR_INT_EN	0xFFFF0000
#define HCLGE_CMDQ_ROCEE_ECC_ERR_INT_EN_MASK	0xFFFF0000
#define HCLGE_IMP_RD_POISON_ERR_INT_EN	0x0100
#define HCLGE_IMP_RD_POISON_ERR_INT_EN_MASK	0x0100
#define HCLGE_TQP_ECC_ERR_INT_EN	0x0FFF
#define HCLGE_TQP_ECC_ERR_INT_EN_MASK	0x0FFF
#define HCLGE_MSIX_SRAM_ECC_ERR_INT_EN_MASK	0x0F000000
#define HCLGE_MSIX_SRAM_ECC_ERR_INT_EN	0x0F000000
#define HCLGE_IGU_ERR_INT_EN	0x0000000F
#define HCLGE_IGU_ERR_INT_TYPE	0x00000660
#define HCLGE_IGU_ERR_INT_EN_MASK	0x000F
#define HCLGE_IGU_TNL_ERR_INT_EN    0x0002AABF
#define HCLGE_IGU_TNL_ERR_INT_EN_MASK  0x003F
#define HCLGE_PPP_MPF_ECC_ERR_INT0_EN	0xFFFFFFFF
#define HCLGE_PPP_MPF_ECC_ERR_INT0_EN_MASK	0xFFFFFFFF
#define HCLGE_PPP_MPF_ECC_ERR_INT1_EN	0xFFFFFFFF
#define HCLGE_PPP_MPF_ECC_ERR_INT1_EN_MASK	0xFFFFFFFF
#define HCLGE_PPP_PF_ERR_INT_EN	0x0003
#define HCLGE_PPP_PF_ERR_INT_EN_MASK	0x0003
#define HCLGE_PPP_MPF_ECC_ERR_INT2_EN	0x003F
#define HCLGE_PPP_MPF_ECC_ERR_INT2_EN_MASK	0x003F
#define HCLGE_PPP_MPF_ECC_ERR_INT3_EN	0x003F
#define HCLGE_PPP_MPF_ECC_ERR_INT3_EN_MASK	0x003F
#define HCLGE_TM_SCH_ECC_ERR_INT_EN	0x3
#define HCLGE_TM_QCN_MEM_ERR_INT_EN	0xFFFFFF
#define HCLGE_NCSI_ERR_INT_EN	0x3
#define HCLGE_NCSI_ERR_INT_TYPE	0x9
#define HCLGE_MAC_COMMON_ERR_INT_EN		0x107FF
#define HCLGE_MAC_COMMON_ERR_INT_EN_MASK	0x107FF
#define HCLGE_MAC_TNL_INT_EN			GENMASK(9, 0)
#define HCLGE_MAC_TNL_INT_EN_MASK		GENMASK(9, 0)
#define HCLGE_MAC_TNL_INT_CLR			GENMASK(9, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT0_EN		GENMASK(31, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT0_EN_MASK	GENMASK(31, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT1_EN		GENMASK(31, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT1_EN_MASK	GENMASK(31, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT2_EN		0x3FFF3FFF
#define HCLGE_PPU_MPF_ABNORMAL_INT2_EN_MASK	0x3FFF3FFF
#define HCLGE_PPU_MPF_ABNORMAL_INT2_EN2		0xB
#define HCLGE_PPU_MPF_ABNORMAL_INT2_EN2_MASK	0xB
#define HCLGE_PPU_MPF_ABNORMAL_INT3_EN		GENMASK(7, 0)
#define HCLGE_PPU_MPF_ABNORMAL_INT3_EN_MASK	GENMASK(23, 16)
#define HCLGE_PPU_PF_ABNORMAL_INT_EN		GENMASK(5, 0)
#define HCLGE_PPU_PF_ABNORMAL_INT_EN_MASK	GENMASK(5, 0)
#define HCLGE_SSU_1BIT_ECC_ERR_INT_EN		GENMASK(31, 0)
#define HCLGE_SSU_1BIT_ECC_ERR_INT_EN_MASK	GENMASK(31, 0)
#define HCLGE_SSU_MULTI_BIT_ECC_ERR_INT_EN	GENMASK(31, 0)
#define HCLGE_SSU_MULTI_BIT_ECC_ERR_INT_EN_MASK	GENMASK(31, 0)
#define HCLGE_SSU_BIT32_ECC_ERR_INT_EN		0x0101
#define HCLGE_SSU_BIT32_ECC_ERR_INT_EN_MASK	0x0101
#define HCLGE_SSU_COMMON_INT_EN			GENMASK(9, 0)
#define HCLGE_SSU_COMMON_INT_EN_MASK		GENMASK(9, 0)
#define HCLGE_SSU_PORT_BASED_ERR_INT_EN		0x0BFF
#define HCLGE_SSU_PORT_BASED_ERR_INT_EN_MASK	0x0BFF0000
#define HCLGE_SSU_FIFO_OVERFLOW_ERR_INT_EN	GENMASK(23, 0)
#define HCLGE_SSU_FIFO_OVERFLOW_ERR_INT_EN_MASK	GENMASK(23, 0)

#define HCLGE_SSU_COMMON_ERR_INT_MASK	GENMASK(9, 0)
#define HCLGE_SSU_PORT_INT_MSIX_MASK	0x7BFF
#define HCLGE_IGU_INT_MASK		GENMASK(3, 0)
#define HCLGE_IGU_EGU_TNL_INT_MASK	GENMASK(5, 0)
#define HCLGE_PPP_MPF_INT_ST3_MASK	GENMASK(5, 0)
#define HCLGE_PPU_MPF_INT_ST3_MASK	GENMASK(7, 0)
#define HCLGE_PPU_MPF_INT_ST2_MSIX_MASK	BIT(29)
#define HCLGE_PPU_PF_INT_RAS_MASK	0x18
#define HCLGE_PPU_PF_INT_MSIX_MASK	0x26
#define HCLGE_PPU_PF_OVER_8BD_ERR_MASK	0x01
#define HCLGE_QCN_FIFO_INT_MASK		GENMASK(17, 0)
#define HCLGE_QCN_ECC_INT_MASK		GENMASK(21, 0)
#define HCLGE_NCSI_ECC_INT_MASK		GENMASK(1, 0)

#define HCLGE_ROCEE_RAS_NFE_INT_EN		0xF
#define HCLGE_ROCEE_RAS_CE_INT_EN		0x1
#define HCLGE_ROCEE_RAS_NFE_INT_EN_MASK		0xF
#define HCLGE_ROCEE_RAS_CE_INT_EN_MASK		0x1
#define HCLGE_ROCEE_RERR_INT_MASK		BIT(0)
#define HCLGE_ROCEE_BERR_INT_MASK		BIT(1)
#define HCLGE_ROCEE_AXI_ERR_INT_MASK		GENMASK(1, 0)
#define HCLGE_ROCEE_ECC_INT_MASK		BIT(2)
#define HCLGE_ROCEE_OVF_INT_MASK		BIT(3)
#define HCLGE_ROCEE_OVF_ERR_INT_MASK		0x10000
#define HCLGE_ROCEE_OVF_ERR_TYPE_MASK		0x3F

enum hclge_err_int_type {
	HCLGE_ERR_INT_MSIX = 0,
	HCLGE_ERR_INT_RAS_CE = 1,
	HCLGE_ERR_INT_RAS_NFE = 2,
	HCLGE_ERR_INT_RAS_FE = 3,
};

struct hclge_hw_blk {
	u32 msk;
	const char *name;
	int (*config_err_int)(struct hclge_dev *hdev, bool en);
};

struct hclge_hw_error {
	u32 int_msk;
	const char *msg;
	enum hnae3_reset_type reset_level;
};

int hclge_config_mac_tnl_int(struct hclge_dev *hdev, bool en);
int hclge_config_nic_hw_error(struct hclge_dev *hdev, bool state);
int hclge_config_rocee_ras_interrupt(struct hclge_dev *hdev, bool en);
void hclge_handle_all_hns_hw_errors(struct hnae3_ae_dev *ae_dev);
pci_ers_result_t hclge_handle_hw_ras_error(struct hnae3_ae_dev *ae_dev);
int hclge_handle_hw_msix_error(struct hclge_dev *hdev,
			       unsigned long *reset_requests);
#endif
