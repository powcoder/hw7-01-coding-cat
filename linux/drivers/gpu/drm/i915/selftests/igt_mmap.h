https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright © 2019 Intel Corporation
 */

#ifndef IGT_MMAP_H
#define IGT_MMAP_H

struct drm_i915_private;
struct drm_vma_offset_node;

unsigned long igt_mmap_node(struct drm_i915_private *i915,
			    struct drm_vma_offset_node *node,
			    unsigned long addr,
			    unsigned long prot,
			    unsigned long flags);

#endif /* IGT_MMAP_H */
