https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *     http://www.samsung.com/
 *
 * Register definition file for Samsung MFC V10.x Interface (FIMV) driver
 *
 */

#ifndef _REGS_MFC_V10_H
#define _REGS_MFC_V10_H

#include <linux/sizes.h>
#include "regs-mfc-v8.h"

/* MFCv10 register definitions*/
#define S5P_FIMV_MFC_CLOCK_OFF_V10			0x7120
#define S5P_FIMV_MFC_STATE_V10				0x7124
#define S5P_FIMV_D_STATIC_BUFFER_ADDR_V10		0xF570
#define S5P_FIMV_D_STATIC_BUFFER_SIZE_V10		0xF574
#define S5P_FIMV_E_NUM_T_LAYER_V10			0xFBAC
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER0_V10		0xFBB0
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER1_V10		0xFBB4
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER2_V10		0xFBB8
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER3_V10		0xFBBC
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER4_V10		0xFBC0
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER5_V10		0xFBC4
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER6_V10		0xFBC8
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER0_V10	0xFD18
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER1_V10	0xFD1C
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER2_V10	0xFD20
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER3_V10	0xFD24
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER4_V10	0xFD28
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER5_V10	0xFD2C
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER6_V10	0xFD30
#define S5P_FIMV_E_HEVC_OPTIONS_V10			0xFDD4
#define S5P_FIMV_E_HEVC_REFRESH_PERIOD_V10		0xFDD8
#define S5P_FIMV_E_HEVC_CHROMA_QP_OFFSET_V10		0xFDDC
#define S5P_FIMV_E_HEVC_LF_BETA_OFFSET_DIV2_V10		0xFDE0
#define S5P_FIMV_E_HEVC_LF_TC_OFFSET_DIV2_V10		0xFDE4
#define S5P_FIMV_E_HEVC_NAL_CONTROL_V10			0xFDE8

/* MFCv10 Context buffer sizes */
#define MFC_CTX_BUF_SIZE_V10		(30 * SZ_1K)
#define MFC_H264_DEC_CTX_BUF_SIZE_V10	(2 * SZ_1M)
#define MFC_OTHER_DEC_CTX_BUF_SIZE_V10	(20 * SZ_1K)
#define MFC_H264_ENC_CTX_BUF_SIZE_V10	(100 * SZ_1K)
#define MFC_HEVC_ENC_CTX_BUF_SIZE_V10	(30 * SZ_1K)
#define MFC_OTHER_ENC_CTX_BUF_SIZE_V10  (15 * SZ_1K)

/* MFCv10 variant defines */
#define MAX_FW_SIZE_V10		(SZ_1M)
#define MAX_CPB_SIZE_V10	(3 * SZ_1M)
#define MFC_VERSION_V10		0xA0
#define MFC_NUM_PORTS_V10	1

/* MFCv10 codec defines*/
#define S5P_FIMV_CODEC_HEVC_DEC		17
#define S5P_FIMV_CODEC_VP9_DEC		18
#define S5P_FIMV_CODEC_HEVC_ENC         26

/* Decoder buffer size for MFC v10 */
#define DEC_VP9_STATIC_BUFFER_SIZE	20480

/* Encoder buffer size for MFC v10.0 */
#define ENC_V100_BASE_SIZE(x, y) \
	(((x + 3) * (y + 3) * 8) \
	+  ((y * 64) + 1280) * DIV_ROUND_UP(x, 8))

#define ENC_V100_H264_ME_SIZE(x, y) \
	(ENC_V100_BASE_SIZE(x, y) \
	+ (DIV_ROUND_UP(x * y, 64) * 32))

#define ENC_V100_MPEG4_ME_SIZE(x, y) \
	(ENC_V100_BASE_SIZE(x, y) \
	+ (DIV_ROUND_UP(x * y, 128) * 16))

#define ENC_V100_VP8_ME_SIZE(x, y) \
	ENC_V100_BASE_SIZE(x, y)

#define ENC_V100_HEVC_ME_SIZE(x, y)	\
	(((x + 3) * (y + 3) * 32)	\
	 + ((y * 128) + 1280) * DIV_ROUND_UP(x, 4))

#endif /*_REGS_MFC_V10_H*/

