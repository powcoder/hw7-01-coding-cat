https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __NITROX_MBX_H
#define __NITROX_MBX_H

int nitrox_mbox_init(struct nitrox_device *ndev);
void nitrox_mbox_cleanup(struct nitrox_device *ndev);
void nitrox_pf2vf_mbox_handler(struct nitrox_device *ndev);

#endif /* __NITROX_MBX_H */
