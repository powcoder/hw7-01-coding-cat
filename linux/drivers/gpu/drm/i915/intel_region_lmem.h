https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2019 Intel Corporation
 */

#ifndef __INTEL_REGION_LMEM_H
#define __INTEL_REGION_LMEM_H

struct drm_i915_private;

extern const struct intel_memory_region_ops intel_region_lmem_ops;

struct intel_memory_region *
intel_setup_fake_lmem(struct drm_i915_private *i915);

#endif /* !__INTEL_REGION_LMEM_H */
