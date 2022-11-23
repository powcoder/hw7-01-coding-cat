https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2020 Intel Corporation
 */

#ifndef SELFTEST_ENGINE_HEARTBEAT_H
#define SELFTEST_ENGINE_HEARTBEAT_H

struct intel_engine_cs;

void st_engine_heartbeat_disable(struct intel_engine_cs *engine);
void st_engine_heartbeat_enable(struct intel_engine_cs *engine);

#endif /* SELFTEST_ENGINE_HEARTBEAT_H */
