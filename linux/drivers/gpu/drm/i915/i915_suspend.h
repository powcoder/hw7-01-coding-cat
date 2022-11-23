https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2019 Intel Corporation
 */

#ifndef __I915_SUSPEND_H__
#define __I915_SUSPEND_H__

struct drm_i915_private;

int i915_save_state(struct drm_i915_private *i915);
int i915_restore_state(struct drm_i915_private *i915);

#endif /* __I915_SUSPEND_H__ */
