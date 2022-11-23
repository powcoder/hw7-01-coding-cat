https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright © 2019 Intel Corporation
 */

#ifndef __I915_GEM_PM_H__
#define __I915_GEM_PM_H__

#include <linux/types.h>

struct drm_i915_private;
struct work_struct;

void i915_gem_resume(struct drm_i915_private *i915);

void i915_gem_idle_work_handler(struct work_struct *work);

void i915_gem_suspend(struct drm_i915_private *i915);
void i915_gem_suspend_late(struct drm_i915_private *i915);

#endif /* __I915_GEM_PM_H__ */
