https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef DASD_MOD_H
#define DASD_MOD_H

#include <asm/dasd.h>

struct gendisk;

extern int dasd_biodasdinfo(struct gendisk *disk, dasd_information2_t *info);

#endif
