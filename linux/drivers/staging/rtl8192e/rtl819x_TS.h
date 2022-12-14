https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright(c) 2008 - 2010 Realtek Corporation. All rights reserved.
 *
 * Contact Information: wlanfae <wlanfae@realtek.com>
 */
#ifndef _TSTYPE_H_
#define _TSTYPE_H_
#include "rtl819x_Qos.h"
#define TS_ADDBA_DELAY		60

#define TOTAL_TS_NUM		16
#define TCLAS_NUM		4

enum tr_select {
	TX_DIR = 0,
	RX_DIR = 1,
};

struct ts_common_info {
	struct list_head		List;
	struct timer_list		SetupTimer;
	struct timer_list		InactTimer;
	u8				Addr[ETH_ALEN];
	union tspec_body TSpec;
	union qos_tclas TClass[TCLAS_NUM];
	u8				TClasProc;
	u8				TClasNum;
};

struct tx_ts_record {
	struct ts_common_info TsCommonInfo;
	u16				TxCurSeq;
	struct ba_record TxPendingBARecord;
	struct ba_record TxAdmittedBARecord;
	u8				bAddBaReqInProgress;
	u8				bAddBaReqDelayed;
	u8				bUsingBa;
	u8				bDisable_AddBa;
	struct timer_list		TsAddBaTimer;
	u8				num;
};

struct rx_ts_record {
	struct ts_common_info TsCommonInfo;
	u16				RxIndicateSeq;
	u16				RxTimeoutIndicateSeq;
	struct list_head		RxPendingPktList;
	struct timer_list		RxPktPendingTimer;
	struct ba_record RxAdmittedBARecord;
	u16				RxLastSeqNum;
	u8				RxLastFragNum;
	u8				num;
};



#endif
