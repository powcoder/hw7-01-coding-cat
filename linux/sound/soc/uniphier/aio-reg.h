https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Socionext UniPhier AIO ALSA driver.
 *
 * Copyright (c) 2016-2018 Socionext Inc.
 */

#ifndef SND_UNIPHIER_AIO_REG_H__
#define SND_UNIPHIER_AIO_REG_H__

#include <linux/bitops.h>

/* soc-glue */
#define SG_AOUTEN                       0x1c04

/* SW view */
#define A2CHNMAPCTR0(n)                 (0x00000 + 0x40 * (n))
#define A2RBNMAPCTR0(n)                 (0x01000 + 0x40 * (n))
#define A2IPORTNMAPCTR0(n)              (0x02000 + 0x40 * (n))
#define A2IPORTNMAPCTR1(n)              (0x02004 + 0x40 * (n))
#define A2IIFNMAPCTR0(n)                (0x03000 + 0x40 * (n))
#define A2OPORTNMAPCTR0(n)              (0x04000 + 0x40 * (n))
#define A2OPORTNMAPCTR1(n)              (0x04004 + 0x40 * (n))
#define A2OPORTNMAPCTR2(n)              (0x04008 + 0x40 * (n))
#define A2OIFNMAPCTR0(n)                (0x05000 + 0x40 * (n))
#define A2ATNMAPCTR0(n)                 (0x06000 + 0x40 * (n))

#define MAPCTR0_EN                      0x80000000

/* CTL */
#define A2APLLCTR0                      0x07000
#define   A2APLLCTR0_APLLXPOW_MASK        GENMASK(3, 0)
#define   A2APLLCTR0_APLLXPOW_PWOFF       (0x0 << 0)
#define   A2APLLCTR0_APLLXPOW_PWON        (0xf << 0)
#define A2APLLCTR1                      0x07004
#define   A2APLLCTR1_APLLX_MASK           0x00010101
#define   A2APLLCTR1_APLLX_36MHZ          0x00000000
#define   A2APLLCTR1_APLLX_33MHZ          0x00000001
#define A2EXMCLKSEL0                    0x07030
#define   A2EXMCLKSEL0_EXMCLK_MASK        GENMASK(2, 0)
#define   A2EXMCLKSEL0_EXMCLK_OUTPUT      (0x0 << 0)
#define   A2EXMCLKSEL0_EXMCLK_INPUT       (0x7 << 0)
#define A2SSIFSW                        0x07050
#define A2CH22_2CTR                     0x07054
#define A2AIOINPUTSEL                   0x070e0
#define   A2AIOINPUTSEL_RXSEL_PCMI1_MASK      GENMASK(2, 0)
#define   A2AIOINPUTSEL_RXSEL_PCMI1_HDMIRX1   (0x2 << 0)
#define   A2AIOINPUTSEL_RXSEL_PCMI2_MASK      GENMASK(6, 4)
#define   A2AIOINPUTSEL_RXSEL_PCMI2_SIF       (0x7 << 4)
#define   A2AIOINPUTSEL_RXSEL_PCMI3_MASK      GENMASK(10, 8)
#define   A2AIOINPUTSEL_RXSEL_PCMI3_EVEA      (0x1 << 8)
#define   A2AIOINPUTSEL_RXSEL_IECI1_MASK      GENMASK(14, 12)
#define   A2AIOINPUTSEL_RXSEL_IECI1_HDMIRX1   (0x2 << 12)
#define   A2AIOINPUTSEL_RXSEL_MASK        (A2AIOINPUTSEL_RXSEL_PCMI1_MASK | \
					   A2AIOINPUTSEL_RXSEL_PCMI2_MASK | \
					   A2AIOINPUTSEL_RXSEL_PCMI3_MASK | \
					   A2AIOINPUTSEL_RXSEL_IECI1_HDMIRX1)

/* INTC */
#define INTCHIM(m)                       (0x9028 + 0x80 * (m))
#define INTRBIM(m)                       (0x9030 + 0x80 * (m))
#define INTCHID(m)                       (0xa028 + 0x80 * (m))
#define INTRBID(m)                       (0xa030 + 0x80 * (m))

