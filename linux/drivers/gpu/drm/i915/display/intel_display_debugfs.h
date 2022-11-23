https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2020 Intel Corporation
 */

#ifndef __INTEL_DISPLAY_DEBUGFS_H__
#define __INTEL_DISPLAY_DEBUGFS_H__

struct drm_connector;
struct drm_i915_private;

#ifdef CONFIG_DEBUG_FS
void intel_display_debugfs_register(struct drm_i915_private *i915);
int intel_connector_debugfs_add(struct drm_connector *connector);
#else
static inline void intel_display_debugfs_register(struct drm_i915_private *i915) {}
static inline int intel_connector_debugfs_add(struct drm_connector *connector) { return 0; }
#endif

#endif /* __INTEL_DISPLAY_DEBUGFS_H__ */
