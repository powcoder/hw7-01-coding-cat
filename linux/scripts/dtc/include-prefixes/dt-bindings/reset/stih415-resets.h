https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides constants for the reset controller
 * based peripheral powerdown requests on the STMicroelectronics
 * STiH415 SoC.
 */
#ifndef _DT_BINDINGS_RESET_CONTROLLER_STIH415
#define _DT_BINDINGS_RESET_CONTROLLER_STIH415

#define STIH415_EMISS_POWERDOWN		0
#define STIH415_NAND_POWERDOWN		1
#define STIH415_KEYSCAN_POWERDOWN	2
#define STIH415_USB0_POWERDOWN		3
#define STIH415_USB1_POWERDOWN		4
#define STIH415_USB2_POWERDOWN		5
#define STIH415_SATA0_POWERDOWN		6
#define STIH415_SATA1_POWERDOWN		7
#define STIH415_PCIE_POWERDOWN		8

#define STIH415_ETH0_SOFTRESET		0
#define STIH415_ETH1_SOFTRESET		1
#define STIH415_IRB_SOFTRESET		2
#define STIH415_USB0_SOFTRESET		3
#define STIH415_USB1_SOFTRESET		4
#define STIH415_USB2_SOFTRESET		5
#define STIH415_KEYSCAN_SOFTRESET	6

#endif /* _DT_BINDINGS_RESET_CONTROLLER_STIH415 */