/* AIN(PCMINN) */
#define IPORTMXCTR1(n)                   (0x22000 + 0x400 * (n))
#define   IPORTMXCTR1_LRSEL_MASK           GENMASK(11, 10)
#define   IPORTMXCTR1_LRSEL_RIGHT          (0x0 << 10)
#define   IPORTMXCTR1_LRSEL_LEFT           (0x1 << 10)
#define   IPORTMXCTR1_LRSEL_I2S            (0x2 << 10)
#define   IPORTMXCTR1_OUTBITSEL_MASK       (0x800003U << 8)
#define   IPORTMXCTR1_OUTBITSEL_32         (0x800000U << 8)
#define   IPORTMXCTR1_OUTBITSEL_24         (0x000000U << 8)
#define   IPORTMXCTR1_OUTBITSEL_20         (0x000001U << 8)
#define   IPORTMXCTR1_OUTBITSEL_16         (0x000002U << 8)
#define   IPORTMXCTR1_CHSEL_MASK           GENMASK(6, 4)
#define   IPORTMXCTR1_CHSEL_ALL            (0x0 << 4)
#define   IPORTMXCTR1_CHSEL_D0_D2          (0x1 << 4)
#define   IPORTMXCTR1_CHSEL_D0             (0x2 << 4)
#define   IPORTMXCTR1_CHSEL_D1             (0x3 << 4)
#define   IPORTMXCTR1_CHSEL_D2             (0x4 << 4)
#define   IPORTMXCTR1_CHSEL_DMIX           (0x5 << 4)
#define   IPORTMXCTR1_FSSEL_MASK           GENMASK(3, 0)
#define   IPORTMXCTR1_FSSEL_48             (0x0 << 0)
#define   IPORTMXCTR1_FSSEL_96             (0x1 << 0)
#define   IPORTMXCTR1_FSSEL_192            (0x2 << 0)
#define   IPORTMXCTR1_FSSEL_32             (0x3 << 0)
#define   IPORTMXCTR1_FSSEL_44_1           (0x4 << 0)
#define   IPORTMXCTR1_FSSEL_88_2           (0x5 << 0)
#define   IPORTMXCTR1_FSSEL_176_4          (0x6 << 0)
#define   IPORTMXCTR1_FSSEL_16             (0x8 << 0)
#define   IPORTMXCTR1_FSSEL_22_05          (0x9 << 0)
#define   IPORTMXCTR1_FSSEL_24             (0xa << 0)
#define   IPORTMXCTR1_FSSEL_8              (0xb << 0)
#define   IPORTMXCTR1_FSSEL_11_025         (0xc << 0)
#define   IPORTMXCTR1_FSSEL_12             (0xd << 0)
#define IPORTMXCTR2(n)                   (0x22004 + 0x400 * (n))
#define   IPORTMXCTR2_ACLKSEL_MASK         GENMASK(19, 16)
#define   IPORTMXCTR2_ACLKSEL_A1           (0x0 << 16)
#define   IPORTMXCTR2_ACLKSEL_F1           (0x1 << 16)
#define   IPORTMXCTR2_ACLKSEL_A2           (0x2 << 16)
#define   IPORTMXCTR2_ACLKSEL_F2           (0x3 << 16)
#define   IPORTMXCTR2_ACLKSEL_A2PLL        (0x4 << 16)
#define   IPORTMXCTR2_ACLKSEL_RX1          (0x5 << 16)
#define   IPORTMXCTR2_ACLKSEL_RX2          (0x6 << 16)
#define   IPORTMXCTR2_MSSEL_MASK           BIT(15)
#define   IPORTMXCTR2_MSSEL_SLAVE          (0x0 << 15)
#define   IPORTMXCTR2_MSSEL_MASTER         (0x1 << 15)
#define   IPORTMXCTR2_EXTLSIFSSEL_MASK     BIT(14)
#define   IPORTMXCTR2_EXTLSIFSSEL_36       (0x0 << 14)
#define   IPORTMXCTR2_EXTLSIFSSEL_24       (0x1 << 14)
#define   IPORTMXCTR2_DACCKSEL_MASK        GENMASK(9, 8)
#define   IPORTMXCTR2_DACCKSEL_1_2         (0x0 << 8)
#define   IPORTMXCTR2_DACCKSEL_1_3         (0x1 << 8)
#define   IPORTMXCTR2_DACCKSEL_1_1         (0x2 << 8)
#define   IPORTMXCTR2_DACCKSEL_2_3         (0x3 << 8)
#define   IPORTMXCTR2_REQEN_MASK           BIT(0)
#define   IPORTMXCTR2_REQEN_DISABLE        (0x0 << 0)
#define   IPORTMXCTR2_REQEN_ENABLE         (0x1 << 0)
#define IPORTMXCNTCTR(n)                 (0x22010 + 0x400 * (n))
#define IPORTMXCOUNTER(n)                (0x22014 + 0x400 * (n))
#define IPORTMXCNTMONI(n)                (0x22018 + 0x400 * (n))
#define IPORTMXACLKSEL0EX(n)             (0x22020 + 0x400 * (n))
#define   IPORTMXACLKSEL0EX_ACLKSEL0EX_MASK        GENMASK(3, 0)
#define   IPORTMXACLKSEL0EX_ACLKSEL0EX_INTERNAL    (0x0 << 0)
#define   IPORTMXACLKSEL0EX_ACLKSEL0EX_EXTERNAL    (0xf << 0)
#define IPORTMXEXNOE(n)                  (0x22070 + 0x400 * (n))
#define   IPORTMXEXNOE_PCMINOE_MASK        BIT(0)
#define   IPORTMXEXNOE_PCMINOE_OUTPUT      (0x0 << 0)
#define   IPORTMXEXNOE_PCMINOE_INPUT       (0x1 << 0)
#define IPORTMXMASK(n)                   (0x22078 + 0x400 * (n))
#define   IPORTMXMASK_IUXCKMSK_MASK        GENMASK(18, 16)
#define   IPORTMXMASK_IUXCKMSK_ON          (0x0 << 16)
#define   IPORTMXMASK_IUXCKMSK_OFF         (0x7 << 16)
#define   IPORTMXMASK_XCKMSK_MASK          GENMASK(2, 0)
#define   IPORTMXMASK_XCKMSK_ON            (0x0 << 0)
#define   IPORTMXMASK_XCKMSK_OFF           (0x7 << 0)
#define IPORTMXRSTCTR(n)                 (0x2207c + 0x400 * (n))
#define   IPORTMXRSTCTR_RSTPI_MASK         BIT(7)
#define   IPORTMXRSTCTR_RSTPI_RELEASE      (0x0 << 7)
#define   IPORTMXRSTCTR_RSTPI_RESET        (0x1 << 7)

