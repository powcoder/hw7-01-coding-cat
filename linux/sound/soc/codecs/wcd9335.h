https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __WCD9335_H__
#define __WCD9335_H__

/*
 * WCD9335 register base can change according to the mode it works in.
 * In slimbus mode the reg base starts from 0x800.
 * In i2s/i2c mode the reg base is 0x0.
 */
#define WCD9335_REG(pg, r)	((pg << 8) | (r))
#define WCD9335_REG_OFFSET(r)	(r & 0xFF)
#define WCD9335_PAGE_OFFSET(r)	((r >> 8) & 0xFF)

/* Page-0 Registers */
#define WCD9335_PAGE0_PAGE_REGISTER		WCD9335_REG(0x00, 0x000)
#define WCD9335_CODEC_RPM_CLK_GATE		WCD9335_REG(0x00, 0x002)
#define WCD9335_CODEC_RPM_CLK_GATE_MCLK_GATE_MASK	GENMASK(1, 0)
#define WCD9335_CODEC_RPM_CLK_MCLK_CFG		WCD9335_REG(0x00, 0x003)
#define WCD9335_CODEC_RPM_CLK_MCLK_CFG_9P6MHZ	BIT(0)
#define WCD9335_CODEC_RPM_CLK_MCLK_CFG_12P288MHZ	BIT(0)
#define WCD9335_CODEC_RPM_CLK_MCLK_CFG_MCLK_MASK	GENMASK(1, 0)
#define WCD9335_CODEC_RPM_RST_CTL		WCD9335_REG(0x00, 0x009)
#define WCD9335_CODEC_RPM_PWR_CDC_DIG_HM_CTL	WCD9335_REG(0x00, 0x011)
#define WCD9335_CHIP_TIER_CTRL_CHIP_ID_BYTE0	WCD9335_REG(0x00, 0x021)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_CTL	WCD9335_REG(0x00, 0x025)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_SSTATE_MASK GENMASK(4, 1)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_EN_MASK	BIT(0)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_ENABLE	BIT(0)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_VAL_OUT0	WCD9335_REG(0x00, 0x029)
#define WCD9335_CHIP_TIER_CTRL_EFUSE_STATUS	WCD9335_REG(0x00, 0x039)
#define WCD9335_INTR_CFG			WCD9335_REG(0x00, 0x081)
#define WCD9335_INTR_CLR_COMMIT			WCD9335_REG(0x00, 0x082)
#define WCD9335_INTR_PIN1_MASK0			WCD9335_REG(0x00, 0x089)
#define WCD9335_INTR_PIN1_MASK1			WCD9335_REG(0x00, 0x08a)
#define WCD9335_INTR_PIN1_MASK2			WCD9335_REG(0x00, 0x08b)
#define WCD9335_INTR_PIN1_MASK3			WCD9335_REG(0x00, 0x08c)
#define WCD9335_INTR_PIN1_STATUS0		WCD9335_REG(0x00, 0x091)
#define WCD9335_INTR_PIN1_STATUS1		WCD9335_REG(0x00, 0x092)
#define WCD9335_INTR_PIN1_STATUS2		WCD9335_REG(0x00, 0x093)
#define WCD9335_INTR_PIN1_STATUS3		WCD9335_REG(0x00, 0x094)
#define WCD9335_INTR_PIN1_CLEAR0		WCD9335_REG(0x00, 0x099)
#define WCD9335_INTR_PIN1_CLEAR1		WCD9335_REG(0x00, 0x09a)
#define WCD9335_INTR_PIN1_CLEAR2		WCD9335_REG(0x00, 0x09b)
#define WCD9335_INTR_PIN1_CLEAR3		WCD9335_REG(0x00, 0x09c)
#define WCD9335_INTR_PIN2_MASK0			WCD9335_REG(0x00, 0x0a1)
#define WCD9335_INTR_PIN2_MASK1			WCD9335_REG(0x00, 0x0a2)
#define WCD9335_INTR_PIN2_MASK2			WCD9335_REG(0x00, 0x0a3)
#define WCD9335_INTR_PIN2_MASK3			WCD9335_REG(0x00, 0x0a4)
#define WCD9335_INTR_PIN2_STATUS0		WCD9335_REG(0x00, 0x0a9)
#define WCD9335_INTR_PIN2_STATUS1		WCD9335_REG(0x00, 0x0aa)
#define WCD9335_INTR_PIN2_STATUS2		WCD9335_REG(0x00, 0x0ab)
#define WCD9335_INTR_PIN2_STATUS3		WCD9335_REG(0x00, 0x0ac)
#define WCD9335_INTR_PIN2_CLEAR0		WCD9335_REG(0x00, 0x0b1)
#define WCD9335_INTR_PIN2_CLEAR1		WCD9335_REG(0x00, 0x0b2)
#define WCD9335_INTR_PIN2_CLEAR2		WCD9335_REG(0x00, 0x0b3)
#define WCD9335_INTR_PIN2_CLEAR3		WCD9335_REG(0x00, 0x0b4)
#define WCD9335_INTR_LEVEL0			WCD9335_REG(0x00, 0x0e1)
#define WCD9335_INTR_LEVEL1			WCD9335_REG(0x00, 0x0e2)
#define WCD9335_INTR_LEVEL2			WCD9335_REG(0x00, 0x0e3)
#define WCD9335_INTR_LEVEL3			WCD9335_REG(0x00, 0x0e4)

