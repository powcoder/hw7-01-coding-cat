https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2019 Intel Corporation
 */

#ifndef __INTEL_ACPI_H__
#define __INTEL_ACPI_H__

struct drm_i915_private;

#ifdef CONFIG_ACPI
void intel_register_dsm_handler(void);
void intel_unregister_dsm_handler(void);
void intel_acpi_device_id_update(struct drm_i915_private *i915);
#else
static inline void intel_register_dsm_handler(void) { return; }
static inline void intel_unregister_dsm_handler(void) { return; }
static inline
void intel_acpi_device_id_update(struct drm_i915_private *i915) { return; }
#endif /* CONFIG_ACPI */

#endif /* __INTEL_ACPI_H__ */
