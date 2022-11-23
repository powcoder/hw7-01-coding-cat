https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * KXCJK-1013 3-axis accelerometer Interface
 * Copyright (c) 2014, Intel Corporation.
 */

#ifndef __IIO_KXCJK_1013_H__
#define __IIO_KXCJK_1013_H__

#include <linux/iio/iio.h>

struct kxcjk_1013_platform_data {
	bool active_high_intr;
	struct iio_mount_matrix orientation;
};

#endif