/* Page-1 Registers */
#define WCD9335_CPE_FLL_USER_CTL_0		WCD9335_REG(0x01, 0x001)
#define WCD9335_CPE_FLL_USER_CTL_1		WCD9335_REG(0x01, 0x002)
#define WCD9335_CPE_FLL_USER_CTL_2		WCD9335_REG(0x01, 0x003)
#define WCD9335_CPE_FLL_USER_CTL_3		WCD9335_REG(0x01, 0x004)
#define WCD9335_CPE_FLL_USER_CTL_4		WCD9335_REG(0x01, 0x005)
#define WCD9335_CPE_FLL_USER_CTL_5		WCD9335_REG(0x01, 0x006)
#define WCD9335_CPE_FLL_USER_CTL_6		WCD9335_REG(0x01, 0x007)
#define WCD9335_CPE_FLL_USER_CTL_7		WCD9335_REG(0x01, 0x008)
#define WCD9335_CPE_FLL_USER_CTL_8		WCD9335_REG(0x01, 0x009)
#define WCD9335_CPE_FLL_USER_CTL_9		WCD9335_REG(0x01, 0x00a)
#define WCD9335_CPE_FLL_L_VAL_CTL_0		WCD9335_REG(0x01, 0x00b)
#define WCD9335_CPE_FLL_L_VAL_CTL_1		WCD9335_REG(0x01, 0x00c)
#define WCD9335_CPE_FLL_DSM_FRAC_CTL_0		WCD9335_REG(0x01, 0x00d)
#define WCD9335_CPE_FLL_DSM_FRAC_CTL_1		WCD9335_REG(0x01, 0x00e)
#define WCD9335_CPE_FLL_CONFIG_CTL_0		WCD9335_REG(0x01, 0x00f)
#define WCD9335_CPE_FLL_CONFIG_CTL_1		WCD9335_REG(0x01, 0x010)
#define WCD9335_CPE_FLL_CONFIG_CTL_2		WCD9335_REG(0x01, 0x011)
#define WCD9335_CPE_FLL_CONFIG_CTL_3		WCD9335_REG(0x01, 0x012)
#define WCD9335_CPE_FLL_CONFIG_CTL_4		WCD9335_REG(0x01, 0x013)
#define WCD9335_CPE_FLL_TEST_CTL_0		WCD9335_REG(0x01, 0x014)
#define WCD9335_CPE_FLL_TEST_CTL_1		WCD9335_REG(0x01, 0x015)
#define WCD9335_CPE_FLL_TEST_CTL_2		WCD9335_REG(0x01, 0x016)
#define WCD9335_CPE_FLL_TEST_CTL_3		WCD9335_REG(0x01, 0x017)
#define WCD9335_CPE_FLL_TEST_CTL_4		WCD9335_REG(0x01, 0x018)
#define WCD9335_CPE_FLL_TEST_CTL_5		WCD9335_REG(0x01, 0x019)
#define WCD9335_CPE_FLL_TEST_CTL_6		WCD9335_REG(0x01, 0x01a)
#define WCD9335_CPE_FLL_TEST_CTL_7		WCD9335_REG(0x01, 0x01b)
#define WCD9335_CPE_FLL_FREQ_CTL_0		WCD9335_REG(0x01, 0x01c)
#define WCD9335_CPE_FLL_FREQ_CTL_1		WCD9335_REG(0x01, 0x01d)
#define WCD9335_CPE_FLL_FREQ_CTL_2		WCD9335_REG(0x01, 0x01e)
#define WCD9335_CPE_FLL_FREQ_CTL_3		WCD9335_REG(0x01, 0x01f)
#define WCD9335_CPE_FLL_SSC_CTL_0		WCD9335_REG(0x01, 0x020)
#define WCD9335_CPE_FLL_SSC_CTL_1		WCD9335_REG(0x01, 0x021)
#define WCD9335_CPE_FLL_SSC_CTL_2		WCD9335_REG(0x01, 0x022)
#define WCD9335_CPE_FLL_SSC_CTL_3		WCD9335_REG(0x01, 0x023)
#define WCD9335_CPE_FLL_FLL_MODE		WCD9335_REG(0x01, 0x024)
#define WCD9335_CPE_FLL_STATUS_0		WCD9335_REG(0x01, 0x025)
#define WCD9335_CPE_FLL_STATUS_1		WCD9335_REG(0x01, 0x026)
#define WCD9335_CPE_FLL_STATUS_2		WCD9335_REG(0x01, 0x027)
#define WCD9335_CPE_FLL_STATUS_3		WCD9335_REG(0x01, 0x028)
#define WCD9335_I2S_FLL_USER_CTL_0		WCD9335_REG(0x01, 0x041)
#define WCD9335_I2S_FLL_USER_CTL_1		WCD9335_REG(0x01, 0x042)
#define WCD9335_I2S_FLL_USER_CTL_2		WCD9335_REG(0x01, 0x043)
#define WCD9335_I2S_FLL_USER_CTL_3		WCD9335_REG(0x01, 0x044)
#define WCD9335_I2S_FLL_USER_CTL_4		WCD9335_REG(0x01, 0x045)
#define WCD9335_I2S_FLL_USER_CTL_5		WCD9335_REG(0x01, 0x046)
#define WCD9335_I2S_FLL_USER_CTL_6		WCD9335_REG(0x01, 0x047)
#define WCD9335_I2S_FLL_USER_CTL_7		WCD9335_REG(0x01, 0x048)
#define WCD9335_I2S_FLL_USER_CTL_8		WCD9335_REG(0x01, 0x049)
#define WCD9335_I2S_FLL_USER_CTL_9		WCD9335_REG(0x01, 0x04a)
#define WCD9335_I2S_FLL_L_VAL_CTL_0		WCD9335_REG(0x01, 0x04b)
#define WCD9335_I2S_FLL_L_VAL_CTL_1		WCD9335_REG(0x01, 0x04c)
#define WCD9335_I2S_FLL_DSM_FRAC_CTL_0		WCD9335_REG(0x01, 0x04d)
#define WCD9335_I2S_FLL_DSM_FRAC_CTL_1		WCD9335_REG(0x01, 0x04e)
#define WCD9335_I2S_FLL_CONFIG_CTL_0		WCD9335_REG(0x01, 0x04f)
#define WCD9335_I2S_FLL_CONFIG_CTL_1		WCD9335_REG(0x01, 0x050)
#define WCD9335_I2S_FLL_CONFIG_CTL_2		WCD9335_REG(0x01, 0x051)
#define WCD9335_I2S_FLL_CONFIG_CTL_3		WCD9335_REG(0x01, 0x052)
#define WCD9335_I2S_FLL_CONFIG_CTL_4		WCD9335_REG(0x01, 0x053)
#define WCD9335_I2S_FLL_TEST_CTL_0		WCD9335_REG(0x01, 0x054)
#define WCD9335_I2S_FLL_TEST_CTL_1		WCD9335_REG(0x01, 0x055)
#define WCD9335_I2S_FLL_TEST_CTL_2		WCD9335_REG(0x01, 0x056)
#define WCD9335_I2S_FLL_TEST_CTL_3		WCD9335_REG(0x01, 0x057)
#define WCD9335_I2S_FLL_TEST_CTL_4		WCD9335_REG(0x01, 0x058)
#define WCD9335_I2S_FLL_TEST_CTL_5		WCD9335_REG(0x01, 0x059)
#define WCD9335_I2S_FLL_TEST_CTL_6		WCD9335_REG(0x01, 0x05a)
#define WCD9335_I2S_FLL_TEST_CTL_7		WCD9335_REG(0x01, 0x05b)
#define WCD9335_I2S_FLL_FREQ_CTL_0		WCD9335_REG(0x01, 0x05c)
#define WCD9335_I2S_FLL_FREQ_CTL_1		WCD9335_REG(0x01, 0x05d)
#define WCD9335_I2S_FLL_FREQ_CTL_2		WCD9335_REG(0x01, 0x05e)
#define WCD9335_I2S_FLL_FREQ_CTL_3		WCD9335_REG(0x01, 0x05f)
#define WCD9335_I2S_FLL_SSC_CTL_0		WCD9335_REG(0x01, 0x060)
#define WCD9335_I2S_FLL_SSC_CTL_1		WCD9335_REG(0x01, 0x061)
#define WCD9335_I2S_FLL_SSC_CTL_2		WCD9335_REG(0x01, 0x062)
#define WCD9335_I2S_FLL_SSC_CTL_3		WCD9335_REG(0x01, 0x063)
#define WCD9335_I2S_FLL_FLL_MODE		WCD9335_REG(0x01, 0x064)
#define WCD9335_I2S_FLL_STATUS_0		WCD9335_REG(0x01, 0x065)
#define WCD9335_I2S_FLL_STATUS_1		WCD9335_REG(0x01, 0x066)
#define WCD9335_I2S_FLL_STATUS_2		WCD9335_REG(0x01, 0x067)
#define WCD9335_I2S_FLL_STATUS_3		WCD9335_REG(0x01, 0x068)
#define WCD9335_SB_FLL_USER_CTL_0		WCD9335_REG(0x01, 0x081)
#define WCD9335_SB_FLL_USER_CTL_1		WCD9335_REG(0x01, 0x082)
#define WCD9335_SB_FLL_USER_CTL_2		WCD9335_REG(0x01, 0x083)
#define WCD9335_SB_FLL_USER_CTL_3		WCD9335_REG(0x01, 0x084)
#define WCD9335_SB_FLL_USER_CTL_4		WCD9335_REG(0x01, 0x085)
#define WCD9335_SB_FLL_USER_CTL_5		WCD9335_REG(0x01, 0x086)
#define WCD9335_SB_FLL_USER_CTL_6		WCD9335_REG(0x01, 0x087)
#define WCD9335_SB_FLL_USER_CTL_7		WCD9335_REG(0x01, 0x088)
#define WCD9335_SB_FLL_USER_CTL_8		WCD9335_REG(0x01, 0x089)
#define WCD9335_SB_FLL_USER_CTL_9		WCD9335_REG(0x01, 0x08a)
#define WCD9335_SB_FLL_L_VAL_CTL_0		WCD9335_REG(0x01, 0x08b)
#define WCD9335_SB_FLL_L_VAL_CTL_1		WCD9335_REG(0x01, 0x08c)
#define WCD9335_SB_FLL_DSM_FRAC_CTL_0		WCD9335_REG(0x01, 0x08d)
#define WCD9335_SB_FLL_DSM_FRAC_CTL_1		WCD9335_REG(0x01, 0x08e)
#define WCD9335_SB_FLL_CONFIG_CTL_0		WCD9335_REG(0x01, 0x08f)
#define WCD9335_SB_FLL_CONFIG_CTL_1		WCD9335_REG(0x01, 0x090)
#define WCD9335_SB_FLL_CONFIG_CTL_2		WCD9335_REG(0x01, 0x091)
#define WCD9335_SB_FLL_CONFIG_CTL_3		WCD9335_REG(0x01, 0x092)
#define WCD9335_SB_FLL_CONFIG_CTL_4		WCD9335_REG(0x01, 0x093)
#define WCD9335_SB_FLL_TEST_CTL_0		WCD9335_REG(0x01, 0x094)
#define WCD9335_SB_FLL_TEST_CTL_1		WCD9335_REG(0x01, 0x095)
#define WCD9335_SB_FLL_TEST_CTL_2		WCD9335_REG(0x01, 0x096)
#define WCD9335_SB_FLL_TEST_CTL_3		WCD9335_REG(0x01, 0x097)
#define WCD9335_SB_FLL_TEST_CTL_4		WCD9335_REG(0x01, 0x098)
#define WCD9335_SB_FLL_TEST_CTL_5		WCD9335_REG(0x01, 0x099)
#define WCD9335_SB_FLL_TEST_CTL_6		WCD9335_REG(0x01, 0x09a)
#define WCD9335_SB_FLL_TEST_CTL_7		WCD9335_REG(0x01, 0x09b)
#define WCD9335_SB_FLL_FREQ_CTL_0		WCD9335_REG(0x01, 0x09c)
#define WCD9335_SB_FLL_FREQ_CTL_1		WCD9335_REG(0x01, 0x09d)
#define WCD9335_SB_FLL_FREQ_CTL_2		WCD9335_REG(0x01, 0x09e)
#define WCD9335_SB_FLL_FREQ_CTL_3		WCD9335_REG(0x01, 0x09f)
#define WCD9335_SB_FLL_SSC_CTL_0		WCD9335_REG(0x01, 0x0a0)
#define WCD9335_SB_FLL_SSC_CTL_1		WCD9335_REG(0x01, 0x0a1)
#define WCD9335_SB_FLL_SSC_CTL_2		WCD9335_REG(0x01, 0x0a2)
#define WCD9335_SB_FLL_SSC_CTL_3		WCD9335_REG(0x01, 0x0a3)
#define WCD9335_SB_FLL_FLL_MODE			WCD9335_REG(0x01, 0x0a4)
#define WCD9335_SB_FLL_STATUS_0			WCD9335_REG(0x01, 0x0a5)
#define WCD9335_SB_FLL_STATUS_1			WCD9335_REG(0x01, 0x0a6)
#define WCD9335_SB_FLL_STATUS_2			WCD9335_REG(0x01, 0x0a7)
#define WCD9335_SB_FLL_STATUS_3			WCD9335_REG(0x01, 0x0a8)

