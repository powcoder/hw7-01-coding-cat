https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0-only) */
/* Copyright(c) 2014 - 2020 Intel Corporation */
#ifndef ADF_DH895x_HW_DATA_H_
#define ADF_DH895x_HW_DATA_H_

/* PCIe configuration space */
#define ADF_DH895XCC_SRAM_BAR 0
#define ADF_DH895XCC_PMISC_BAR 1
#define ADF_DH895XCC_ETR_BAR 2
#define ADF_DH895XCC_RX_RINGS_OFFSET 8
#define ADF_DH895XCC_TX_RINGS_MASK 0xFF
#define ADF_DH895XCC_FUSECTL_SKU_MASK 0x300000
#define ADF_DH895XCC_FUSECTL_SKU_SHIFT 20
#define ADF_DH895XCC_FUSECTL_SKU_1 0x0
#define ADF_DH895XCC_FUSECTL_SKU_2 0x1
#define ADF_DH895XCC_FUSECTL_SKU_3 0x2
#define ADF_DH895XCC_FUSECTL_SKU_4 0x3
#define ADF_DH895XCC_MAX_ACCELERATORS 6
#define ADF_DH895XCC_MAX_ACCELENGINES 12
#define ADF_DH895XCC_ACCELERATORS_REG_OFFSET 13
#define ADF_DH895XCC_ACCELERATORS_MASK 0x3F
#define ADF_DH895XCC_ACCELENGINES_MASK 0xFFF
#define ADF_DH895XCC_ETR_MAX_BANKS 32
#define ADF_DH895XCC_SMIAPF0_MASK_OFFSET (0x3A000 + 0x28)
#define ADF_DH895XCC_SMIAPF1_MASK_OFFSET (0x3A000 + 0x30)
#define ADF_DH895XCC_SMIA0_MASK 0xFFFFFFFF
#define ADF_DH895XCC_SMIA1_MASK 0x1
/* Error detection and correction */
#define ADF_DH895XCC_AE_CTX_ENABLES(i) (i * 0x1000 + 0x20818)
#define ADF_DH895XCC_AE_MISC_CONTROL(i) (i * 0x1000 + 0x20960)
#define ADF_DH895XCC_ENABLE_AE_ECC_ERR BIT(28)
#define ADF_DH895XCC_ENABLE_AE_ECC_PARITY_CORR (BIT(24) | BIT(12))
#define ADF_DH895XCC_UERRSSMSH(i) (i * 0x4000 + 0x18)
#define ADF_DH895XCC_CERRSSMSH(i) (i * 0x4000 + 0x10)
#define ADF_DH895XCC_ERRSSMSH_EN BIT(3)

#define ADF_DH895XCC_PF2VF_OFFSET(i)	(0x3A000 + 0x280 + ((i) * 0x04))
#define ADF_DH895XCC_VINTMSK_OFFSET(i)	(0x3A000 + 0x200 + ((i) * 0x04))
/* FW names */
#define ADF_DH895XCC_FW "qat_895xcc.bin"
#define ADF_DH895XCC_MMP "qat_895xcc_mmp.bin"

void adf_init_hw_data_dh895xcc(struct adf_hw_device_data *hw_data);
void adf_clean_hw_data_dh895xcc(struct adf_hw_device_data *hw_data);
#endif