/* AIN(PBinMX) */
#define PBINMXCTR(n)                     (0x20200 + 0x40 * (n))
#define   PBINMXCTR_NCONNECT_MASK          BIT(15)
#define   PBINMXCTR_NCONNECT_CONNECT       (0x0 << 15)
#define   PBINMXCTR_NCONNECT_DISCONNECT    (0x1 << 15)
#define   PBINMXCTR_INOUTSEL_MASK          BIT(14)
#define   PBINMXCTR_INOUTSEL_IN            (0x0 << 14)
#define   PBINMXCTR_INOUTSEL_OUT           (0x1 << 14)
#define   PBINMXCTR_PBINSEL_SHIFT          (8)
#define   PBINMXCTR_ENDIAN_MASK            GENMASK(5, 4)
#define   PBINMXCTR_ENDIAN_3210            (0x0 << 4)
#define   PBINMXCTR_ENDIAN_0123            (0x1 << 4)
#define   PBINMXCTR_ENDIAN_1032            (0x2 << 4)
#define   PBINMXCTR_ENDIAN_2301            (0x3 << 4)
#define   PBINMXCTR_MEMFMT_MASK            GENMASK(3, 0)
#define   PBINMXCTR_MEMFMT_D0              (0x0 << 0)
#define   PBINMXCTR_MEMFMT_5_1CH_DMIX      (0x1 << 0)
#define   PBINMXCTR_MEMFMT_6CH             (0x2 << 0)
#define   PBINMXCTR_MEMFMT_4CH             (0x3 << 0)
#define   PBINMXCTR_MEMFMT_DMIX            (0x4 << 0)
#define   PBINMXCTR_MEMFMT_1CH             (0x5 << 0)
#define   PBINMXCTR_MEMFMT_16LR            (0x6 << 0)
#define   PBINMXCTR_MEMFMT_7_1CH           (0x7 << 0)
#define   PBINMXCTR_MEMFMT_7_1CH_DMIX      (0x8 << 0)
#define   PBINMXCTR_MEMFMT_STREAM          (0xf << 0)
#define PBINMXPAUSECTR0(n)               (0x20204 + 0x40 * (n))
#define PBINMXPAUSECTR1(n)               (0x20208 + 0x40 * (n))

/* AOUT */
#define AOUTFADECTR0                     0x40020
#define AOUTENCTR0                       0x40040
#define AOUTENCTR1                       0x40044
#define AOUTENCTR2                       0x40048
#define AOUTRSTCTR0                      0x40060
#define AOUTRSTCTR1                      0x40064
#define AOUTRSTCTR2                      0x40068
#define AOUTSRCRSTCTR0                   0x400c0
#define AOUTSRCRSTCTR1                   0x400c4
#define AOUTSRCRSTCTR2                   0x400c8

/* AOUT PCMOUT has 5 slots, slot0-3: D0-3, slot4: DMIX */
#define OPORT_SLOT_MAX                     5