/* Page-2 Registers */
#define WCD9335_PAGE2_PAGE_REGISTER		WCD9335_REG(0x02, 0x000)
#define WCD9335_CPE_SS_DMIC0_CTL		WCD9335_REG(0x02, 0x063)
#define WCD9335_CPE_SS_DMIC1_CTL		WCD9335_REG(0x02, 0x064)
#define WCD9335_CPE_SS_DMIC2_CTL		WCD9335_REG(0x02, 0x065)
#define WCD9335_CPE_SS_DMIC_CFG			WCD9335_REG(0x02, 0x066)
#define WCD9335_SOC_MAD_AUDIO_CTL_2		WCD9335_REG(0x02, 0x084)

/* Page-6 Registers */
#define WCD9335_PAGE6_PAGE_REGISTER		WCD9335_REG(0x06, 0x000)
#define WCD9335_ANA_BIAS			WCD9335_REG(0x06, 0x001)
#define WCD9335_ANA_BIAS_EN_MASK		BIT(7)
#define WCD9335_ANA_BIAS_ENABLE			BIT(7)
#define WCD9335_ANA_BIAS_DISABLE		0
#define WCD9335_ANA_BIAS_PRECHRG_EN_MASK	BIT(6)
#define WCD9335_ANA_BIAS_PRECHRG_ENABLE		BIT(6)
#define WCD9335_ANA_BIAS_PRECHRG_DISABLE	0
#define WCD9335_ANA_BIAS_PRECHRG_CTL_MODE	BIT(5)
#define WCD9335_ANA_BIAS_PRECHRG_CTL_MODE_AUTO	BIT(5)
#define WCD9335_ANA_BIAS_PRECHRG_CTL_MODE_MANUAL	0
#define WCD9335_ANA_CLK_TOP			WCD9335_REG(0x06, 0x002)
#define WCD9335_ANA_CLK_MCLK_EN_MASK		BIT(2)
#define WCD9335_ANA_CLK_MCLK_ENABLE		BIT(2)
#define WCD9335_ANA_CLK_MCLK_DISABLE		0
#define WCD9335_ANA_CLK_MCLK_SRC_MASK		BIT(3)
#define WCD9335_ANA_CLK_MCLK_SRC_RCO		BIT(3)
#define WCD9335_ANA_CLK_MCLK_SRC_EXTERNAL	0
#define WCD9335_ANA_CLK_EXT_CLKBUF_EN_MASK	BIT(7)
#define WCD9335_ANA_CLK_EXT_CLKBUF_ENABLE	BIT(7)
#define WCD9335_ANA_CLK_EXT_CLKBUF_DISABLE	0
#define WCD9335_ANA_RCO				WCD9335_REG(0x06, 0x003)
#define WCD9335_ANA_RCO_BG_EN_MASK		BIT(7)
#define WCD9335_ANA_RCO_BG_ENABLE		BIT(7)
#define WCD9335_ANA_BUCK_VOUT_D			WCD9335_REG(0x06, 0x005)
#define WCD9335_ANA_BUCK_VOUT_MASK		GENMASK(7, 0)
#define WCD9335_ANA_BUCK_CTL			WCD9335_REG(0x06, 0x006)
#define WCD9335_ANA_BUCK_CTL_VOUT_D_IREF_MASK	BIT(1)
#define WCD9335_ANA_BUCK_CTL_VOUT_D_IREF_EXT	BIT(1)
#define WCD9335_ANA_BUCK_CTL_VOUT_D_IREF_INT	0
#define WCD9335_ANA_BUCK_CTL_VOUT_D_VREF_MASK	BIT(2)
#define WCD9335_ANA_BUCK_CTL_VOUT_D_VREF_EXT	BIT(2)
#define WCD9335_ANA_BUCK_CTL_VOUT_D_VREF_INT	0
#define WCD9335_ANA_BUCK_CTL_RAMP_START_MASK	BIT(7)
#define WCD9335_ANA_BUCK_CTL_RAMP_START_ENABLE	BIT(7)
#define WCD9335_ANA_BUCK_CTL_RAMP_START_DISABLE	0
#define WCD9335_ANA_RX_SUPPLIES			WCD9335_REG(0x06, 0x008)
#define WCD9335_ANA_RX_BIAS_ENABLE_MASK		BIT(0)
#define WCD9335_ANA_RX_BIAS_ENABLE		BIT(0)
#define WCD9335_ANA_RX_BIAS_DISABLE		0
#define WCD9335_ANA_HPH				WCD9335_REG(0x06, 0x009)
#define WCD9335_ANA_EAR				WCD9335_REG(0x06, 0x00a)
#define WCD9335_ANA_LO_1_2			WCD9335_REG(0x06, 0x00b)
#define WCD9335_ANA_LO_3_4			WCD9335_REG(0x06, 0x00c)
#define WCD9335_ANA_AMIC1			WCD9335_REG(0x06, 0x00e)
#define WCD9335_ANA_AMIC2			WCD9335_REG(0x06, 0x00f)
#define WCD9335_ANA_AMIC3			WCD9335_REG(0x06, 0x010)
#define WCD9335_ANA_AMIC4			WCD9335_REG(0x06, 0x011)
#define WCD9335_ANA_AMIC5			WCD9335_REG(0x06, 0x012)
#define WCD9335_ANA_AMIC6			WCD9335_REG(0x06, 0x013)
#define WCD9335_ANA_MBHC_MECH			WCD9335_REG(0x06, 0x014)
#define WCD9335_MBHC_L_DET_EN_MASK		BIT(7)
#define WCD9335_MBHC_L_DET_EN			BIT(7)
#define WCD9335_MBHC_GND_DET_EN_MASK		BIT(6)
#define WCD9335_MBHC_MECH_DETECT_TYPE_MASK	BIT(5)
#define WCD9335_MBHC_MECH_DETECT_TYPE_SHIFT	5
#define WCD9335_MBHC_HPHL_PLUG_TYPE_MASK	BIT(4)
#define WCD9335_MBHC_HPHL_PLUG_TYPE_NO		BIT(4)
#define WCD9335_MBHC_GND_PLUG_TYPE_MASK		BIT(3)
#define WCD9335_MBHC_GND_PLUG_TYPE_NO		BIT(3)
#define WCD9335_MBHC_HSL_PULLUP_COMP_EN		BIT(2)
#define WCD9335_MBHC_HPHL_100K_TO_GND_EN	BIT(0)

