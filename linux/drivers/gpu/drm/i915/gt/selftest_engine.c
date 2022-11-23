https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * SPDX-License-Identifier: GPL-2.0
 *
 * Copyright © 2018 Intel Corporation
 */

#include "i915_selftest.h"
#include "selftest_engine.h"

int intel_engine_live_selftests(struct drm_i915_private *i915)
{
	static int (* const tests[])(struct intel_gt *) = {
		live_engine_pm_selftests,
		NULL,
	};
	struct intel_gt *gt = &i915->gt;
	typeof(*tests) *fn;

	for (fn = tests; *fn; fn++) {
		int err;

		err = (*fn)(gt);
		if (err)
			return err;
	}

	return 0;
}
