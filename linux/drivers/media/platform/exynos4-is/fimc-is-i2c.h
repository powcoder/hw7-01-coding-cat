https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Samsung EXYNOS4x12 FIMC-IS (Imaging Subsystem) driver
 *
 * Copyright (C) 2013 Samsung Electronics Co., Ltd.
 * Sylwester Nawrocki <s.nawrocki@samsung.com>
 */

#define FIMC_IS_I2C_COMPATIBLE	"samsung,exynos4212-i2c-isp"

int fimc_is_register_i2c_driver(void);
void fimc_is_unregister_i2c_driver(void);
