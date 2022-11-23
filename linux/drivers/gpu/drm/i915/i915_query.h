https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright © 2018 Intel Corporation
 */

#ifndef _I915_QUERY_H_
#define _I915_QUERY_H_

struct drm_device;
struct drm_file;

int i915_query_ioctl(struct drm_device *dev, void *data, struct drm_file *file);

#endif