/* AOUT(PCMOUTN) */
#define OPORTMXCTR1(n)                   (0x42000 + 0x400 * (n))
#define   OPORTMXCTR1_I2SLRSEL_MASK        (0x11 << 10)
#define   OPORTMXCTR1_I2SLRSEL_RIGHT       (0x00 << 10)
#define   OPORTMXCTR1_I2SLRSEL_LEFT        (0x01 << 10)
#define   OPORTMXCTR1_I2SLRSEL_I2S         (0x11 << 10)
#define   OPORTMXCTR1_OUTBITSEL_MASK       (0x800003U << 8)
#define   OPORTMXCTR1_OUTBITSEL_32         (0x800000U << 8)
#define   OPORTMXCTR1_OUTBITSEL_24         (0x000000U << 8)
#define   OPORTMXCTR1_OUTBITSEL_20         (0x000001U << 8)
#define   OPORTMXCTR1_OUTBITSEL_16         (0x000002U << 8)
#define   OPORTMXCTR1_FSSEL_MASK           GENMASK(3, 0)
#define   OPORTMXCTR1_FSSEL_48             (0x0 << 0)
#define   OPORTMXCTR1_FSSEL_96             (0x1 << 0)
#define   OPORTMXCTR1_FSSEL_192            (0x2 << 0)
#define   OPORTMXCTR1_FSSEL_32             (0x3 << 0)
#define   OPORTMXCTR1_FSSEL_44_1           (0x4 << 0)
#define   OPORTMXCTR1_FSSEL_88_2           (0x5 << 0)
#define   OPORTMXCTR1_FSSEL_176_4          (0x6 << 0)
#define   OPORTMXCTR1_FSSEL_16             (0x8 << 0)
#define   OPORTMXCTR1_FSSEL_22_05          (0x9 << 0)
#define   OPORTMXCTR1_FSSEL_24             (0xa << 0)
#define   OPORTMXCTR1_FSSEL_8              (0xb << 0)
#define   OPORTMXCTR1_FSSEL_11_025         (0xc << 0)
#define   OPORTMXCTR1_FSSEL_12             (0xd << 0)
#define OPORTMXCTR2(n)                   (0x42004 + 0x400 * (n))
#define   OPORTMXCTR2_ACLKSEL_MASK         GENMASK(19, 16)
#define   OPORTMXCTR2_ACLKSEL_A1           (0x0 << 16)
#define   OPORTMXCTR2_ACLKSEL_F1           (0x1 << 16)
#define   OPORTMXCTR2_ACLKSEL_A2           (0x2 << 16)
#define   OPORTMXCTR2_ACLKSEL_F2           (0x3 << 16)
#define   OPORTMXCTR2_ACLKSEL_A2PLL        (0x4 << 16)
#define   OPORTMXCTR2_ACLKSEL_RX1          (0x5 << 16)
#define   OPORTMXCTR2_ACLKSEL_RX2          (0x6 << 16)
#define   OPORTMXCTR2_MSSEL_MASK           BIT(15)
#define   OPORTMXCTR2_MSSEL_SLAVE          (0x0 << 15)
#define   OPORTMXCTR2_MSSEL_MASTER         (0x1 << 15)
#define   OPORTMXCTR2_EXTLSIFSSEL_MASK     BIT(14)
#define   OPORTMXCTR2_EXTLSIFSSEL_36       (0x0 << 14)
#define   OPORTMXCTR2_EXTLSIFSSEL_24       (0x1 << 14)
#define   OPORTMXCTR2_DACCKSEL_MASK        GENMASK(9, 8)
#define   OPORTMXCTR2_DACCKSEL_1_2         (0x0 << 8)
#define   OPORTMXCTR2_DACCKSEL_1_3         (0x1 << 8)
#define   OPORTMXCTR2_DACCKSEL_1_1         (0x2 << 8)
#define   OPORTMXCTR2_DACCKSEL_2_3         (0x3 << 8)
#define OPORTMXCTR3(n)                   (0x42008 + 0x400 * (n))
#define   OPORTMXCTR3_IECTHUR_MASK         BIT(19)
#define   OPORTMXCTR3_IECTHUR_IECOUT       (0x0 << 19)
#define   OPORTMXCTR3_IECTHUR_IECIN        (0x1 << 19)
#define   OPORTMXCTR3_SRCSEL_MASK          GENMASK(18, 16)
#define   OPORTMXCTR3_SRCSEL_PCM           (0x0 << 16)
#define   OPORTMXCTR3_SRCSEL_STREAM        (0x1 << 16)
#define   OPORTMXCTR3_SRCSEL_CDDTS         (0x2 << 16)
#define   OPORTMXCTR3_VALID_MASK           BIT(12)
#define   OPORTMXCTR3_VALID_PCM            (0x0 << 12)
#define   OPORTMXCTR3_VALID_STREAM         (0x1 << 12)
#define   OPORTMXCTR3_PMSEL_MASK           BIT(3)
#define   OPORTMXCTR3_PMSEL_MUTE           (0x0 << 3)
#define   OPORTMXCTR3_PMSEL_PAUSE          (0x1 << 3)
#define   OPORTMXCTR3_PMSW_MASK            BIT(2)
#define   OPORTMXCTR3_PMSW_MUTE_OFF        (0x0 << 2)
#define   OPORTMXCTR3_PMSW_MUTE_ON         (0x1 << 2)
#define OPORTMXSRC1CTR(n)                (0x4200c + 0x400 * (n))
#define   OPORTMXSRC1CTR_FSIIPNUM_SHIFT    (24)
#define   OPORTMXSRC1CTR_THMODE_MASK       BIT(23)
#define   OPORTMXSRC1CTR_THMODE_SRC        (0x0 << 23)
#define   OPORTMXSRC1CTR_THMODE_BYPASS     (0x1 << 23)
#define   OPORTMXSRC1CTR_LOCK_MASK         BIT(16)
#define   OPORTMXSRC1CTR_LOCK_UNLOCK       (0x0 << 16)
#define   OPORTMXSRC1CTR_LOCK_LOCK         (0x1 << 16)
#define   OPORTMXSRC1CTR_SRCPATH_MASK      BIT(15)
#define   OPORTMXSRC1CTR_SRCPATH_BYPASS    (0x0 << 15)
#define   OPORTMXSRC1CTR_SRCPATH_CALC      (0x1 << 15)
#define   OPORTMXSRC1CTR_SYNC_MASK         BIT(14)
#define   OPORTMXSRC1CTR_SYNC_ASYNC        (0x0 << 14)
#define   OPORTMXSRC1CTR_SYNC_SYNC         (0x1 << 14)
#define   OPORTMXSRC1CTR_FSOCK_MASK        GENMASK(11, 10)
#define   OPORTMXSRC1CTR_FSOCK_44_1        (0x0 << 10)
#define   OPORTMXSRC1CTR_FSOCK_48          (0x1 << 10)
#define   OPORTMXSRC1CTR_FSOCK_32          (0x2 << 10)
#define   OPORTMXSRC1CTR_FSICK_MASK        GENMASK(9, 8)
#define   OPORTMXSRC1CTR_FSICK_44_1        (0x0 << 8)
#define   OPORTMXSRC1CTR_FSICK_48          (0x1 << 8)
#define   OPORTMXSRC1CTR_FSICK_32          (0x2 << 8)
#define   OPORTMXSRC1CTR_FSIIPSEL_MASK     GENMASK(5, 4)
#define   OPORTMXSRC1CTR_FSIIPSEL_INNER    (0x0 << 4)
#define   OPORTMXSRC1CTR_FSIIPSEL_OUTER    (0x1 << 4)
#define   OPORTMXSRC1CTR_FSISEL_MASK       GENMASK(3, 0)
#define   OPORTMXSRC1CTR_FSISEL_ACLK       (0x0 << 0)
#define   OPORTMXSRC1CTR_FSISEL_DD         (0x1 << 0)
#define OPORTMXDSDMUTEDAT(n)             (0x42020 + 0x400 * (n))
#define OPORTMXDXDFREQMODE(n)            (0x42024 + 0x400 * (n))
#define OPORTMXDSDSEL(n)                 (0x42028 + 0x400 * (n))
#define OPORTMXDSDPORT(n)                (0x4202c + 0x400 * (n))
#define OPORTMXACLKSEL0EX(n)             (0x42030 + 0x400 * (n))
#define OPORTMXPATH(n)                   (0x42040 + 0x400 * (n))
#define OPORTMXSYNC(n)                   (0x42044 + 0x400 * (n))
#define OPORTMXREPET(n)                  (0x42050 + 0x400 * (n))
#define   OPORTMXREPET_STRLENGTH_AC3       SBF_(IEC61937_FRM_STR_AC3, 16)
#define   OPORTMXREPET_STRLENGTH_MPA       SBF_(IEC61937_FRM_STR_MPA, 16)
#define   OPORTMXREPET_STRLENGTH_MP3       SBF_(IEC61937_FRM_STR_MP3, 16)
#define   OPORTMXREPET_STRLENGTH_DTS1      SBF_(IEC61937_FRM_STR_DTS1, 16)
#define   OPORTMXREPET_STRLENGTH_DTS2      SBF_(IEC61937_FRM_STR_DTS2, 16)
#define   OPORTMXREPET_STRLENGTH_DTS3      SBF_(IEC61937_FRM_STR_DTS3, 16)
#define   OPORTMXREPET_STRLENGTH_AAC       SBF_(IEC61937_FRM_STR_AAC, 16)
#define   OPORTMXREPET_PMLENGTH_AC3        SBF_(IEC61937_FRM_PAU_AC3, 0)
#define   OPORTMXREPET_PMLENGTH_MPA        SBF_(IEC61937_FRM_PAU_MPA, 0)
#define   OPORTMXREPET_PMLENGTH_MP3        SBF_(IEC61937_FRM_PAU_MP3, 0)
#define   OPORTMXREPET_PMLENGTH_DTS1       SBF_(IEC61937_FRM_PAU_DTS1, 0)
#define   OPORTMXREPET_PMLENGTH_DTS2       SBF_(IEC61937_FRM_PAU_DTS2, 0)
#define   OPORTMXREPET_PMLENGTH_DTS3       SBF_(IEC61937_FRM_PAU_DTS3, 0)
#define   OPORTMXREPET_PMLENGTH_AAC        SBF_(IEC61937_FRM_PAU_AAC, 0)
#define OPORTMXPAUDAT(n)                 (0x42054 + 0x400 * (n))
#define   OPORTMXPAUDAT_PAUSEPC_CMN        (IEC61937_PC_PAUSE << 16)
#define   OPORTMXPAUDAT_PAUSEPD_AC3        (IEC61937_FRM_PAU_AC3 * 4)
#define   OPORTMXPAUDAT_PAUSEPD_MPA        (IEC61937_FRM_PAU_MPA * 4)
#define   OPORTMXPAUDAT_PAUSEPD_MP3        (IEC61937_FRM_PAU_MP3 * 4)
#define   OPORTMXPAUDAT_PAUSEPD_DTS1       (IEC61937_FRM_PAU_DTS1 * 4)
#define   OPORTMXPAUDAT_PAUSEPD_DTS2       (IEC61937_FRM_PAU_DTS2 * 4)
#define   OPORTMXPAUDAT_PAUSEPD_DTS3       (IEC61937_FRM_PAU_DTS3 * 4)
#define   OPORTMXPAUDAT_PAUSEPD_AAC        (IEC61937_FRM_PAU_AAC * 4)
#define OPORTMXRATE_I(n)                 (0x420e4 + 0x400 * (n))
#define   OPORTMXRATE_I_EQU_MASK           BIT(31)
#define   OPORTMXRATE_I_EQU_NOTEQUAL       (0x0 << 31)
#define   OPORTMXRATE_I_EQU_EQUAL          (0x1 << 31)
#define   OPORTMXRATE_I_SRCBPMD_MASK       BIT(29)
#define   OPORTMXRATE_I_SRCBPMD_BYPASS     (0x0 << 29)
#define   OPORTMXRATE_I_SRCBPMD_SRC        (0x1 << 29)
#define   OPORTMXRATE_I_LRCKSTP_MASK       BIT(24)
#define   OPORTMXRATE_I_LRCKSTP_START      (0x0 << 24)
#define   OPORTMXRATE_I_LRCKSTP_STOP       (0x1 << 24)
#define   OPORTMXRATE_I_ACLKSRC_MASK       GENMASK(15, 12)
#define   OPORTMXRATE_I_ACLKSRC_APLL       (0x0 << 12)
#define   OPORTMXRATE_I_ACLKSRC_USB        (0x1 << 12)
#define   OPORTMXRATE_I_ACLKSRC_HSC        (0x3 << 12)
/* if OPORTMXRATE_I_ACLKSRC_APLL */
#define   OPORTMXRATE_I_ACLKSEL_MASK       GENMASK(11, 8)
#define   OPORTMXRATE_I_ACLKSEL_APLLA1     (0x0 << 8)
#define   OPORTMXRATE_I_ACLKSEL_APLLF1     (0x1 << 8)
#define   OPORTMXRATE_I_ACLKSEL_APLLA2     (0x2 << 8)
#define   OPORTMXRATE_I_ACLKSEL_APLLF2     (0x3 << 8)
#define   OPORTMXRATE_I_ACLKSEL_APLL       (0x4 << 8)
#define   OPORTMXRATE_I_ACLKSEL_HDMI1      (0x5 << 8)
#define   OPORTMXRATE_I_ACLKSEL_HDMI2      (0x6 << 8)
#define   OPORTMXRATE_I_ACLKSEL_AI1ADCCK   (0xc << 8)
#define   OPORTMXRATE_I_ACLKSEL_AI2ADCCK   (0xd << 8)
#define   OPORTMXRATE_I_ACLKSEL_AI3ADCCK   (0xe << 8)
#define   OPORTMXRATE_I_MCKSEL_MASK        GENMASK(7, 4)
#define   OPORTMXRATE_I_MCKSEL_36          (0x0 << 4)
#define   OPORTMXRATE_I_MCKSEL_33          (0x1 << 4)
#define   OPORTMXRATE_I_MCKSEL_HSC27       (0xb << 4)
#define   OPORTMXRATE_I_FSSEL_MASK         GENMASK(3, 0)
#define   OPORTMXRATE_I_FSSEL_48           (0x0 << 0)
#define   OPORTMXRATE_I_FSSEL_96           (0x1 << 0)
#define   OPORTMXRATE_I_FSSEL_192          (0x2 << 0)
#define   OPORTMXRATE_I_FSSEL_32           (0x3 << 0)
#define   OPORTMXRATE_I_FSSEL_44_1         (0x4 << 0)
#define   OPORTMXRATE_I_FSSEL_88_2         (0x5 << 0)
#define   OPORTMXRATE_I_FSSEL_176_4        (0x6 << 0)
#define   OPORTMXRATE_I_FSSEL_16           (0x8 << 0)
#define   OPORTMXRATE_I_FSSEL_22_05        (0x9 << 0)
#define   OPORTMXRATE_I_FSSEL_24           (0xa << 0)
#define   OPORTMXRATE_I_FSSEL_8            (0xb << 0)
#define   OPORTMXRATE_I_FSSEL_11_025       (0xc << 0)
#define   OPORTMXRATE_I_FSSEL_12           (0xd << 0)
#define OPORTMXEXNOE(n)                  (0x420f0 + 0x400 * (n))
#define OPORTMXMASK(n)                   (0x420f8 + 0x400 * (n))
#define   OPORTMXMASK_IUDXMSK_MASK         GENMASK(28, 24)
#define   OPORTMXMASK_IUDXMSK_ON           (0x00 << 24)
#define   OPORTMXMASK_IUDXMSK_OFF          (0x1f << 24)
#define   OPORTMXMASK_IUXCKMSK_MASK        GENMASK(18, 16)
#define   OPORTMXMASK_IUXCKMSK_ON          (0x0 << 16)
#define   OPORTMXMASK_IUXCKMSK_OFF         (0x7 << 16)
#define   OPORTMXMASK_DXMSK_MASK           GENMASK(12, 8)
#define   OPORTMXMASK_DXMSK_ON             (0x00 << 8)
#define   OPORTMXMASK_DXMSK_OFF            (0x1f << 8)
#define   OPORTMXMASK_XCKMSK_MASK          GENMASK(2, 0)
#define   OPORTMXMASK_XCKMSK_ON            (0x0 << 0)
#define   OPORTMXMASK_XCKMSK_OFF           (0x7 << 0)
#define OPORTMXDEBUG(n)                  (0x420fc + 0x400 * (n))
#define OPORTMXTYVOLPARA1(n, m)          (0x42100 + 0x400 * (n) + 0x20 * (m))
#define   OPORTMXTYVOLPARA1_SLOPEU_MASK    GENMASK(31, 16)
#define OPORTMXTYVOLPARA2(n, m)          (0x42104 + 0x400 * (n) + 0x20 * (m))
#define   OPORTMXTYVOLPARA2_FADE_MASK      GENMASK(17, 16)
#define   OPORTMXTYVOLPARA2_FADE_NOOP      (0x0 << 16)
#define   OPORTMXTYVOLPARA2_FADE_FADEOUT   (0x1 << 16)
#define   OPORTMXTYVOLPARA2_FADE_FADEIN    (0x2 << 16)
#define   OPORTMXTYVOLPARA2_TARGET_MASK    GENMASK(15, 0)
#define OPORTMXTYVOLGAINSTATUS(n, m)     (0x42108 + 0x400 * (n) + 0x20 * (m))
#define   OPORTMXTYVOLGAINSTATUS_CUR_MASK  GENMASK(15, 0)
#define OPORTMXTYSLOTCTR(n, m)           (0x42114 + 0x400 * (n) + 0x20 * (m))
#define   OPORTMXTYSLOTCTR_MODE            BIT(15)
#define   OPORTMXTYSLOTCTR_SLOTSEL_MASK    GENMASK(11, 8)
#define   OPORTMXTYSLOTCTR_SLOTSEL_SLOT0   (0x8 << 8)
#define   OPORTMXTYSLOTCTR_SLOTSEL_SLOT1   (0x9 << 8)
#define   OPORTMXTYSLOTCTR_SLOTSEL_SLOT2   (0xa << 8)
#define   OPORTMXTYSLOTCTR_SLOTSEL_SLOT3   (0xb << 8)
#define   OPORTMXTYSLOTCTR_SLOTSEL_SLOT4   (0xc << 8)
#define   OPORTMXT0SLOTCTR_MUTEOFF_MASK    BIT(1)
#define   OPORTMXT0SLOTCTR_MUTEOFF_MUTE    (0x0 << 1)
#define   OPORTMXT0SLOTCTR_MUTEOFF_UNMUTE  (0x1 << 1)
#define OPORTMXTYRSTCTR(n, m)            (0x4211c + 0x400 * (n) + 0x20 * (m))
#define   OPORTMXT0RSTCTR_RST_MASK         BIT(1)
#define   OPORTMXT0RSTCTR_RST_OFF          (0x0 << 1)
#define   OPORTMXT0RSTCTR_RST_ON           (0x1 << 1)

