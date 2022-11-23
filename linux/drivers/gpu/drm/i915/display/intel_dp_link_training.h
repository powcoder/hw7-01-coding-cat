https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2019 Intel Corporation
 */

#ifndef __INTEL_DP_LINK_TRAINING_H__
#define __INTEL_DP_LINK_TRAINING_H__

#include <drm/drm_dp_helper.h>

struct intel_dp;

void intel_dp_get_adjust_train(struct intel_dp *intel_dp,
			       const u8 link_status[DP_LINK_STATUS_SIZE]);
void intel_dp_start_link_train(struct intel_dp *intel_dp);
void intel_dp_stop_link_train(struct intel_dp *intel_dp);

#endif /* __INTEL_DP_LINK_TRAINING_H__ */
