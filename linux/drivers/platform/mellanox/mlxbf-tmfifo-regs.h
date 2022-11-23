https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019, Mellanox Technologies. All rights reserved.
 */

#ifndef __MLXBF_TMFIFO_REGS_H__
#define __MLXBF_TMFIFO_REGS_H__

#include <linux/types.h>
#include <linux/bits.h>

#define MLXBF_TMFIFO_TX_DATA				0x00
#define MLXBF_TMFIFO_TX_STS				0x08
#define MLXBF_TMFIFO_TX_STS__LENGTH			0x0001
#define MLXBF_TMFIFO_TX_STS__COUNT_SHIFT		0
#define MLXBF_TMFIFO_TX_STS__COUNT_WIDTH		9
#define MLXBF_TMFIFO_TX_STS__COUNT_RESET_VAL		0
#define MLXBF_TMFIFO_TX_STS__COUNT_RMASK		GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_TX_STS__COUNT_MASK			GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_TX_CTL				0x10
#define MLXBF_TMFIFO_TX_CTL__LENGTH			0x0001
#define MLXBF_TMFIFO_TX_CTL__LWM_SHIFT			0
#define MLXBF_TMFIFO_TX_CTL__LWM_WIDTH			8
#define MLXBF_TMFIFO_TX_CTL__LWM_RESET_VAL		128
#define MLXBF_TMFIFO_TX_CTL__LWM_RMASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_TX_CTL__LWM_MASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_TX_CTL__HWM_SHIFT			8
#define MLXBF_TMFIFO_TX_CTL__HWM_WIDTH			8
#define MLXBF_TMFIFO_TX_CTL__HWM_RESET_VAL		128
#define MLXBF_TMFIFO_TX_CTL__HWM_RMASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_TX_CTL__HWM_MASK			GENMASK_ULL(15, 8)
#define MLXBF_TMFIFO_TX_CTL__MAX_ENTRIES_SHIFT		32
#define MLXBF_TMFIFO_TX_CTL__MAX_ENTRIES_WIDTH		9
#define MLXBF_TMFIFO_TX_CTL__MAX_ENTRIES_RESET_VAL	256
#define MLXBF_TMFIFO_TX_CTL__MAX_ENTRIES_RMASK		GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_TX_CTL__MAX_ENTRIES_MASK		GENMASK_ULL(40, 32)
#define MLXBF_TMFIFO_RX_DATA				0x00
#define MLXBF_TMFIFO_RX_STS				0x08
#define MLXBF_TMFIFO_RX_STS__LENGTH			0x0001
#define MLXBF_TMFIFO_RX_STS__COUNT_SHIFT		0
#define MLXBF_TMFIFO_RX_STS__COUNT_WIDTH		9
#define MLXBF_TMFIFO_RX_STS__COUNT_RESET_VAL		0
#define MLXBF_TMFIFO_RX_STS__COUNT_RMASK		GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_RX_STS__COUNT_MASK			GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_RX_CTL				0x10
#define MLXBF_TMFIFO_RX_CTL__LENGTH			0x0001
#define MLXBF_TMFIFO_RX_CTL__LWM_SHIFT			0
#define MLXBF_TMFIFO_RX_CTL__LWM_WIDTH			8
#define MLXBF_TMFIFO_RX_CTL__LWM_RESET_VAL		128
#define MLXBF_TMFIFO_RX_CTL__LWM_RMASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_RX_CTL__LWM_MASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_RX_CTL__HWM_SHIFT			8
#define MLXBF_TMFIFO_RX_CTL__HWM_WIDTH			8
#define MLXBF_TMFIFO_RX_CTL__HWM_RESET_VAL		128
#define MLXBF_TMFIFO_RX_CTL__HWM_RMASK			GENMASK_ULL(7, 0)
#define MLXBF_TMFIFO_RX_CTL__HWM_MASK			GENMASK_ULL(15, 8)
#define MLXBF_TMFIFO_RX_CTL__MAX_ENTRIES_SHIFT		32
#define MLXBF_TMFIFO_RX_CTL__MAX_ENTRIES_WIDTH		9
#define MLXBF_TMFIFO_RX_CTL__MAX_ENTRIES_RESET_VAL	256
#define MLXBF_TMFIFO_RX_CTL__MAX_ENTRIES_RMASK		GENMASK_ULL(8, 0)
#define MLXBF_TMFIFO_RX_CTL__MAX_ENTRIES_MASK		GENMASK_ULL(40, 32)

#endif /* !defined(__MLXBF_TMFIFO_REGS_H__) */