#define SBF_(frame, shift)    (((frame) * 2 - 1) << shift)

/* AOUT(PBoutMX) */
#define PBOUTMXCTR0(n)                   (0x40200 + 0x40 * (n))
#define   PBOUTMXCTR0_ENDIAN_MASK         GENMASK(5, 4)
#define   PBOUTMXCTR0_ENDIAN_3210         (0x0 << 4)
#define   PBOUTMXCTR0_ENDIAN_0123         (0x1 << 4)
#define   PBOUTMXCTR0_ENDIAN_1032         (0x2 << 4)
#define   PBOUTMXCTR0_ENDIAN_2301         (0x3 << 4)
#define   PBOUTMXCTR0_MEMFMT_MASK         GENMASK(3, 0)
#define   PBOUTMXCTR0_MEMFMT_10CH         (0x0 << 0)
#define   PBOUTMXCTR0_MEMFMT_8CH          (0x1 << 0)
#define   PBOUTMXCTR0_MEMFMT_6CH          (0x2 << 0)
#define   PBOUTMXCTR0_MEMFMT_4CH          (0x3 << 0)
#define   PBOUTMXCTR0_MEMFMT_2CH          (0x4 << 0)
#define   PBOUTMXCTR0_MEMFMT_STREAM       (0x5 << 0)
#define   PBOUTMXCTR0_MEMFMT_1CH          (0x6 << 0)
#define PBOUTMXCTR1(n)                   (0x40204 + 0x40 * (n))
#define PBOUTMXINTCTR(n)                 (0x40208 + 0x40 * (n))