#define WCD9335_ANA_MBHC_ELECT			WCD9335_REG(0x06, 0x015)
#define WCD9335_ANA_MBHC_BD_ISRC_CTL_MASK	GENMASK(6, 4)
#define WCD9335_ANA_MBHC_BD_ISRC_100UA		GENMASK(5, 4)
#define WCD9335_ANA_MBHC_BD_ISRC_OFF		0
#define WCD9335_ANA_MBHC_BIAS_EN_MASK		BIT(0)
#define WCD9335_ANA_MBHC_BIAS_EN		BIT(0)
#define WCD9335_ANA_MBHC_ZDET			WCD9335_REG(0x06, 0x016)
#define WCD9335_ANA_MBHC_RESULT_1		WCD9335_REG(0x06, 0x017)
#define WCD9335_ANA_MBHC_RESULT_2		WCD9335_REG(0x06, 0x018)
#define WCD9335_ANA_MBHC_RESULT_3		WCD9335_REG(0x06, 0x019)
#define WCD9335_MBHC_BTN_RESULT_MASK		GENMASK(2, 0)
#define WCD9335_ANA_MBHC_BTN0			WCD9335_REG(0x06, 0x01a)
#define WCD9335_ANA_MBHC_BTN1			WCD9335_REG(0x06, 0x01b)
#define WCD9335_ANA_MBHC_BTN2			WCD9335_REG(0x06, 0x01c)
#define WCD9335_ANA_MBHC_BTN3			WCD9335_REG(0x06, 0x01d)
#define WCD9335_ANA_MBHC_BTN4			WCD9335_REG(0x06, 0x01e)
#define WCD9335_ANA_MBHC_BTN5			WCD9335_REG(0x06, 0x01f)
#define WCD9335_ANA_MBHC_BTN6			WCD9335_REG(0x06, 0x020)
#define WCD9335_ANA_MBHC_BTN7			WCD9335_REG(0x06, 0x021)
#define WCD9335_ANA_MICB1			WCD9335_REG(0x06, 0x022)
#define WCD9335_ANA_MICB2			WCD9335_REG(0x06, 0x023)
#define WCD9335_ANA_MICB2_ENABLE		BIT(6)
#define WCD9335_ANA_MICB2_RAMP			WCD9335_REG(0x06, 0x024)
#define WCD9335_ANA_MICB3			WCD9335_REG(0x06, 0x025)
#define WCD9335_ANA_MICB4			WCD9335_REG(0x06, 0x026)
#define WCD9335_ANA_VBADC			WCD9335_REG(0x06, 0x027)
#define WCD9335_BIAS_VBG_FINE_ADJ		WCD9335_REG(0x06, 0x029)
#define WCD9335_RCO_CTRL_2			WCD9335_REG(0x06, 0x02f)
#define WCD9335_SIDO_SIDO_CCL_2			WCD9335_REG(0x06, 0x042)
#define WCD9335_SIDO_SIDO_CCL_4			WCD9335_REG(0x06, 0x044)
#define WCD9335_SIDO_SIDO_CCL_8			WCD9335_REG(0x06, 0x048)
#define WCD9335_SIDO_SIDO_CCL_10		WCD9335_REG(0x06, 0x04a)
#define WCD9335_SIDO_SIDO_CCL_10_ICHARG_PWR_SEL_C320FF		0x2
/* Comparator 1 and 2 Bias current at 1P0UA with start pulse width of C320FF */
#define WCD9335_SIDO_SIDO_CCL_DEF_VALUE		0x6e
#define WCD9335_SIDO_SIDO_TEST_2		WCD9335_REG(0x06, 0x055)
#define WCD9335_MBHC_CTL_1			WCD9335_REG(0x06, 0x056)
#define WCD9335_MBHC_BTN_DBNC_MASK		GENMASK(1, 0)
#define WCD9335_MBHC_BTN_DBNC_T_16_MS		0x2
#define WCD9335_MBHC_CTL_RCO_EN_MASK		BIT(7)
#define WCD9335_MBHC_CTL_RCO_EN			BIT(7)

#define WCD9335_MBHC_CTL_2			WCD9335_REG(0x06, 0x057)
#define WCD9335_MBHC_HS_VREF_CTL_MASK		GENMASK(1, 0)
#define WCD9335_MBHC_HS_VREF_1P5_V		0x1
#define WCD9335_MBHC_PLUG_DETECT_CTL		WCD9335_REG(0x06, 0x058)
#define WCD9335_MBHC_HSDET_PULLUP_CTL_MASK	GENMASK(7, 6)
#define WCD9335_MBHC_HSDET_PULLUP_CTL_SHIFT	6
#define WCD9335_MBHC_HSDET_PULLUP_CTL_1_2P0_UA	0x80
#define WCD9335_MBHC_DBNC_TIMER_INSREM_DBNC_T_96_MS	0x6

