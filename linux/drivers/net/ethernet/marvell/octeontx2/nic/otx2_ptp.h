https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/* Marvell OcteonTx2 PTP support for ethernet driver */

#ifndef OTX2_PTP_H
#define OTX2_PTP_H

int otx2_ptp_init(struct otx2_nic *pfvf);
void otx2_ptp_destroy(struct otx2_nic *pfvf);

int otx2_ptp_clock_index(struct otx2_nic *pfvf);
int otx2_ptp_tstamp2time(struct otx2_nic *pfvf, u64 tstamp, u64 *tsns);

#endif
