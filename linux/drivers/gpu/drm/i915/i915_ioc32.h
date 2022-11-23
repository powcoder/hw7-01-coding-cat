https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2020 Intel Corporation
 */

#ifndef __I915_IOC32_H__
#define __I915_IOC32_H__

#ifdef CONFIG_COMPAT
struct file;
long i915_ioc32_compat_ioctl(struct file *filp, unsigned int cmd,
			     unsigned long arg);
#else
#define i915_ioc32_compat_ioctl NULL
#endif

#endif /* __I915_IOC32_H__ */
