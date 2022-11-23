https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: MIT
/*
 * Copyright © 2020 Intel Corporation
 */

#include "i915_drv.h"

unsigned long
i915_fence_context_timeout(const struct drm_i915_private *i915, u64 context)
{
	if (context && IS_ACTIVE(CONFIG_DRM_I915_FENCE_TIMEOUT))
		return msecs_to_jiffies_timeout(CONFIG_DRM_I915_FENCE_TIMEOUT);

	return 0;
}