#define WCD9335_MBHC_ZDET_RAMP_CTL		WCD9335_REG(0x06, 0x05a)
#define WCD9335_VBADC_IBIAS_FE			WCD9335_REG(0x06, 0x05e)
#define WCD9335_FLYBACK_CTRL_1			WCD9335_REG(0x06, 0x0b1)
#define WCD9335_RX_BIAS_HPH_PA			WCD9335_REG(0x06, 0x0bb)
#define WCD9335_RX_BIAS_HPH_PA_AMP_5_UA_MASK	GENMASK(3, 0)
#define WCD9335_RX_BIAS_HPH_RDACBUFF_CNP2	WCD9335_REG(0x06, 0x0bc)
#define WCD9335_RX_BIAS_HPH_RDAC_LDO		WCD9335_REG(0x06, 0x0bd)
#define WCD9335_RX_BIAS_FLYB_BUFF		WCD9335_REG(0x06, 0x0c7)
#define WCD9335_RX_BIAS_FLYB_VPOS_5_UA_MASK	GENMASK(3, 0)
#define WCD9335_RX_BIAS_FLYB_I_0P0_UA		0
#define WCD9335_RX_BIAS_FLYB_VNEG_5_UA_MASK	GENMASK(7, 4)
#define WCD9335_RX_BIAS_FLYB_MID_RST		WCD9335_REG(0x06, 0x0c8)
#define WCD9335_HPH_CNP_WG_CTL			WCD9335_REG(0x06, 0x0cc)
#define WCD9335_HPH_CNP_WG_CTL_CURR_LDIV_MASK	GENMASK(2, 0)
#define WCD9335_HPH_CNP_WG_CTL_CURR_LDIV_RATIO_500 0x2
#define WCD9335_HPH_CNP_WG_CTL_CURR_LDIV_RATIO_1000 0x3
#define WCD9335_HPH_OCP_CTL			WCD9335_REG(0x06, 0x0ce)
#define WCD9335_HPH_AUTO_CHOP			WCD9335_REG(0x06, 0x0cf)
#define WCD9335_HPH_AUTO_CHOP_MASK		BIT(5)
#define WCD9335_HPH_AUTO_CHOP_FORCE_ENABLE		BIT(5)
#define WCD9335_HPH_AUTO_CHOP_ENABLE_BY_CMPDR_GAIN		0
#define WCD9335_HPH_PA_CTL1			WCD9335_REG(0x06, 0x0d1)
#define WCD9335_HPH_PA_GM3_IB_SCALE_MASK		GENMASK(3, 1)
#define WCD9335_HPH_PA_CTL2			WCD9335_REG(0x06, 0x0d2)
#define WCD9335_HPH_PA_CTL2_FORCE_PSRREH_MASK	BIT(2)
#define WCD9335_HPH_PA_CTL2_FORCE_PSRREH_ENABLE	BIT(2)
#define WCD9335_HPH_PA_CTL2_FORCE_PSRREH_DISABLE 0
#define WCD9335_HPH_PA_CTL2_FORCE_IQCTRL_MASK	BIT(3)
#define WCD9335_HPH_PA_CTL2_FORCE_IQCTRL_ENABLE	BIT(3)
#define WCD9335_HPH_PA_CTL2_FORCE_IQCTRL_DISABLE	0
#define WCD9335_HPH_PA_CTL2_HPH_PSRR_ENH_MASK	BIT(5)
#define WCD9335_HPH_PA_CTL2_HPH_PSRR_ENABLE	BIT(5)
#define WCD9335_HPH_PA_CTL2_HPH_PSRR_DISABLE	0
#define WCD9335_HPH_L_EN			WCD9335_REG(0x06, 0x0d3)
#define WCD9335_HPH_CONST_SEL_L_MASK		GENMASK(7, 6)
#define WCD9335_HPH_CONST_SEL_L_BYPASS		0
#define WCD9335_HPH_CONST_SEL_L_LP_PATH		0x40
#define WCD9335_HPH_CONST_SEL_L_HQ_PATH		0x80
#define WCD9335_HPH_PA_GAIN_MASK		GENMASK(4, 0)
#define WCD9335_HPH_GAIN_SRC_SEL_MASK		BIT(5)
#define WCD9335_HPH_GAIN_SRC_SEL_COMPANDER	0
#define WCD9335_HPH_GAIN_SRC_SEL_REGISTER	BIT(5)
#define WCD9335_HPH_L_TEST			WCD9335_REG(0x06, 0x0d4)
#define WCD9335_HPH_R_EN			WCD9335_REG(0x06, 0x0d6)
#define WCD9335_HPH_R_TEST			WCD9335_REG(0x06, 0x0d7)
#define WCD9335_HPH_R_ATEST			WCD9335_REG(0x06, 0x0d8)
#define WCD9335_HPH_RDAC_LDO_CTL		WCD9335_REG(0x06, 0x0db)
#define WCD9335_HPH_RDAC_N1P65_LD_OUTCTL_MASK	GENMASK(2, 0)
#define WCD9335_HPH_RDAC_N1P65_LD_OUTCTL_V_N1P60	0x1
#define WCD9335_HPH_RDAC_1P65_LD_OUTCTL_MASK	GENMASK(6, 4)
#define WCD9335_HPH_RDAC_1P65_LD_OUTCTL_V_N1P60	0x10
#define WCD9335_HPH_REFBUFF_LP_CTL		WCD9335_REG(0x06, 0x0de)
#define WCD9335_HPH_L_DAC_CTL			WCD9335_REG(0x06, 0x0df)
#define WCD9335_HPH_DAC_LDO_POWERMODE_MASK	BIT(0)
#define WCD9335_HPH_DAC_LDO_POWERMODE_LOWPOWER	0
#define WCD9335_HPH_DAC_LDO_POWERMODE_UHQA	BIT(0)
#define WCD9335_HPH_DAC_LDO_UHQA_OV_MASK	BIT(1)
#define WCD9335_HPH_DAC_LDO_UHQA_OV_ENABLE	BIT(1)
#define WCD9335_HPH_DAC_LDO_UHQA_OV_DISABLE	0

#define WCD9335_EAR_CMBUFF			WCD9335_REG(0x06, 0x0e2)
#define WCD9335_DIFF_LO_LO2_COMPANDER		WCD9335_REG(0x06, 0x0ea)
#define WCD9335_DIFF_LO_LO1_COMPANDER		WCD9335_REG(0x06, 0x0eb)
#define WCD9335_DIFF_LO_COM_SWCAP_REFBUF_FREQ	WCD9335_REG(0x06, 0x0f1)
#define WCD9335_DIFF_LO_COM_PA_FREQ		WCD9335_REG(0x06, 0x0f2)
#define WCD9335_SE_LO_LO3_GAIN			WCD9335_REG(0x06, 0x0f8)
#define WCD9335_SE_LO_LO3_CTRL			WCD9335_REG(0x06, 0x0f9)
#define WCD9335_SE_LO_LO4_GAIN			WCD9335_REG(0x06, 0x0fa)