/* A2D(subsystem) */
#define CDA2D_STRT0                      0x10000
#define   CDA2D_STRT0_STOP_MASK            BIT(31)
#define   CDA2D_STRT0_STOP_START           (0x0 << 31)
#define   CDA2D_STRT0_STOP_STOP            (0x1 << 31)
#define CDA2D_STAT0                      0x10020
#define CDA2D_TEST                       0x100a0
#define   CDA2D_TEST_DDR_MODE_MASK         GENMASK(3, 2)
#define   CDA2D_TEST_DDR_MODE_EXTON0       (0x0 << 2)
#define   CDA2D_TEST_DDR_MODE_EXTOFF1      (0x3 << 2)
#define CDA2D_STRTADRSLOAD               0x100b0

#define CDA2D_CHMXCTRL1(n)               (0x12000 + 0x80 * (n))
#define   CDA2D_CHMXCTRL1_INDSIZE_MASK     BIT(0)
#define   CDA2D_CHMXCTRL1_INDSIZE_FINITE   (0x0 << 0)
#define   CDA2D_CHMXCTRL1_INDSIZE_INFINITE (0x1 << 0)
#define CDA2D_CHMXCTRL2(n)               (0x12004 + 0x80 * (n))
#define CDA2D_CHMXSRCAMODE(n)            (0x12020 + 0x80 * (n))
#define CDA2D_CHMXDSTAMODE(n)            (0x12024 + 0x80 * (n))
#define   CDA2D_CHMXAMODE_ENDIAN_MASK      GENMASK(17, 16)
#define   CDA2D_CHMXAMODE_ENDIAN_3210      (0x0 << 16)
#define   CDA2D_CHMXAMODE_ENDIAN_0123      (0x1 << 16)
#define   CDA2D_CHMXAMODE_ENDIAN_1032      (0x2 << 16)
#define   CDA2D_CHMXAMODE_ENDIAN_2301      (0x3 << 16)
#define   CDA2D_CHMXAMODE_RSSEL_SHIFT      (8)
#define   CDA2D_CHMXAMODE_AUPDT_MASK       GENMASK(5, 4)
#define   CDA2D_CHMXAMODE_AUPDT_INC        (0x0 << 4)
#define   CDA2D_CHMXAMODE_AUPDT_FIX        (0x2 << 4)
#define   CDA2D_CHMXAMODE_TYPE_MASK        GENMASK(3, 2)
#define   CDA2D_CHMXAMODE_TYPE_NORMAL      (0x0 << 2)
#define   CDA2D_CHMXAMODE_TYPE_RING        (0x1 << 2)
#define CDA2D_CHMXSRCSTRTADRS(n)         (0x12030 + 0x80 * (n))
#define CDA2D_CHMXSRCSTRTADRSU(n)        (0x12034 + 0x80 * (n))
#define CDA2D_CHMXDSTSTRTADRS(n)         (0x12038 + 0x80 * (n))
#define CDA2D_CHMXDSTSTRTADRSU(n)        (0x1203c + 0x80 * (n))

