https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2015-2020, NVIDIA CORPORATION.  All rights reserved.
 */

#ifndef TEGRA210_MC_H
#define TEGRA210_MC_H

#include "mc.h"

/* register definitions */
#define MC_LATENCY_ALLOWANCE_AVPC_0				0x2e4
#define MC_LATENCY_ALLOWANCE_HC_0				0x310
#define MC_LATENCY_ALLOWANCE_HC_1				0x314
#define MC_LATENCY_ALLOWANCE_MPCORE_0				0x320
#define MC_LATENCY_ALLOWANCE_NVENC_0				0x328
#define MC_LATENCY_ALLOWANCE_PPCS_0				0x344
#define MC_LATENCY_ALLOWANCE_PPCS_1				0x348
#define MC_LATENCY_ALLOWANCE_ISP2_0				0x370
#define MC_LATENCY_ALLOWANCE_ISP2_1				0x374
#define MC_LATENCY_ALLOWANCE_XUSB_0				0x37c
#define MC_LATENCY_ALLOWANCE_XUSB_1				0x380
#define MC_LATENCY_ALLOWANCE_TSEC_0				0x390
#define MC_LATENCY_ALLOWANCE_VIC_0				0x394
#define MC_LATENCY_ALLOWANCE_VI2_0				0x398
#define MC_LATENCY_ALLOWANCE_GPU_0				0x3ac
#define MC_LATENCY_ALLOWANCE_SDMMCA_0				0x3b8
#define MC_LATENCY_ALLOWANCE_SDMMCAA_0				0x3bc
#define MC_LATENCY_ALLOWANCE_SDMMC_0				0x3c0
#define MC_LATENCY_ALLOWANCE_SDMMCAB_0				0x3c4
#define MC_LATENCY_ALLOWANCE_GPU2_0				0x3e8
#define MC_LATENCY_ALLOWANCE_NVDEC_0				0x3d8
#define MC_MLL_MPCORER_PTSA_RATE				0x44c
#define MC_FTOP_PTSA_RATE					0x50c
#define MC_EMEM_ARB_TIMING_RFCPB				0x6c0
#define MC_EMEM_ARB_TIMING_CCDMW				0x6c4
#define MC_EMEM_ARB_REFPB_HP_CTRL				0x6f0
#define MC_EMEM_ARB_REFPB_BANK_CTRL				0x6f4
#define MC_PTSA_GRANT_DECREMENT					0x960
#define MC_EMEM_ARB_DHYST_CTRL					0xbcc
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_0			0xbd0
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_1			0xbd4
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_2			0xbd8
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_3			0xbdc
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_4			0xbe0
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_5			0xbe4
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_6			0xbe8
#define MC_EMEM_ARB_DHYST_TIMEOUT_UTIL_7			0xbec

#endif
