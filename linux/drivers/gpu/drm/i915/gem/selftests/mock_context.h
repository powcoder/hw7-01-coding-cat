https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright © 2016 Intel Corporation
 */

#ifndef __MOCK_CONTEXT_H
#define __MOCK_CONTEXT_H

struct file;
struct drm_i915_private;
struct intel_engine_cs;

void mock_init_contexts(struct drm_i915_private *i915);

struct i915_gem_context *
mock_context(struct drm_i915_private *i915,
	     const char *name);

void mock_context_close(struct i915_gem_context *ctx);

struct i915_gem_context *
live_context(struct drm_i915_private *i915, struct file *file);

struct i915_gem_context *
live_context_for_engine(struct intel_engine_cs *engine, struct file *file);

struct i915_gem_context *kernel_context(struct drm_i915_private *i915);
void kernel_context_close(struct i915_gem_context *ctx);

#endif /* !__MOCK_CONTEXT_H */