/* A2D(ring buffer) */
#define CDA2D_RBFLUSH0                   0x10040
#define CDA2D_RBADRSLOAD                 0x100b4
#define CDA2D_RDPTRLOAD                  0x100b8
#define   CDA2D_RDPTRLOAD_LSFLAG_LOAD      (0x0 << 31)
#define   CDA2D_RDPTRLOAD_LSFLAG_STORE     (0x1 << 31)
#define CDA2D_WRPTRLOAD                  0x100bc
#define   CDA2D_WRPTRLOAD_LSFLAG_LOAD      (0x0 << 31)
#define   CDA2D_WRPTRLOAD_LSFLAG_STORE     (0x1 << 31)

#define CDA2D_RBMXBGNADRS(n)             (0x14000 + 0x80 * (n))
#define CDA2D_RBMXBGNADRSU(n)            (0x14004 + 0x80 * (n))
#define CDA2D_RBMXENDADRS(n)             (0x14008 + 0x80 * (n))
#define CDA2D_RBMXENDADRSU(n)            (0x1400c + 0x80 * (n))
#define CDA2D_RBMXBTH(n)                 (0x14038 + 0x80 * (n))
#define CDA2D_RBMXRTH(n)                 (0x1403c + 0x80 * (n))
#define CDA2D_RBMXRDPTR(n)               (0x14020 + 0x80 * (n))
#define CDA2D_RBMXRDPTRU(n)              (0x14024 + 0x80 * (n))
#define CDA2D_RBMXWRPTR(n)               (0x14028 + 0x80 * (n))
#define CDA2D_RBMXWRPTRU(n)              (0x1402c + 0x80 * (n))
#define   CDA2D_RBMXPTRU_PTRU_MASK         GENMASK(1, 0)
#define CDA2D_RBMXCNFG(n)                (0x14030 + 0x80 * (n))
#define CDA2D_RBMXIR(n)                  (0x14014 + 0x80 * (n))
#define CDA2D_RBMXIE(n)                  (0x14018 + 0x80 * (n))
#define CDA2D_RBMXID(n)                  (0x1401c + 0x80 * (n))
#define   CDA2D_RBMXIX_SPACE               BIT(3)
#define   CDA2D_RBMXIX_REMAIN              BIT(4)

#endif /* SND_UNIPHIER_AIO_REG_H__ */
