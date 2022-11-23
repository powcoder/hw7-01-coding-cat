https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (C) 2019-2020 ARM Limited or its affiliates. */

#include <linux/bitops.h>

#define POWER_DOWN_ENABLE 0x01
#define POWER_DOWN_DISABLE 0x00

/* hwrng quality: bits of true entropy per 1024 bits of input */
#define CC_TRNG_QUALITY	1024

/* CryptoCell TRNG HW definitions */
#define CC_TRNG_NUM_OF_ROSCS	4
/* The number of words generated in the entropy holding register (EHR)
 * 6 words (192 bit) according to HW implementation
 */
#define CC_TRNG_EHR_IN_WORDS	6
#define CC_TRNG_EHR_IN_BITS	(CC_TRNG_EHR_IN_WORDS * BITS_PER_TYPE(u32))

#define CC_HOST_RNG_IRQ_MASK BIT(CC_HOST_RGF_IRR_RNG_INT_BIT_SHIFT)

/* RNG interrupt mask */
#define CC_RNG_INT_MASK (BIT(CC_RNG_IMR_EHR_VALID_INT_MASK_BIT_SHIFT) | \
			 BIT(CC_RNG_IMR_AUTOCORR_ERR_INT_MASK_BIT_SHIFT) | \
			 BIT(CC_RNG_IMR_CRNGT_ERR_INT_MASK_BIT_SHIFT) | \
			 BIT(CC_RNG_IMR_VN_ERR_INT_MASK_BIT_SHIFT) | \
			 BIT(CC_RNG_IMR_WATCHDOG_INT_MASK_BIT_SHIFT))

// --------------------------------------
// BLOCK: RNG
// --------------------------------------
#define CC_RNG_IMR_REG_OFFSET	0x0100UL
#define CC_RNG_IMR_EHR_VALID_INT_MASK_BIT_SHIFT	0x0UL
#define CC_RNG_IMR_AUTOCORR_ERR_INT_MASK_BIT_SHIFT	0x1UL
#define CC_RNG_IMR_CRNGT_ERR_INT_MASK_BIT_SHIFT	0x2UL
#define CC_RNG_IMR_VN_ERR_INT_MASK_BIT_SHIFT	0x3UL
#define CC_RNG_IMR_WATCHDOG_INT_MASK_BIT_SHIFT	0x4UL
#define CC_RNG_ISR_REG_OFFSET	0x0104UL
#define CC_RNG_ISR_EHR_VALID_BIT_SHIFT	0x0UL
#define CC_RNG_ISR_EHR_VALID_BIT_SIZE	0x1UL
#define CC_RNG_ISR_AUTOCORR_ERR_BIT_SHIFT	0x1UL
#define CC_RNG_ISR_AUTOCORR_ERR_BIT_SIZE	0x1UL
#define CC_RNG_ISR_CRNGT_ERR_BIT_SHIFT	0x2UL
#define CC_RNG_ISR_CRNGT_ERR_BIT_SIZE	0x1UL
#define CC_RNG_ISR_WATCHDOG_BIT_SHIFT	0x4UL
#define CC_RNG_ISR_WATCHDOG_BIT_SIZE	0x1UL
#define CC_RNG_ICR_REG_OFFSET	0x0108UL
#define CC_TRNG_CONFIG_REG_OFFSET	0x010CUL
#define CC_EHR_DATA_0_REG_OFFSET	0x0114UL
#define CC_RND_SOURCE_ENABLE_REG_OFFSET	0x012CUL
#define CC_SAMPLE_CNT1_REG_OFFSET	0x0130UL
#define CC_TRNG_DEBUG_CONTROL_REG_OFFSET	0x0138UL
#define CC_RNG_SW_RESET_REG_OFFSET	0x0140UL
#define CC_RNG_CLK_ENABLE_REG_OFFSET	0x01C4UL
#define CC_RNG_DMA_ENABLE_REG_OFFSET	0x01C8UL
#define CC_RNG_WATCHDOG_VAL_REG_OFFSET	0x01D8UL
// --------------------------------------
// BLOCK: SEC_HOST_RGF
// --------------------------------------
#define CC_HOST_RGF_IRR_REG_OFFSET	0x0A00UL
#define CC_HOST_RGF_IRR_RNG_INT_BIT_SHIFT	0xAUL
#define CC_HOST_RGF_IMR_REG_OFFSET	0x0A04UL
#define CC_HOST_RGF_ICR_REG_OFFSET	0x0A08UL

#define CC_HOST_POWER_DOWN_EN_REG_OFFSET	0x0A78UL

// --------------------------------------
// BLOCK: NVM
// --------------------------------------
#define CC_NVM_IS_IDLE_REG_OFFSET	0x0F10UL
#define CC_NVM_IS_IDLE_VALUE_BIT_SHIFT	0x0UL
#define CC_NVM_IS_IDLE_VALUE_BIT_SIZE	0x1UL