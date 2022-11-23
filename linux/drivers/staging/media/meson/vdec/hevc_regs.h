https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 */

#ifndef __MESON_VDEC_HEVC_REGS_H_
#define __MESON_VDEC_HEVC_REGS_H_

#define HEVC_ASSIST_MMU_MAP_ADDR 0xc024

#define HEVC_ASSIST_MBOX1_CLR_REG 0xc1d4
#define HEVC_ASSIST_MBOX1_MASK 0xc1d8

#define HEVC_ASSIST_SCRATCH_0 0xc300
#define HEVC_ASSIST_SCRATCH_1 0xc304
#define HEVC_ASSIST_SCRATCH_2 0xc308
#define HEVC_ASSIST_SCRATCH_3 0xc30c
#define HEVC_ASSIST_SCRATCH_4 0xc310
#define HEVC_ASSIST_SCRATCH_5 0xc314
#define HEVC_ASSIST_SCRATCH_6 0xc318
#define HEVC_ASSIST_SCRATCH_7 0xc31c
#define HEVC_ASSIST_SCRATCH_8 0xc320
#define HEVC_ASSIST_SCRATCH_9 0xc324
#define HEVC_ASSIST_SCRATCH_A 0xc328
#define HEVC_ASSIST_SCRATCH_B 0xc32c
#define HEVC_ASSIST_SCRATCH_C 0xc330
#define HEVC_ASSIST_SCRATCH_D 0xc334
#define HEVC_ASSIST_SCRATCH_E 0xc338
#define HEVC_ASSIST_SCRATCH_F 0xc33c
#define HEVC_ASSIST_SCRATCH_G 0xc340
#define HEVC_ASSIST_SCRATCH_H 0xc344
#define HEVC_ASSIST_SCRATCH_I 0xc348
#define HEVC_ASSIST_SCRATCH_J 0xc34c
#define HEVC_ASSIST_SCRATCH_K 0xc350
#define HEVC_ASSIST_SCRATCH_L 0xc354
#define HEVC_ASSIST_SCRATCH_M 0xc358
#define HEVC_ASSIST_SCRATCH_N 0xc35c

#define HEVC_PARSER_VERSION 0xc400
#define HEVC_STREAM_CONTROL 0xc404
#define HEVC_STREAM_START_ADDR 0xc408
#define HEVC_STREAM_END_ADDR 0xc40c
#define HEVC_STREAM_WR_PTR 0xc410
#define HEVC_STREAM_RD_PTR 0xc414
#define HEVC_STREAM_LEVEL 0xc418
#define HEVC_STREAM_FIFO_CTL 0xc41c
#define HEVC_SHIFT_CONTROL 0xc420
#define HEVC_SHIFT_STARTCODE 0xc424
#define HEVC_SHIFT_EMULATECODE 0xc428
#define HEVC_SHIFT_STATUS 0xc42c
#define HEVC_SHIFTED_DATA 0xc430
#define HEVC_SHIFT_BYTE_COUNT 0xc434
#define HEVC_SHIFT_COMMAND 0xc438
#define HEVC_ELEMENT_RESULT 0xc43c
#define HEVC_CABAC_CONTROL 0xc440
#define HEVC_PARSER_SLICE_INFO 0xc444
#define HEVC_PARSER_CMD_WRITE 0xc448
#define HEVC_PARSER_CORE_CONTROL 0xc44c
#define HEVC_PARSER_CMD_FETCH 0xc450
#define HEVC_PARSER_CMD_STATUS 0xc454
#define HEVC_PARSER_LCU_INFO 0xc458
#define HEVC_PARSER_HEADER_INFO 0xc45c
#define HEVC_PARSER_INT_CONTROL 0xc480
#define HEVC_PARSER_INT_STATUS 0xc484
#define HEVC_PARSER_IF_CONTROL 0xc488
#define HEVC_PARSER_PICTURE_SIZE 0xc48c
#define HEVC_PARSER_LCU_START 0xc490
#define HEVC_PARSER_HEADER_INFO2 0xc494
#define HEVC_PARSER_QUANT_READ 0xc498
#define HEVC_PARSER_RESERVED_27 0xc49c
#define HEVC_PARSER_CMD_SKIP_0 0xc4a0
#define HEVC_PARSER_CMD_SKIP_1 0xc4a4
#define HEVC_PARSER_CMD_SKIP_2 0xc4a8
#define HEVC_SAO_IF_STATUS 0xc4c0
#define HEVC_SAO_IF_DATA_Y 0xc4c4
#define HEVC_SAO_IF_DATA_U 0xc4c8
#define HEVC_SAO_IF_DATA_V 0xc4cc
#define HEVC_STREAM_SWAP_ADDR 0xc4d0
#define HEVC_STREAM_SWAP_CTRL 0xc4d4
#define HEVC_IQIT_IF_WAIT_CNT 0xc4d8
#define HEVC_MPRED_IF_WAIT_CNT 0xc4dc
#define HEVC_SAO_IF_WAIT_CNT 0xc4e0