/* Page-10 Registers */
#define WCD9335_CDC_TX0_TX_PATH_CTL		WCD9335_REG(0x0a, 0x031)
#define WCD9335_CDC_TX_PATH_CTL_PCM_RATE_MASK	GENMASK(3, 0)
#define WCD9335_CDC_TX_PATH_CTL(dec)	WCD9335_REG(0xa, (0x31 + dec * 0x10))
#define WCD9335_CDC_TX0_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x032)
#define WCD9335_CDC_TX_ADC_AMIC_DMIC_SEL_MASK	BIT(7)
#define WCD9335_CDC_TX_ADC_DMIC_SEL		BIT(7)
#define WCD9335_CDC_TX_ADC_AMIC_SEL		0
#define WCD9335_CDC_TX0_TX_VOL_CTL		WCD9335_REG(0x0a, 0x034)
#define WCD9335_CDC_TX0_TX_PATH_SEC2		WCD9335_REG(0x0a, 0x039)
#define WCD9335_CDC_TX0_TX_PATH_SEC7		WCD9335_REG(0x0a, 0x03e)
#define WCD9335_CDC_TX1_TX_PATH_CTL		WCD9335_REG(0x0a, 0x041)
#define WCD9335_CDC_TX1_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x042)
#define WCD9335_CDC_TX2_TX_PATH_CTL		WCD9335_REG(0x0a, 0x051)
#define WCD9335_CDC_TX2_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x052)
#define WCD9335_CDC_TX2_TX_VOL_CTL		WCD9335_REG(0x0a, 0x054)
#define WCD9335_CDC_TX3_TX_PATH_CTL		WCD9335_REG(0x0a, 0x061)
#define WCD9335_CDC_TX3_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x062)
#define WCD9335_CDC_TX3_TX_VOL_CTL		WCD9335_REG(0x0a, 0x064)
#define WCD9335_CDC_TX4_TX_PATH_CTL		WCD9335_REG(0x0a, 0x071)
#define WCD9335_CDC_TX4_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x072)
#define WCD9335_CDC_TX4_TX_VOL_CTL		WCD9335_REG(0x0a, 0x074)
#define WCD9335_CDC_TX5_TX_PATH_CTL		WCD9335_REG(0x0a, 0x081)
#define WCD9335_CDC_TX5_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x082)
#define WCD9335_CDC_TX5_TX_VOL_CTL		WCD9335_REG(0x0a, 0x084)
#define WCD9335_CDC_TX6_TX_PATH_CTL		WCD9335_REG(0x0a, 0x091)
#define WCD9335_CDC_TX6_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x092)
#define WCD9335_CDC_TX6_TX_VOL_CTL		WCD9335_REG(0x0a, 0x094)
#define WCD9335_CDC_TX7_TX_PATH_CTL		WCD9335_REG(0x0a, 0x0a1)
#define WCD9335_CDC_TX7_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x0a2)
#define WCD9335_CDC_TX7_TX_VOL_CTL		WCD9335_REG(0x0a, 0x0a4)
#define WCD9335_CDC_TX8_TX_PATH_CTL		WCD9335_REG(0x0a, 0x0b1)
#define WCD9335_CDC_TX8_TX_PATH_CFG0		WCD9335_REG(0x0a, 0x0b2)
#define WCD9335_CDC_TX8_TX_VOL_CTL		WCD9335_REG(0x0a, 0x0b4)
#define WCD9335_CDC_TX9_SPKR_PROT_PATH_CFG0	WCD9335_REG(0x0a, 0x0c3)
#define WCD9335_CDC_TX10_SPKR_PROT_PATH_CFG0	WCD9335_REG(0x0a, 0x0c7)
#define WCD9335_CDC_TX11_SPKR_PROT_PATH_CFG0	WCD9335_REG(0x0a, 0x0cb)
#define WCD9335_CDC_TX12_SPKR_PROT_PATH_CFG0	WCD9335_REG(0x0a, 0x0cf)

/* Page-11 Registers */
#define WCD9335_PAGE11_PAGE_REGISTER		WCD9335_REG(0x0b, 0x000)
#define WCD9335_CDC_COMPANDER1_CTL0		WCD9335_REG(0x0b, 0x001)
#define WCD9335_CDC_COMPANDER1_CTL(c)	WCD9335_REG(0x0b, (0x001 + c * 0x8))
#define WCD9335_CDC_COMPANDER_CLK_EN_MASK	BIT(0)
#define WCD9335_CDC_COMPANDER_CLK_ENABLE	BIT(0)
#define WCD9335_CDC_COMPANDER_CLK_DISABLE	0
#define WCD9335_CDC_COMPANDER_SOFT_RST_MASK	BIT(1)
#define WCD9335_CDC_COMPANDER_SOFT_RST_ENABLE	BIT(1)
#define WCD9335_CDC_COMPANDER_SOFT_RST_DISABLE	0
#define WCD9335_CDC_COMPANDER_HALT_MASK		BIT(2)
#define WCD9335_CDC_COMPANDER_HALT		BIT(2)
#define WCD9335_CDC_COMPANDER_NOHALT		0
#define WCD9335_CDC_COMPANDER7_CTL3		WCD9335_REG(0x0b, 0x034)
#define WCD9335_CDC_COMPANDER7_CTL7		WCD9335_REG(0x0b, 0x038)
#define WCD9335_CDC_COMPANDER8_CTL3		WCD9335_REG(0x0b, 0x03c)
#define WCD9335_CDC_COMPANDER8_CTL7		WCD9335_REG(0x0b, 0x040)
#define WCD9335_CDC_RX0_RX_PATH_CTL		WCD9335_REG(0x0b, 0x041)
#define WCD9335_CDC_RX_PGA_MUTE_EN_MASK		BIT(4)
#define WCD9335_CDC_RX_PGA_MUTE_ENABLE		BIT(4)
#define WCD9335_CDC_RX_PGA_MUTE_DISABLE		0
#define WCD9335_CDC_RX_CLK_EN_MASK		BIT(5)
#define WCD9335_CDC_RX_CLK_ENABLE		BIT(5)
#define WCD9335_CDC_RX_CLK_DISABLE		0
#define WCD9335_CDC_RX_RESET_MASK		BIT(6)
#define WCD9335_CDC_RX_RESET_ENABLE		BIT(6)
#define WCD9335_CDC_RX_RESET_DISABLE		0
#define WCD9335_CDC_RX_PATH_CTL(rx)	WCD9335_REG(0x0b, (0x041 + rx * 0x14))
#define WCD9335_CDC_RX0_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x042)
#define WCD9335_CDC_RX0_RX_PATH_CFG1		WCD9335_REG(0x0b, 0x043)
#define WCD9335_CDC_RX0_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x044)
#define WCD9335_CDC_RX0_RX_VOL_CTL		WCD9335_REG(0x0b, 0x045)
#define WCD9335_CDC_RX0_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x046)
#define WCD9335_CDC_MIX_PCM_RATE_MASK		GENMASK(3, 0)
#define WCD9335_CDC_RX_PATH_MIX_CTL(rx)	WCD9335_REG(0x0b, (0x46 + rx * 0x14))
#define WCD9335_CDC_RX0_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x047)
#define WCD9335_CDC_RX0_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x048)
#define WCD9335_CDC_RX0_RX_PATH_SEC0		WCD9335_REG(0x0b, 0x049)
#define WCD9335_CDC_RX0_RX_PATH_SEC7		WCD9335_REG(0x0b, 0x050)
#define WCD9335_CDC_RX0_RX_PATH_MIX_SEC0	WCD9335_REG(0x0b, 0x051)
#define WCD9335_CDC_RX1_RX_PATH_CTL		WCD9335_REG(0x0b, 0x055)
#define WCD9335_CDC_RX1_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x056)
#define WCD9335_CDC_RX1_RX_PATH_CFG(c)	WCD9335_REG(0x0b, (0x056 + c * 0x14))
#define WCD9335_CDC_RX_PATH_CFG_CMP_EN_MASK	BIT(1)
#define WCD9335_CDC_RX_PATH_CFG_CMP_ENABLE	BIT(1)
#define WCD9335_CDC_RX_PATH_CFG_CMP_DISABLE	0
#define WCD9335_CDC_RX_PATH_CFG_HD2_EN_MASK	BIT(2)
#define WCD9335_CDC_RX_PATH_CFG_HD2_ENABLE	BIT(2)
#define WCD9335_CDC_RX_PATH_CFG_HD2_DISABLE	0
#define WCD9335_CDC_RX_PATH_CFG0_DLY_ZN_EN_MASK	BIT(3)
#define WCD9335_CDC_RX_PATH_CFG0_DLY_ZN_EN	BIT(3)
#define WCD9335_CDC_RX_PATH_CFG0_DLY_ZN_DISABLE	0
#define WCD9335_CDC_RX1_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x058)
#define WCD9335_CDC_RX1_RX_VOL_CTL		WCD9335_REG(0x0b, 0x059)
#define WCD9335_CDC_RX1_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x05a)
#define WCD9335_CDC_RX1_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x05b)
#define WCD9335_CDC_RX1_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x05c)
#define WCD9335_CDC_RX1_RX_PATH_SEC0		WCD9335_REG(0x0b, 0x05d)
#define WCD9335_CDC_RX1_RX_PATH_SEC3		WCD9335_REG(0x0b, 0x060)
#define WCD9335_CDC_RX_PATH_SEC_HD2_SCALE_MASK	GENMASK(1, 0)
#define WCD9335_CDC_RX_PATH_SEC_HD2_SCALE_2	0x1
#define WCD9335_CDC_RX_PATH_SEC_HD2_SCALE_1	0
#define WCD9335_CDC_RX_PATH_SEC_HD2_ALPHA_MASK	GENMASK(5, 2)
#define WCD9335_CDC_RX_PATH_SEC_HD2_ALPHA_0P2500	0x10
#define WCD9335_CDC_RX_PATH_SEC_HD2_ALPHA_0P0000	0
#define WCD9335_CDC_RX2_RX_PATH_CTL		WCD9335_REG(0x0b, 0x069)
#define WCD9335_CDC_RX2_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x06a)
#define WCD9335_CDC_RX2_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x06c)
#define WCD9335_CDC_RX2_RX_VOL_CTL		WCD9335_REG(0x0b, 0x06d)
#define WCD9335_CDC_RX2_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x06e)
#define WCD9335_CDC_RX2_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x06f)
#define WCD9335_CDC_RX2_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x070)
#define WCD9335_CDC_RX2_RX_PATH_SEC0		WCD9335_REG(0x0b, 0x071)
#define WCD9335_CDC_RX_PATH_DEM_INP_SEL_MASK	GENMASK(1, 0)
#define WCD9335_CDC_RX2_RX_PATH_SEC3		WCD9335_REG(0x0b, 0x074)
#define WCD9335_CDC_RX3_RX_PATH_CTL		WCD9335_REG(0x0b, 0x07d)
#define WCD9335_CDC_RX3_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x07e)
#define WCD9335_CDC_RX3_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x080)
#define WCD9335_CDC_RX3_RX_VOL_CTL		WCD9335_REG(0x0b, 0x081)
#define WCD9335_CDC_RX3_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x082)
#define WCD9335_CDC_RX3_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x083)
#define WCD9335_CDC_RX3_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x084)
#define WCD9335_CDC_RX4_RX_PATH_CTL		WCD9335_REG(0x0b, 0x091)
#define WCD9335_CDC_RX4_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x092)
#define WCD9335_CDC_RX4_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x094)
#define WCD9335_CDC_RX4_RX_VOL_CTL		WCD9335_REG(0x0b, 0x095)
#define WCD9335_CDC_RX4_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x096)
#define WCD9335_CDC_RX4_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x097)
#define WCD9335_CDC_RX4_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x098)
#define WCD9335_CDC_RX5_RX_PATH_CTL		WCD9335_REG(0x0b, 0x0a5)
#define WCD9335_CDC_RX5_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x0a6)
#define WCD9335_CDC_RX5_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x0a8)
#define WCD9335_CDC_RX5_RX_VOL_CTL		WCD9335_REG(0x0b, 0x0a9)
#define WCD9335_CDC_RX5_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x0aa)
#define WCD9335_CDC_RX5_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x0ab)
#define WCD9335_CDC_RX5_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x0ac)
#define WCD9335_CDC_RX6_RX_PATH_CTL		WCD9335_REG(0x0b, 0x0b9)
#define WCD9335_CDC_RX6_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x0ba)
#define WCD9335_CDC_RX6_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x0bc)
#define WCD9335_CDC_RX6_RX_VOL_CTL		WCD9335_REG(0x0b, 0x0bd)
#define WCD9335_CDC_RX6_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x0be)
#define WCD9335_CDC_RX6_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x0bf)
#define WCD9335_CDC_RX6_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x0c0)
#define WCD9335_CDC_RX7_RX_PATH_CTL		WCD9335_REG(0x0b, 0x0cd)
#define WCD9335_CDC_RX7_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x0ce)
#define WCD9335_CDC_RX7_RX_PATH_CFG1		WCD9335_REG(0x0b, 0x0cf)
#define WCD9335_CDC_RX7_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x0d0)
#define WCD9335_CDC_RX7_RX_VOL_CTL		WCD9335_REG(0x0b, 0x0d1)
#define WCD9335_CDC_RX7_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x0d2)
#define WCD9335_CDC_RX7_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x0d3)
#define WCD9335_CDC_RX7_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x0d4)
#define WCD9335_CDC_RX8_RX_PATH_CTL		WCD9335_REG(0x0b, 0x0e1)
#define WCD9335_CDC_RX8_RX_PATH_CFG0		WCD9335_REG(0x0b, 0x0e2)
#define WCD9335_CDC_RX8_RX_PATH_CFG1		WCD9335_REG(0x0b, 0x0e3)
#define WCD9335_CDC_RX8_RX_PATH_CFG2		WCD9335_REG(0x0b, 0x0e4)
#define WCD9335_CDC_RX8_RX_VOL_CTL		WCD9335_REG(0x0b, 0x0e5)
#define WCD9335_CDC_RX8_RX_PATH_MIX_CTL		WCD9335_REG(0x0b, 0x0e6)
#define WCD9335_CDC_RX8_RX_PATH_MIX_CFG		WCD9335_REG(0x0b, 0x0e7)
#define WCD9335_CDC_RX8_RX_VOL_MIX_CTL		WCD9335_REG(0x0b, 0x0e8)

