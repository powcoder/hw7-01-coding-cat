https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright 2013 Markus Pargmann <mpa@pengutronix.de>, Pengutronix
 */

#ifndef __DTS_IMX27_PINFUNC_H
#define __DTS_IMX27_PINFUNC_H

/*
 * The pin function ID is a tuple of
 * <pin mux_id>
 * mux_id consists of
 * function + (direction << 2) + (gpio_oconf << 4) + (gpio_iconfa << 8) + (gpio_iconfb << 10)
 *
 * function:      0 - Primary function
 *                1 - Alternate function
 *                2 - GPIO
 * direction:     0 - Input
 *                1 - Output
 * gpio_oconf:    0 - A_IN
 *                1 - B_IN
 *                2 - C_IN
 *                3 - Data Register
 * gpio_iconfa/b: 0 - GPIO_IN
 *                1 - Interrupt Status Register
 *                2 - 0
 *                3 - 1
 *
 * 'pin' is an integer between 0 and 0xbf. imx27 has 6 ports with 32 configurable
 * configurable pins each. 'pin' is PORT * 32 + PORT_PIN, PORT_PIN is the pin
 * number on the specific port (between 0 and 31).
 */

#define MX27_PAD_USBH2_CLK__USBH2_CLK                      0x00 0x000
#define MX27_PAD_USBH2_CLK__GPIO1_0                        0x00 0x032
#define MX27_PAD_USBH2_DIR__USBH2_DIR                      0x01 0x000
#define MX27_PAD_USBH2_DIR__GPIO1_1                        0x01 0x032
#define MX27_PAD_USBH2_DATA7__USBH2_DATA7                  0x02 0x004
#define MX27_PAD_USBH2_DATA7__GPIO1_2                      0x02 0x032
#define MX27_PAD_USBH2_NXT__USBH2_NXT                      0x03 0x000
#define MX27_PAD_USBH2_NXT__GPIO1_3                        0x03 0x032
#define MX27_PAD_USBH2_STP__USBH2_STP                      0x04 0x004
#define MX27_PAD_USBH2_STP__GPIO1_4                        0x04 0x032
#define MX27_PAD_LSCLK__LSCLK                              0x05 0x004
#define MX27_PAD_LSCLK__GPIO1_5                            0x05 0x032
#define MX27_PAD_LD0__LD0                                  0x06 0x004
#define MX27_PAD_LD0__GPIO1_6                              0x06 0x032
#define MX27_PAD_LD1__LD1                                  0x07 0x004
#define MX27_PAD_LD1__GPIO1_7                              0x07 0x032
#define MX27_PAD_LD2__LD2                                  0x08 0x004
#define MX27_PAD_LD2__GPIO1_8                              0x08 0x032
#define MX27_PAD_LD3__LD3                                  0x09 0x004
#define MX27_PAD_LD3__GPIO1_9                              0x09 0x032
#define MX27_PAD_LD4__LD4                                  0x0a 0x004
#define MX27_PAD_LD4__GPIO1_10                             0x0a 0x032
#define MX27_PAD_LD5__LD5                                  0x0b 0x004
#define MX27_PAD_LD5__GPIO1_11                             0x0b 0x032
#define MX27_PAD_LD6__LD6                                  0x0c 0x004
#define MX27_PAD_LD6__GPIO1_12                             0x0c 0x032
#define MX27_PAD_LD7__LD7                                  0x0d 0x004
#define MX27_PAD_LD7__GPIO1_13                             0x0d 0x032
#define MX27_PAD_LD8__LD8                                  0x0e 0x004
#define MX27_PAD_LD8__GPIO1_14                             0x0e 0x032
#define MX27_PAD_LD9__LD9                                  0x0f 0x004
#define MX27_PAD_LD9__GPIO1_15                             0x0f 0x032
#define MX27_PAD_LD10__LD10                                0x10 0x004
#define MX27_PAD_LD10__GPIO1_16                            0x10 0x032
#define MX27_PAD_LD11__LD11                                0x11 0x004
#define MX27_PAD_LD11__GPIO1_17                            0x11 0x032
#define MX27_PAD_LD12__LD12                                0x12 0x004
#define MX27_PAD_LD12__GPIO1_18                            0x12 0x032
#define MX27_PAD_LD13__LD13                                0x13 0x004
#define MX27_PAD_LD13__GPIO1_19                            0x13 0x032
#define MX27_PAD_LD14__LD14                                0x14 0x004
#define MX27_PAD_LD14__GPIO1_20                            0x14 0x032
#define MX27_PAD_LD15__LD15                                0x15 0x004
#define MX27_PAD_LD15__GPIO1_21                            0x15 0x032
#define MX27_PAD_LD16__LD16                                0x16 0x004
#define MX27_PAD_LD16__GPIO1_22                            0x16 0x032
#define MX27_PAD_LD17__LD17                                0x17 0x004
#define MX27_PAD_LD17__GPIO1_23                            0x17 0x032
#define MX27_PAD_REV__REV                                  0x18 0x004
#define MX27_PAD_REV__GPIO1_24                             0x18 0x032
#define MX27_PAD_CLS__CLS                                  0x19 0x004
#define MX27_PAD_CLS__GPIO1_25                             0x19 0x032
#define MX27_PAD_PS__PS                                    0x1a 0x004
#define MX27_PAD_PS__GPIO1_26                              0x1a 0x032
#define MX27_PAD_SPL_SPR__SPL_SPR                          0x1b 0x004
#define MX27_PAD_SPL_SPR__GPIO1_27                         0x1b 0x032
#define MX27_PAD_HSYNC__HSYNC                              0x1c 0x004
#define MX27_PAD_HSYNC__GPIO1_28                           0x1c 0x032
#define MX27_PAD_VSYNC__VSYNC                              0x1d 0x004
#define MX27_PAD_VSYNC__GPIO1_29                           0x1d 0x032
#define MX27_PAD_CONTRAST__CONTRAST                        0x1e 0x004
#define MX27_PAD_CONTRAST__GPIO1_30                        0x1e 0x032
#define MX27_PAD_OE_ACD__OE_ACD                            0x1f 0x004
#define MX27_PAD_OE_ACD__GPIO1_31                          0x1f 0x032
#define MX27_PAD_SD2_D0__SD2_D0                            0x24 0x004
#define MX27_PAD_SD2_D0__MSHC_DATA0                        0x24 0x005
#define MX27_PAD_SD2_D0__GPIO2_4                           0x24 0x032
#define MX27_PAD_SD2_D1__SD2_D1                            0x25 0x004
#define MX27_PAD_SD2_D1__MSHC_DATA1                        0x25 0x005
#define MX27_PAD_SD2_D1__GPIO2_5                           0x25 0x032
#define MX27_PAD_SD2_D2__SD2_D2                            0x26 0x004
#define MX27_PAD_SD2_D2__MSHC_DATA2                        0x26 0x005
#define MX27_PAD_SD2_D2__GPIO2_6                           0x26 0x032
#define MX27_PAD_SD2_D3__SD2_D3                            0x27 0x004
#define MX27_PAD_SD2_D3__MSHC_DATA3                        0x27 0x005
#define MX27_PAD_SD2_D3__GPIO2_7                           0x27 0x032
#define MX27_PAD_SD2_CMD__SD2_CMD                          0x28 0x004
#define MX27_PAD_SD2_CMD__MSHC_BS                          0x28 0x005
#define MX27_PAD_SD2_CMD__GPIO2_8                          0x28 0x032
#define MX27_PAD_SD2_CLK__SD2_CLK                          0x29 0x004
#define MX27_PAD_SD2_CLK__MSHC_SCLK                        0x29 0x005
#define MX27_PAD_SD2_CLK__GPIO2_9                          0x29 0x032
#define MX27_PAD_CSI_D0__CSI_D0                            0x2a 0x000
#define MX27_PAD_CSI_D0__UART6_TXD                         0x2a 0x005
#define MX27_PAD_CSI_D0__GPIO2_10                          0x2a 0x032
#define MX27_PAD_CSI_D1__CSI_D1                            0x2b 0x000
#define MX27_PAD_CSI_D1__UART6_RXD                         0x2b 0x001
#define MX27_PAD_CSI_D1__GPIO2_11                          0x2b 0x032
#define MX27_PAD_CSI_D2__CSI_D2                            0x2c 0x000
#define MX27_PAD_CSI_D2__UART6_CTS                         0x2c 0x005
#define MX27_PAD_CSI_D2__GPIO2_12                          0x2c 0x032
#define MX27_PAD_CSI_D3__CSI_D3                            0x2d 0x000
#define MX27_PAD_CSI_D3__UART6_RTS                         0x2d 0x001
#define MX27_PAD_CSI_D3__GPIO2_13                          0x2d 0x032
#define MX27_PAD_CSI_D4__CSI_D4                            0x2e 0x000
#define MX27_PAD_CSI_D4__GPIO2_14                          0x2e 0x032
#define MX27_PAD_CSI_MCLK__CSI_MCLK                        0x2f 0x004
#define MX27_PAD_CSI_MCLK__GPIO2_15                        0x2f 0x032
#define MX27_PAD_CSI_PIXCLK__CSI_PIXCLK                    0x30 0x000
#define MX27_PAD_CSI_PIXCLK__GPIO2_16                      0x30 0x032
#define MX27_PAD_CSI_D5__CSI_D5                            0x31 0x000
#define MX27_PAD_CSI_D5__GPIO2_17                          0x31 0x032
#define MX27_PAD_CSI_D6__CSI_D6                            0x32 0x000
#define MX27_PAD_CSI_D6__UART5_TXD                         0x32 0x005
#define MX27_PAD_CSI_D6__GPIO2_18                          0x32 0x032
#define MX27_PAD_CSI_D7__CSI_D7                            0x33 0x000
#define MX27_PAD_CSI_D7__UART5_RXD                         0x33 0x001
#define MX27_PAD_CSI_D7__GPIO2_19                          0x33 0x032
#define MX27_PAD_CSI_VSYNC__CSI_VSYNC                      0x34 0x000
#define MX27_PAD_CSI_VSYNC__UART5_CTS                      0x34 0x005
#define MX27_PAD_CSI_VSYNC__GPIO2_20                       0x34 0x032
#define MX27_PAD_CSI_HSYNC__CSI_HSYNC                      0x35 0x000
#define MX27_PAD_CSI_HSYNC__UART5_RTS                      0x35 0x001
#define MX27_PAD_CSI_HSYNC__GPIO2_21                       0x35 0x032
#define MX27_PAD_USBH1_SUSP__USBH1_SUSP                    0x36 0x004
#define MX27_PAD_USBH1_SUSP__GPIO2_22                      0x36 0x032
#define MX27_PAD_USB_PWR__USB_PWR                          0x37 0x004
#define MX27_PAD_USB_PWR__GPIO2_23                         0x37 0x032
#define MX27_PAD_USB_OC_B__USB_OC_B                        0x38 0x000
#define MX27_PAD_USB_OC_B__GPIO2_24                        0x38 0x032
#define MX27_PAD_USBH1_RCV__USBH1_RCV                      0x39 0x004
#define MX27_PAD_USBH1_RCV__GPIO2_25                       0x39 0x032
#define MX27_PAD_USBH1_FS__USBH1_FS                        0x3a 0x004
#define MX27_PAD_USBH1_FS__UART4_RTS                       0x3a 0x001
#define MX27_PAD_USBH1_FS__GPIO2_26                        0x3a 0x032
#define MX27_PAD_USBH1_OE_B__USBH1_OE_B                    0x3b 0x004
#define MX27_PAD_USBH1_OE_B__GPIO2_27                      0x3b 0x032
#define MX27_PAD_USBH1_TXDM__USBH1_TXDM                    0x3c 0x004
#define MX27_PAD_USBH1_TXDM__UART4_TXD                     0x3c 0x005
#define MX27_PAD_USBH1_TXDM__GPIO2_28                      0x3c 0x032
#define MX27_PAD_USBH1_TXDP__USBH1_TXDP                    0x3d 0x004
#define MX27_PAD_USBH1_TXDP__UART4_CTS                     0x3d 0x005
#define MX27_PAD_USBH1_TXDP__GPIO2_29                      0x3d 0x032
#define MX27_PAD_USBH1_RXDM__USBH1_RXDM                    0x3e 0x004
#define MX27_PAD_USBH1_RXDM__GPIO2_30                      0x3e 0x032
#define MX27_PAD_USBH1_RXDP__USBH1_RXDP                    0x3f 0x004
#define MX27_PAD_USBH1_RXDP__UART4_RXD                     0x3f 0x001
#define MX27_PAD_USBH1_RXDP__GPIO2_31                      0x3f 0x032
#define MX27_PAD_I2C2_SDA__I2C2_SDA                        0x45 0x004
#define MX27_PAD_I2C2_SDA__GPIO3_5                         0x45 0x032
#define MX27_PAD_I2C2_SCL__I2C2_SCL                        0x46 0x004
#define MX27_PAD_I2C2_SCL__GPIO3_6                         0x46 0x032
#define MX27_PAD_USBOTG_DATA5__USBOTG_DATA5                0x47 0x004
#define MX27_PAD_USBOTG_DATA5__GPIO3_7                     0x47 0x032
#define MX27_PAD_USBOTG_DATA6__USBOTG_DATA6                0x48 0x004
#define MX27_PAD_USBOTG_DATA6__GPIO3_8                     0x48 0x032
#define MX27_PAD_USBOTG_DATA0__USBOTG_DATA0                0x49 0x004
#define MX27_PAD_USBOTG_DATA0__GPIO3_9                     0x49 0x032
#define MX27_PAD_USBOTG_DATA2__USBOTG_DATA2                0x4a 0x004
#define MX27_PAD_USBOTG_DATA2__GPIO3_10                    0x4a 0x032
#define MX27_PAD_USBOTG_DATA1__USBOTG_DATA1                0x4b 0x004
#define MX27_PAD_USBOTG_DATA1__GPIO3_11                    0x4b 0x032
#define MX27_PAD_USBOTG_DATA4__USBOTG_DATA4                0x4c 0x004
#define MX27_PAD_USBOTG_DATA4__GPIO3_12                    0x4c 0x032
#define MX27_PAD_USBOTG_DATA3__USBOTG_DATA3                0x4d 0x004
#define MX27_PAD_USBOTG_DATA3__GPIO3_13                    0x4d 0x032
#define MX27_PAD_TOUT__TOUT                                0x4e 0x004
#define MX27_PAD_TOUT__GPIO3_14                            0x4e 0x032
#define MX27_PAD_TIN__TIN                                  0x4f 0x000
#define MX27_PAD_TIN__GPIO3_15                             0x4f 0x032
#define MX27_PAD_SSI4_FS__SSI4_FS                          0x50 0x004
#define MX27_PAD_SSI4_FS__GPIO3_16                         0x50 0x032
#define MX27_PAD_SSI4_RXDAT__SSI4_RXDAT                    0x51 0x004
#define MX27_PAD_SSI4_RXDAT__GPIO3_17                      0x51 0x032
#define MX27_PAD_SSI4_TXDAT__SSI4_TXDAT                    0x52 0x004
#define MX27_PAD_SSI4_TXDAT__GPIO3_18                      0x52 0x032
#define MX27_PAD_SSI4_CLK__SSI4_CLK                        0x53 0x004
#define MX27_PAD_SSI4_CLK__GPIO3_19                        0x53 0x032
#define MX27_PAD_SSI1_FS__SSI1_FS                          0x54 0x004
#define MX27_PAD_SSI1_FS__GPIO3_20                         0x54 0x032
#define MX27_PAD_SSI1_RXDAT__SSI1_RXDAT                    0x55 0x004
#define MX27_PAD_SSI1_RXDAT__GPIO3_21                      0x55 0x032
#define MX27_PAD_SSI1_TXDAT__SSI1_TXDAT                    0x56 0x004
#define MX27_PAD_SSI1_TXDAT__GPIO3_22                      0x56 0x032
#define MX27_PAD_SSI1_CLK__SSI1_CLK                        0x57 0x004
#define MX27_PAD_SSI1_CLK__GPIO3_23                        0x57 0x032
#define MX27_PAD_SSI2_FS__SSI2_FS                          0x58 0x004
#define MX27_PAD_SSI2_FS__GPT5_TOUT                        0x58 0x005
#define MX27_PAD_SSI2_FS__GPIO3_24                         0x58 0x032
#define MX27_PAD_SSI2_RXDAT__SSI2_RXDAT                    0x59 0x004
#define MX27_PAD_SSI2_RXDAT__GPTS_TIN                      0x59 0x001
#define MX27_PAD_SSI2_RXDAT__GPIO3_25                      0x59 0x032
#define MX27_PAD_SSI2_TXDAT__SSI2_TXDAT                    0x5a 0x004
#define MX27_PAD_SSI2_TXDAT__GPT4_TOUT                     0x5a 0x005
#define MX27_PAD_SSI2_TXDAT__GPIO3_26                      0x5a 0x032
#define MX27_PAD_SSI2_CLK__SSI2_CLK                        0x5b 0x004
#define MX27_PAD_SSI2_CLK__GPT4_TIN                        0x5b 0x001
#define MX27_PAD_SSI2_CLK__GPIO3_27                        0x5b 0x032
#define MX27_PAD_SSI3_FS__SSI3_FS                          0x5c 0x004
#define MX27_PAD_SSI3_FS__SLCDC2_D0                        0x5c 0x001
#define MX27_PAD_SSI3_FS__GPIO3_28                         0x5c 0x032
#define MX27_PAD_SSI3_RXDAT__SSI3_RXDAT                    0x5d 0x004
#define MX27_PAD_SSI3_RXDAT__SLCDC2_RS                     0x5d 0x001
#define MX27_PAD_SSI3_RXDAT__GPIO3_29                      0x5d 0x032
#define MX27_PAD_SSI3_TXDAT__SSI3_TXDAT                    0x5e 0x004
#define MX27_PAD_SSI3_TXDAT__SLCDC2_CS                     0x5e 0x001
#define MX27_PAD_SSI3_TXDAT__GPIO3_30                      0x5e 0x032
#define MX27_PAD_SSI3_CLK__SSI3_CLK                        0x5f 0x004
#define MX27_PAD_SSI3_CLK__SLCDC2_CLK                      0x5f 0x001
#define MX27_PAD_SSI3_CLK__GPIO3_31                        0x5f 0x032
#define MX27_PAD_SD3_CMD__SD3_CMD                          0x60 0x004
#define MX27_PAD_SD3_CMD__FEC_TXD0                         0x60 0x006
#define MX27_PAD_SD3_CMD__GPIO4_0                          0x60 0x032
#define MX27_PAD_SD3_CLK__SD3_CLK                          0x61 0x004
#define MX27_PAD_SD3_CLK__ETMTRACEPKT15                    0x61 0x005
#define MX27_PAD_SD3_CLK__FEC_TXD1                         0x61 0x006
#define MX27_PAD_SD3_CLK__GPIO4_1                          0x61 0x032
#define MX27_PAD_ATA_DATA0__ATA_DATA0                      0x62 0x004
#define MX27_PAD_ATA_DATA0__SD3_D0                         0x62 0x005
#define MX27_PAD_ATA_DATA0__FEC_TXD2                       0x62 0x006
#define MX27_PAD_ATA_DATA0__GPIO4_2                        0x62 0x032
#define MX27_PAD_ATA_DATA1__ATA_DATA1                      0x63 0x004
#define MX27_PAD_ATA_DATA1__SD3_D1                         0x63 0x005
#define MX27_PAD_ATA_DATA1__FEC_TXD3                       0x63 0x006
#define MX27_PAD_ATA_DATA1__GPIO4_3                        0x63 0x032
#define MX27_PAD_ATA_DATA2__ATA_DATA2                      0x64 0x004
#define MX27_PAD_ATA_DATA2__SD3_D2                         0x64 0x005
#define MX27_PAD_ATA_DATA2__FEC_RX_ER                      0x64 0x002
#define MX27_PAD_ATA_DATA2__GPIO4_4                        0x64 0x032
#define MX27_PAD_ATA_DATA3__ATA_DATA3                      0x65 0x004
#define MX27_PAD_ATA_DATA3__SD3_D3                         0x65 0x005
#define MX27_PAD_ATA_DATA3__FEC_RXD1                       0x65 0x002
#define MX27_PAD_ATA_DATA3__GPIO4_5                        0x65 0x032
#define MX27_PAD_ATA_DATA4__ATA_DATA4                      0x66 0x004
#define MX27_PAD_ATA_DATA4__ETMTRACEPKT14                  0x66 0x005
#define MX27_PAD_ATA_DATA4__FEC_RXD2                       0x66 0x002
#define MX27_PAD_ATA_DATA4__GPIO4_6                        0x66 0x032
#define MX27_PAD_ATA_DATA5__ATA_DATA5                      0x67 0x004
#define MX27_PAD_ATA_DATA5__ETMTRACEPKT13                  0x67 0x005
#define MX27_PAD_ATA_DATA5__FEC_RXD3                       0x67 0x002
#define MX27_PAD_ATA_DATA5__GPIO4_7                        0x67 0x032
#define MX27_PAD_ATA_DATA6__ATA_DATA6                      0x68 0x004
#define MX27_PAD_ATA_DATA6__FEC_MDIO                       0x68 0x005
#define MX27_PAD_ATA_DATA6__GPIO4_8                        0x68 0x032
#define MX27_PAD_ATA_DATA7__ATA_DATA7                      0x69 0x004
#define MX27_PAD_ATA_DATA7__ETMTRACEPKT12                  0x69 0x005
#define MX27_PAD_ATA_DATA7__FEC_MDC                        0x69 0x006
#define MX27_PAD_ATA_DATA7__GPIO4_9                        0x69 0x032
#define MX27_PAD_ATA_DATA8__ATA_DATA8                      0x6a 0x004
#define MX27_PAD_ATA_DATA8__ETMTRACEPKT11                  0x6a 0x005
#define MX27_PAD_ATA_DATA8__FEC_CRS                        0x6a 0x002
#define MX27_PAD_ATA_DATA8__GPIO4_10                       0x6a 0x032
#define MX27_PAD_ATA_DATA9__ATA_DATA9                      0x6b 0x004
#define MX27_PAD_ATA_DATA9__ETMTRACEPKT10                  0x6b 0x005
#define MX27_PAD_ATA_DATA9__FEC_TX_CLK                     0x6b 0x002
#define MX27_PAD_ATA_DATA9__GPIO4_11                       0x6b 0x032
#define MX27_PAD_ATA_DATA10__ATA_DATA10                    0x6c 0x004
#define MX27_PAD_ATA_DATA10__ETMTRACEPKT9                  0x6c 0x005
#define MX27_PAD_ATA_DATA10__FEC_RXD0                      0x6c 0x002
#define MX27_PAD_ATA_DATA10__GPIO4_12                      0x6c 0x032
#define MX27_PAD_ATA_DATA11__ATA_DATA11                    0x6d 0x004
#define MX27_PAD_ATA_DATA11__ETMTRACEPKT8                  0x6d 0x005
#define MX27_PAD_ATA_DATA11__FEC_RX_DV                     0x6d 0x002
#define MX27_PAD_ATA_DATA11__GPIO4_13                      0x6d 0x032
#define MX27_PAD_ATA_DATA12__ATA_DATA12                    0x6e 0x004
#define MX27_PAD_ATA_DATA12__ETMTRACEPKT7                  0x6e 0x005
#define MX27_PAD_ATA_DATA12__FEC_RX_CLK                    0x6e 0x002
#define MX27_PAD_ATA_DATA12__GPIO4_14                      0x6e 0x032
#define MX27_PAD_ATA_DATA13__ATA_DATA13                    0x6f 0x004
#define MX27_PAD_ATA_DATA13__ETMTRACEPKT6                  0x6f 0x005
#define MX27_PAD_ATA_DATA13__FEC_COL                       0x6f 0x002
#define MX27_PAD_ATA_DATA13__GPIO4_15                      0x6f 0x032
#define MX27_PAD_ATA_DATA14__ATA_DATA14                    0x70 0x004
#define MX27_PAD_ATA_DATA14__ETMTRACEPKT5                  0x70 0x005
#define MX27_PAD_ATA_DATA14__FEC_TX_ER                     0x70 0x006
#define MX27_PAD_ATA_DATA14__GPIO4_16                      0x70 0x032
#define MX27_PAD_I2C_DATA__I2C_DATA                        0x71 0x004
#define MX27_PAD_I2C_DATA__GPIO4_17                        0x71 0x032
#define MX27_PAD_I2C_CLK__I2C_CLK                          0x72 0x004
#define MX27_PAD_I2C_CLK__GPIO4_18                         0x72 0x032
#define MX27_PAD_CSPI2_SS2__CSPI2_SS2                      0x73 0x004
#define MX27_PAD_CSPI2_SS2__USBH2_DATA4                    0x73 0x005
#define MX27_PAD_CSPI2_SS2__GPIO4_19                       0x73 0x032
#define MX27_PAD_CSPI2_SS1__CSPI2_SS1                      0x74 0x004
#define MX27_PAD_CSPI2_SS1__USBH2_DATA3                    0x74 0x005
#define MX27_PAD_CSPI2_SS1__GPIO4_20                       0x74 0x032
#define MX27_PAD_CSPI2_SS0__CSPI2_SS0                      0x75 0x004
#define MX27_PAD_CSPI2_SS0__USBH2_DATA6                    0x75 0x005
#define MX27_PAD_CSPI2_SS0__GPIO4_21                       0x75 0x032
#define MX27_PAD_CSPI2_SCLK__CSPI2_SCLK                    0x76 0x004
#define MX27_PAD_CSPI2_SCLK__USBH2_DATA0                   0x76 0x005
#define MX27_PAD_CSPI2_SCLK__GPIO4_22                      0x76 0x032
#define MX27_PAD_CSPI2_MISO__CSPI2_MISO                    0x77 0x004
#define MX27_PAD_CSPI2_MISO__USBH2_DATA2                   0x77 0x005
#define MX27_PAD_CSPI2_MISO__GPIO4_23                      0x77 0x032
#define MX27_PAD_CSPI2_MOSI__CSPI2_MOSI                    0x78 0x004
#define MX27_PAD_CSPI2_MOSI__USBH2_DATA1                   0x78 0x005
#define MX27_PAD_CSPI2_MOSI__GPIO4_24                      0x78 0x032
#define MX27_PAD_CSPI1_RDY__CSPI1_RDY                      0x79 0x000
#define MX27_PAD_CSPI1_RDY__GPIO4_25                       0x79 0x032
#define MX27_PAD_CSPI1_SS2__CSPI1_SS2                      0x7a 0x004
#define MX27_PAD_CSPI1_SS2__USBH2_DATA5                    0x7a 0x005
#define MX27_PAD_CSPI1_SS2__GPIO4_26                       0x7a 0x032
#define MX27_PAD_CSPI1_SS1__CSPI1_SS1                      0x7b 0x004
#define MX27_PAD_CSPI1_SS1__GPIO4_27                       0x7b 0x032
#define MX27_PAD_CSPI1_SS0__CSPI1_SS0                      0x7c 0x004
#define MX27_PAD_CSPI1_SS0__GPIO4_28                       0x7c 0x032
#define MX27_PAD_CSPI1_SCLK__CSPI1_SCLK                    0x7d 0x004
#define MX27_PAD_CSPI1_SCLK__GPIO4_29                      0x7d 0x032
#define MX27_PAD_CSPI1_MISO__CSPI1_MISO                    0x7e 0x004
#define MX27_PAD_CSPI1_MISO__GPIO4_30                      0x7e 0x032
#define MX27_PAD_CSPI1_MOSI__CSPI1_MOSI                    0x7f 0x004
#define MX27_PAD_CSPI1_MOSI__GPIO4_31                      0x7f 0x032
#define MX27_PAD_USBOTG_NXT__USBOTG_NXT                    0x80 0x000
#define MX27_PAD_USBOTG_NXT__KP_COL6A                      0x80 0x005
#define MX27_PAD_USBOTG_NXT__GPIO5_0                       0x80 0x032
#define MX27_PAD_USBOTG_STP__USBOTG_STP                    0x81 0x004
#define MX27_PAD_USBOTG_STP__KP_ROW6A                      0x81 0x005
#define MX27_PAD_USBOTG_STP__GPIO5_1                       0x81 0x032
#define MX27_PAD_USBOTG_DIR__USBOTG_DIR                    0x82 0x000
#define MX27_PAD_USBOTG_DIR__KP_ROW7A                      0x82 0x005
#define MX27_PAD_USBOTG_DIR__GPIO5_2                       0x82 0x032
#define MX27_PAD_UART2_CTS__UART2_CTS                      0x83 0x004
#define MX27_PAD_UART2_CTS__KP_COL7                        0x83 0x005
#define MX27_PAD_UART2_CTS__GPIO5_3                        0x83 0x032
#define MX27_PAD_UART2_RTS__UART2_RTS                      0x84 0x000
#define MX27_PAD_UART2_RTS__KP_ROW7                        0x84 0x005
#define MX27_PAD_UART2_RTS__GPIO5_4                        0x84 0x032
#define MX27_PAD_PWMO__PWMO                                0x85 0x004
#define MX27_PAD_PWMO__GPIO5_5                             0x85 0x032
#define MX27_PAD_UART2_TXD__UART2_TXD                      0x86 0x004
#define MX27_PAD_UART2_TXD__KP_COL6                        0x86 0x005
#define MX27_PAD_UART2_TXD__GPIO5_6                        0x86 0x032
#define MX27_PAD_UART2_RXD__UART2_RXD                      0x87 0x000
#define MX27_PAD_UART2_RXD__KP_ROW6                        0x87 0x005
#define MX27_PAD_UART2_RXD__GPIO5_7                        0x87 0x032
#define MX27_PAD_UART3_TXD__UART3_TXD                      0x88 0x004
#define MX27_PAD_UART3_TXD__GPIO5_8                        0x88 0x032
#define MX27_PAD_UART3_RXD__UART3_RXD                      0x89 0x000
#define MX27_PAD_UART3_RXD__GPIO5_9                        0x89 0x032
#define MX27_PAD_UART3_CTS__UART3_CTS                      0x8a 0x004
#define MX27_PAD_UART3_CTS__GPIO5_10                       0x8a 0x032
#define MX27_PAD_UART3_RTS__UART3_RTS                      0x8b 0x000
#define MX27_PAD_UART3_RTS__GPIO5_11                       0x8b 0x032
#define MX27_PAD_UART1_TXD__UART1_TXD                      0x8c 0x004
#define MX27_PAD_UART1_TXD__GPIO5_12                       0x8c 0x032
#define MX27_PAD_UART1_RXD__UART1_RXD                      0x8d 0x000
#define MX27_PAD_UART1_RXD__GPIO5_13                       0x8d 0x032
#define MX27_PAD_UART1_CTS__UART1_CTS                      0x8e 0x004
#define MX27_PAD_UART1_CTS__GPIO5_14                       0x8e 0x032
#define MX27_PAD_UART1_RTS__UART1_RTS                      0x8f 0x000
#define MX27_PAD_UART1_RTS__GPIO5_15                       0x8f 0x032
#define MX27_PAD_RTCK__RTCK                                0x90 0x004
#define MX27_PAD_RTCK__OWIRE                               0x90 0x005
#define MX27_PAD_RTCK__GPIO5_16                            0x90 0x032
#define MX27_PAD_RESET_OUT_B__RESET_OUT_B                  0x91 0x004
#define MX27_PAD_RESET_OUT_B__GPIO5_17                     0x91 0x032
#define MX27_PAD_SD1_D0__SD1_D0                            0x92 0x004
#define MX27_PAD_SD1_D0__CSPI3_MISO                        0x92 0x001
#define MX27_PAD_SD1_D0__GPIO5_18                          0x92 0x032
#define MX27_PAD_SD1_D1__SD1_D1                            0x93 0x004
#define MX27_PAD_SD1_D1__GPIO5_19                          0x93 0x032
#define MX27_PAD_SD1_D2__SD1_D2                            0x94 0x004
#define MX27_PAD_SD1_D2__GPIO5_20                          0x94 0x032
#define MX27_PAD_SD1_D3__SD1_D3                            0x95 0x004
#define MX27_PAD_SD1_D3__CSPI3_SS                          0x95 0x005
#define MX27_PAD_SD1_D3__GPIO5_21                          0x95 0x032
#define MX27_PAD_SD1_CMD__SD1_CMD                          0x96 0x004
#define MX27_PAD_SD1_CMD__CSPI3_MOSI                       0x96 0x005
#define MX27_PAD_SD1_CMD__GPIO5_22                         0x96 0x032
#define MX27_PAD_SD1_CLK__SD1_CLK                          0x97 0x004
#define MX27_PAD_SD1_CLK__CSPI3_SCLK                       0x97 0x005
#define MX27_PAD_SD1_CLK__GPIO5_23                         0x97 0x032
#define MX27_PAD_USBOTG_CLK__USBOTG_CLK                    0x98 0x000
#define MX27_PAD_USBOTG_CLK__GPIO5_24                      0x98 0x032
#define MX27_PAD_USBOTG_DATA7__USBOTG_DATA7                0x99 0x004
#define MX27_PAD_USBOTG_DATA7__GPIO5_25                    0x99 0x032
#define MX27_PAD_NFRB__NFRB                                0xa0 0x000
#define MX27_PAD_NFRB__ETMTRACEPKT3                        0xa0 0x005
#define MX27_PAD_NFRB__GPIO6_0                             0xa0 0x032
#define MX27_PAD_NFCLE__NFCLE                              0xa1 0x004
#define MX27_PAD_NFCLE__ETMTRACEPKT0                       0xa1 0x005
#define MX27_PAD_NFCLE__GPIO6_1                            0xa1 0x032
#define MX27_PAD_NFWP_B__NFWP_B                            0xa2 0x004
#define MX27_PAD_NFWP_B__ETMTRACEPKT1                      0xa2 0x005
#define MX27_PAD_NFWP_B__GPIO6_2                           0xa2 0x032
#define MX27_PAD_NFCE_B__NFCE_B                            0xa3 0x004
#define MX27_PAD_NFCE_B__ETMTRACEPKT2                      0xa3 0x005
#define MX27_PAD_NFCE_B__GPIO6_3                           0xa3 0x032
#define MX27_PAD_NFALE__NFALE                              0xa4 0x004
#define MX27_PAD_NFALE__ETMPIPESTAT0                       0xa4 0x005
#define MX27_PAD_NFALE__GPIO6_4                            0xa4 0x032
#define MX27_PAD_NFRE_B__NFRE_B                            0xa5 0x004
#define MX27_PAD_NFRE_B__ETMPIPESTAT1                      0xa5 0x005
#define MX27_PAD_NFRE_B__GPIO6_5                           0xa5 0x032
#define MX27_PAD_NFWE_B__NFWE_B                            0xa6 0x004
#define MX27_PAD_NFWE_B__ETMPIPESTAT2                      0xa6 0x005
#define MX27_PAD_NFWE_B__GPIO6_6                           0xa6 0x032
#define MX27_PAD_PC_POE__PC_POE                            0xa7 0x004
#define MX27_PAD_PC_POE__ATA_BUFFER_EN                     0xa7 0x005
#define MX27_PAD_PC_POE__GPIO6_7                           0xa7 0x032
#define MX27_PAD_PC_RW_B__PC_RW_B                          0xa8 0x004
#define MX27_PAD_PC_RW_B__ATA_IORDY                        0xa8 0x001
#define MX27_PAD_PC_RW_B__GPIO6_8                          0xa8 0x032
#define MX27_PAD_IOIS16__IOIS16                            0xa9 0x000
#define MX27_PAD_IOIS16__ATA_INTRQ                         0xa9 0x001
#define MX27_PAD_IOIS16__GPIO6_9                           0xa9 0x032
#define MX27_PAD_PC_RST__PC_RST                            0xaa 0x004
#define MX27_PAD_PC_RST__ATA_RESET_B                       0xaa 0x005
#define MX27_PAD_PC_RST__GPIO6_10                          0xaa 0x032
#define MX27_PAD_PC_BVD2__PC_BVD2                          0xab 0x000
#define MX27_PAD_PC_BVD2__ATA_DMACK                        0xab 0x005
#define MX27_PAD_PC_BVD2__GPIO6_11                         0xab 0x032
#define MX27_PAD_PC_BVD1__PC_BVD1                          0xac 0x000
#define MX27_PAD_PC_BVD1__ATA_DMARQ                        0xac 0x001
#define MX27_PAD_PC_BVD1__GPIO6_12                         0xac 0x032
#define MX27_PAD_PC_VS2__PC_VS2                            0xad 0x000
#define MX27_PAD_PC_VS2__ATA_DA0                           0xad 0x005
#define MX27_PAD_PC_VS2__GPIO6_13                          0xad 0x032
#define MX27_PAD_PC_VS1__PC_VS1                            0xae 0x000
#define MX27_PAD_PC_VS1__ATA_DA1                           0xae 0x005
#define MX27_PAD_PC_VS1__GPIO6_14                          0xae 0x032
#define MX27_PAD_CLKO__CLKO                                0xaf 0x004
#define MX27_PAD_CLKO__GPIO6_15                            0xaf 0x032
#define MX27_PAD_PC_PWRON__PC_PWRON                        0xb0 0x000
#define MX27_PAD_PC_PWRON__ATA_DA2                         0xb0 0x005
#define MX27_PAD_PC_PWRON__GPIO6_16                        0xb0 0x032
#define MX27_PAD_PC_READY__PC_READY                        0xb1 0x000
#define MX27_PAD_PC_READY__ATA_CS0                         0xb1 0x005
#define MX27_PAD_PC_READY__GPIO6_17                        0xb1 0x032
#define MX27_PAD_PC_WAIT_B__PC_WAIT_B                      0xb2 0x000
#define MX27_PAD_PC_WAIT_B__ATA_CS1                        0xb2 0x005
#define MX27_PAD_PC_WAIT_B__GPIO6_18                       0xb2 0x032
#define MX27_PAD_PC_CD2_B__PC_CD2_B                        0xb3 0x000
#define MX27_PAD_PC_CD2_B__ATA_DIOW                        0xb3 0x005
#define MX27_PAD_PC_CD2_B__GPIO6_19                        0xb3 0x032
#define MX27_PAD_PC_CD1_B__PC_CD1_B                        0xb4 0x000
#define MX27_PAD_PC_CD1_B__ATA_DIOR                        0xb4 0x005
#define MX27_PAD_PC_CD1_B__GPIO6_20                        0xb4 0x032
#define MX27_PAD_CS4_B__CS4_B                              0xb5 0x004
#define MX27_PAD_CS4_B__ETMTRACESYNC                       0xb5 0x005
#define MX27_PAD_CS4_B__GPIO6_21                           0xb5 0x032
#define MX27_PAD_CS5_B__CS5_B                              0xb6 0x004
#define MX27_PAD_CS5_B__ETMTRACECLK                        0xb6 0x005
#define MX27_PAD_CS5_B__GPIO6_22                           0xb6 0x032
#define MX27_PAD_ATA_DATA15__ATA_DATA15                    0xb7 0x004
#define MX27_PAD_ATA_DATA15__ETMTRACEPKT4                  0xb7 0x005
#define MX27_PAD_ATA_DATA15__FEC_TX_EN                     0xb7 0x006
#define MX27_PAD_ATA_DATA15__GPIO6_23                      0xb7 0x032

#endif /* __DTS_IMX27_PINFUNC_H */