#define HEVC_MPRED_VERSION 0xc800
#define HEVC_MPRED_CTRL0 0xc804
	#define MPRED_CTRL0_NEW_PIC	BIT(2)
	#define MPRED_CTRL0_NEW_TILE	BIT(3)
	#define MPRED_CTRL0_NEW_SLI_SEG	BIT(4)
	#define MPRED_CTRL0_TMVP	BIT(5)
	#define MPRED_CTRL0_LDC		BIT(6)
	#define MPRED_CTRL0_COL_FROM_L0	BIT(7)
	#define MPRED_CTRL0_ABOVE_EN	BIT(9)
	#define MPRED_CTRL0_MV_WR_EN	BIT(10)
	#define MPRED_CTRL0_MV_RD_EN	BIT(11)
	#define MPRED_CTRL0_BUF_LINEAR	BIT(13)
#define HEVC_MPRED_CTRL1 0xc808
#define HEVC_MPRED_INT_EN 0xc80c
#define HEVC_MPRED_INT_STATUS 0xc810
#define HEVC_MPRED_PIC_SIZE 0xc814
#define HEVC_MPRED_PIC_SIZE_LCU 0xc818
#define HEVC_MPRED_TILE_START 0xc81c
#define HEVC_MPRED_TILE_SIZE_LCU 0xc820
#define HEVC_MPRED_REF_NUM 0xc824
#define HEVC_MPRED_REF_EN_L0 0xc830
#define HEVC_MPRED_REF_EN_L1 0xc834
#define HEVC_MPRED_COLREF_EN_L0 0xc838
#define HEVC_MPRED_COLREF_EN_L1 0xc83c
#define HEVC_MPRED_AXI_WCTRL 0xc840
#define HEVC_MPRED_AXI_RCTRL 0xc844
#define HEVC_MPRED_ABV_START_ADDR 0xc848
#define HEVC_MPRED_MV_WR_START_ADDR 0xc84c
#define HEVC_MPRED_MV_RD_START_ADDR 0xc850
#define HEVC_MPRED_MV_WPTR 0xc854
#define HEVC_MPRED_MV_RPTR 0xc858
#define HEVC_MPRED_MV_WR_ROW_JUMP 0xc85c
#define HEVC_MPRED_MV_RD_ROW_JUMP 0xc860
#define HEVC_MPRED_CURR_LCU 0xc864
#define HEVC_MPRED_ABV_WPTR 0xc868
#define HEVC_MPRED_ABV_RPTR 0xc86c
#define HEVC_MPRED_CTRL2 0xc870
#define HEVC_MPRED_CTRL3 0xc874
#define HEVC_MPRED_L0_REF00_POC 0xc880
#define HEVC_MPRED_L1_REF00_POC 0xc8c0

#define HEVC_MPRED_CTRL4 0xc930

#define HEVC_MPRED_CUR_POC 0xc980
#define HEVC_MPRED_COL_POC 0xc984
#define HEVC_MPRED_MV_RD_END_ADDR 0xc988

#define HEVC_MSP 0xcc00
#define HEVC_MPSR 0xcc04
#define HEVC_MCPU_INTR_MSK 0xcc10
#define HEVC_MCPU_INTR_REQ 0xcc14
#define HEVC_CPSR 0xcc84

#define HEVC_IMEM_DMA_CTRL 0xcd00
#define HEVC_IMEM_DMA_ADR 0xcd04
#define HEVC_IMEM_DMA_COUNT 0xcd08

#define HEVCD_IPP_TOP_CNTL 0xd000
#define HEVCD_IPP_LINEBUFF_BASE 0xd024
#define HEVCD_IPP_AXIIF_CONFIG 0xd02c