/* Page-12 Registers */
#define WCD9335_PAGE12_PAGE_REGISTER		WCD9335_REG(0x0c, 0x000)
#define WCD9335_CDC_CLSH_K2_MSB			WCD9335_REG(0x0c, 0x00a)
#define WCD9335_CDC_CLSH_K2_LSB			WCD9335_REG(0x0c, 0x00b)
#define WCD9335_CDC_BOOST0_BOOST_CTL		WCD9335_REG(0x0c, 0x01a)
#define WCD9335_CDC_BOOST0_BOOST_CFG1		WCD9335_REG(0x0c, 0x01b)
#define WCD9335_CDC_BOOST0_BOOST_CFG2		WCD9335_REG(0x0c, 0x01c)
#define WCD9335_CDC_BOOST1_BOOST_CTL		WCD9335_REG(0x0c, 0x022)
#define WCD9335_CDC_BOOST1_BOOST_CFG1		WCD9335_REG(0x0c, 0x023)
#define WCD9335_CDC_BOOST1_BOOST_CFG2		WCD9335_REG(0x0c, 0x024)

/* Page-13 Registers */
#define WCD9335_PAGE13_PAGE_REGISTER		WCD9335_REG(0x0d, 0x000)
#define WCD9335_CDC_RX_INP_MUX_RX_INT0_CFG0	WCD9335_REG(0x0d, 0x001)
#define WCD9335_CDC_RX_INP_MUX_RX_INT_CFG0(i) WCD9335_REG(0xd, (0x1 + i * 0x2))
#define WCD9335_CDC_RX_INP_MUX_RX_INT0_CFG1	WCD9335_REG(0xd, 0x002)
#define WCD9335_CDC_RX_INP_MUX_RX_INT_SEL_MASK	GENMASK(3, 0)
#define WCD9335_CDC_RX_INP_MUX_RX_INT_CFG1(i) WCD9335_REG(0xd, (0x2 + i * 0x2))