#define VP9D_MPP_REF_SCALE_ENBL		0xd104
#define VP9D_MPP_REFINFO_TBL_ACCCONFIG	0xd108
#define VP9D_MPP_REFINFO_DATA		0xd10c

#define HEVCD_MPP_ANC2AXI_TBL_CONF_ADDR 0xd180
#define HEVCD_MPP_ANC2AXI_TBL_CMD_ADDR 0xd184
#define HEVCD_MPP_ANC2AXI_TBL_DATA 0xd190

#define HEVCD_MPP_ANC_CANVAS_ACCCONFIG_ADDR 0xd300
#define HEVCD_MPP_ANC_CANVAS_DATA_ADDR 0xd304
#define HEVCD_MPP_DECOMP_CTL1 0xd308
#define HEVCD_MPP_DECOMP_CTL2 0xd30c
#define HEVCD_MCRCC_CTL1 0xd3c0
#define HEVCD_MCRCC_CTL2 0xd3c4
#define HEVCD_MCRCC_CTL3 0xd3c8

#define HEVC_DBLK_CFG0 0xd400
#define HEVC_DBLK_CFG1 0xd404
#define HEVC_DBLK_CFG2 0xd408
#define HEVC_DBLK_CFG3 0xd40c
#define HEVC_DBLK_CFG4 0xd410
#define HEVC_DBLK_CFG5 0xd414
#define HEVC_DBLK_CFG6 0xd418
#define HEVC_DBLK_CFG7 0xd41c
#define HEVC_DBLK_CFG8 0xd420
#define HEVC_DBLK_CFG9 0xd424
#define HEVC_DBLK_CFGA 0xd428
#define HEVC_DBLK_STS0 0xd42c
#define HEVC_DBLK_CFGB 0xd42c
#define HEVC_DBLK_STS1 0xd430
#define HEVC_DBLK_CFGE 0xd438

#define HEVC_SAO_VERSION 0xd800
#define HEVC_SAO_CTRL0 0xd804
#define HEVC_SAO_CTRL1 0xd808
#define HEVC_SAO_PIC_SIZE 0xd814
#define HEVC_SAO_PIC_SIZE_LCU 0xd818
#define HEVC_SAO_TILE_START 0xd81c
#define HEVC_SAO_TILE_SIZE_LCU 0xd820
#define HEVC_SAO_Y_START_ADDR 0xd82c
#define HEVC_SAO_Y_LENGTH 0xd830
#define HEVC_SAO_C_START_ADDR 0xd834
#define HEVC_SAO_C_LENGTH 0xd838
#define HEVC_SAO_Y_WPTR 0xd83c
#define HEVC_SAO_C_WPTR 0xd840
#define HEVC_SAO_ABV_START_ADDR 0xd844
#define HEVC_SAO_VB_WR_START_ADDR 0xd848
#define HEVC_SAO_VB_RD_START_ADDR 0xd84c
#define HEVC_SAO_ABV_WPTR 0xd850
#define HEVC_SAO_ABV_RPTR 0xd854
#define HEVC_SAO_VB_WPTR 0xd858
#define HEVC_SAO_VB_RPTR 0xd85c
#define HEVC_SAO_CTRL2 0xd880
#define HEVC_SAO_CTRL3 0xd884
#define HEVC_SAO_CTRL4 0xd888
#define HEVC_SAO_CTRL5 0xd88c
#define HEVC_SAO_CTRL6 0xd890
#define HEVC_SAO_CTRL7 0xd894
#define HEVC_CM_BODY_START_ADDR 0xd898
#define HEVC_CM_BODY_LENGTH 0xd89c
#define HEVC_CM_HEADER_START_ADDR 0xd8a0
#define HEVC_CM_HEADER_LENGTH 0xd8a4
#define HEVC_CM_HEADER_OFFSET 0xd8ac
#define HEVC_SAO_MMU_VH0_ADDR 0xd8e8
#define HEVC_SAO_MMU_VH1_ADDR 0xd8ec

#define HEVC_IQIT_CLK_RST_CTRL 0xdc00
#define HEVC_IQIT_SCALELUT_WR_ADDR 0xdc08
#define HEVC_IQIT_SCALELUT_RD_ADDR 0xdc0c
#define HEVC_IQIT_SCALELUT_DATA 0xdc10

#define HEVC_PSCALE_CTRL 0xe444

#endif