#define WCD9335_CDC_RX_INP_MUX_RX_INT1_CFG0	WCD9335_REG(0x0d, 0x003)
#define WCD9335_CDC_RX_INP_MUX_RX_INT1_CFG1	WCD9335_REG(0x0d, 0x004)
#define WCD9335_CDC_RX_INP_MUX_RX_INT2_CFG0	WCD9335_REG(0x0d, 0x005)
#define WCD9335_CDC_RX_INP_MUX_RX_INT2_CFG1	WCD9335_REG(0x0d, 0x006)
#define WCD9335_CDC_RX_INP_MUX_RX_INT3_CFG0	WCD9335_REG(0x0d, 0x007)
#define WCD9335_CDC_RX_INP_MUX_RX_INT3_CFG1	WCD9335_REG(0x0d, 0x008)
#define WCD9335_CDC_RX_INP_MUX_RX_INT4_CFG0	WCD9335_REG(0x0d, 0x009)
#define WCD9335_CDC_RX_INP_MUX_RX_INT4_CFG1	WCD9335_REG(0x0d, 0x00a)
#define WCD9335_CDC_RX_INP_MUX_RX_INT5_CFG0	WCD9335_REG(0x0d, 0x00b)
#define WCD9335_CDC_RX_INP_MUX_RX_INT5_CFG1	WCD9335_REG(0x0d, 0x00c)
#define WCD9335_CDC_RX_INP_MUX_RX_INT6_CFG0	WCD9335_REG(0x0d, 0x00d)
#define WCD9335_CDC_RX_INP_MUX_RX_INT6_CFG1	WCD9335_REG(0x0d, 0x00e)
#define WCD9335_CDC_RX_INP_MUX_RX_INT7_CFG0	WCD9335_REG(0x0d, 0x00f)
#define WCD9335_CDC_RX_INP_MUX_RX_INT7_CFG1	WCD9335_REG(0x0d, 0x010)
#define WCD9335_CDC_RX_INP_MUX_RX_INT8_CFG0	WCD9335_REG(0x0d, 0x011)
#define WCD9335_CDC_RX_INP_MUX_RX_INT8_CFG1	WCD9335_REG(0x0d, 0x012)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX0_CFG0	WCD9335_REG(0x0d, 0x01d)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX0_CFG1	WCD9335_REG(0x0d, 0x01e)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX1_CFG0	WCD9335_REG(0x0d, 0x01f)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX1_CFG1	WCD9335_REG(0x0d, 0x020)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX2_CFG0	WCD9335_REG(0x0d, 0x021)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX2_CFG1	WCD9335_REG(0x0d, 0x022)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX3_CFG0	WCD9335_REG(0x0d, 0x023)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX3_CFG1	WCD9335_REG(0x0d, 0x024)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX4_CFG0	WCD9335_REG(0x0d, 0x025)
#define WCD9335_CDC_TX_INP_MUX_SEL_AMIC	0x1
#define WCD9335_CDC_TX_INP_MUX_SEL_DMIC	0
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX5_CFG0	WCD9335_REG(0x0d, 0x026)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX6_CFG0	WCD9335_REG(0x0d, 0x027)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX7_CFG0	WCD9335_REG(0x0d, 0x028)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX8_CFG0	WCD9335_REG(0x0d, 0x029)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX10_CFG0	WCD9335_REG(0x0d, 0x02b)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX11_CFG0	WCD9335_REG(0x0d, 0x02c)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX12_CFG0	WCD9335_REG(0x0d, 0x02d)
#define WCD9335_CDC_TX_INP_MUX_ADC_MUX13_CFG0	WCD9335_REG(0x0d, 0x02e)
#define WCD9335_CDC_IF_ROUTER_TX_MUX_CFG0	WCD9335_REG(0x0d, 0x03a)
#define WCD9335_CDC_IF_ROUTER_TX_MUX_CFG1	WCD9335_REG(0x0d, 0x03b)
#define WCD9335_CDC_IF_ROUTER_TX_MUX_CFG2	WCD9335_REG(0x0d, 0x03c)
#define WCD9335_CDC_IF_ROUTER_TX_MUX_CFG3	WCD9335_REG(0x0d, 0x03d)
#define WCD9335_CDC_CLK_RST_CTRL_MCLK_CONTROL	WCD9335_REG(0x0d, 0x041)
#define WCD9335_CDC_CLK_RST_CTRL_MCLK_EN_MASK	BIT(0)
#define WCD9335_CDC_CLK_RST_CTRL_MCLK_ENABLE	BIT(0)
#define WCD9335_CDC_CLK_RST_CTRL_MCLK_DISABLE	0
#define WCD9335_CDC_CLK_RST_CTRL_FS_CNT_CONTROL	WCD9335_REG(0x0d, 0x042)
#define WCD9335_CDC_CLK_RST_CTRL_FS_CNT_EN_MASK	BIT(0)
#define WCD9335_CDC_CLK_RST_CTRL_FS_CNT_ENABLE	BIT(0)
#define WCD9335_CDC_CLK_RST_CTRL_FS_CNT_DISABLE	0
#define WCD9335_CDC_TOP_TOP_CFG1	WCD9335_REG(0x0d, 0x082)
#define WCD9335_MAX_REGISTER	0xffff
#define WCD9335_SEL_REGISTER	0x800

/* SLIMBUS Slave Registers */
#define WCD9335_SLIM_PGD_PORT_INT_EN0	WCD9335_REG(0, 0x30)
#define WCD9335_SLIM_PGD_PORT_INT_STATUS_RX_0	WCD9335_REG(0, 0x34)
#define WCD9335_SLIM_PGD_PORT_INT_STATUS_RX_1	WCD9335_REG(0, 0x35)
#define WCD9335_SLIM_PGD_PORT_INT_STATUS_TX_0	WCD9335_REG(0, 0x36)
#define WCD9335_SLIM_PGD_PORT_INT_STATUS_TX_1	WCD9335_REG(0, 0x37)
#define WCD9335_SLIM_PGD_PORT_INT_CLR_RX_0	WCD9335_REG(0, 0x38)
#define WCD9335_SLIM_PGD_PORT_INT_CLR_RX_1	WCD9335_REG(0, 0x39)
#define WCD9335_SLIM_PGD_PORT_INT_CLR_TX_0	WCD9335_REG(0, 0x3A)
#define WCD9335_SLIM_PGD_PORT_INT_CLR_TX_1	WCD9335_REG(0, 0x3B)
#define WCD9335_SLIM_PGD_PORT_INT_RX_SOURCE0	WCD9335_REG(0, 0x60)
#define WCD9335_SLIM_PGD_PORT_INT_TX_SOURCE0	WCD9335_REG(0, 0x70)
#define WCD9335_SLIM_PGD_RX_PORT_CFG(p)	WCD9335_REG(0, (0x30 + p))
#define WCD9335_SLIM_PGD_PORT_CFG(p)	WCD9335_REG(0, (0x40 + p))
#define WCD9335_SLIM_PGD_TX_PORT_CFG(p)	WCD9335_REG(0, (0x50 + p))
#define WCD9335_SLIM_PGD_PORT_INT_SRC(p)	WCD9335_REG(0, (0x60 + p))
#define WCD9335_SLIM_PGD_PORT_INT_STATUS(p)	WCD9335_REG(0, (0x80 + p))
#define WCD9335_SLIM_PGD_TX_PORT_MULTI_CHNL_0(p) WCD9335_REG(0, (0x100 + 4 * p))
/* ports range from 10-16 */
#define WCD9335_SLIM_PGD_TX_PORT_MULTI_CHNL_1(p) WCD9335_REG(0, (0x101 + 4 * p))
#define WCD9335_SLIM_PGD_RX_PORT_MULTI_CHNL_0(p) WCD9335_REG(0, (0x140 + 4 * p))

#define	WCD9335_IRQ_SLIMBUS			0
#define	WCD9335_IRQ_MBHC_SW_DET			8
#define	WCD9335_IRQ_MBHC_ELECT_INS_REM_DET	9
#define	WCD9335_IRQ_MBHC_BUTTON_PRESS_DET	10
#define	WCD9335_IRQ_MBHC_BUTTON_RELEASE_DET	11
#define	WCD9335_IRQ_MBHC_ELECT_INS_REM_LEG_DET	12

#define SLIM_MANF_ID_QCOM			0x217
#define SLIM_PROD_CODE_WCD9335			0x1a0

#define WCD9335_VERSION_2_0     2
#define WCD9335_MAX_SUPPLY	5

#endif /* __WCD9335_H__ */
