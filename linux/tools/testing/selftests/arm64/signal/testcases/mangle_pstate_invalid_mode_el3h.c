https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2019 ARM Limited
 *
 * Try to mangle the ucontext from inside a signal handler, toggling
 * the mode bit to escalate exception level: this attempt must be spotted
 * by Kernel and the test case is expected to be termninated via SEGV.
 */

#include "test_signals_utils.h"
#include "testcases.h"

#include "mangle_pstate_invalid_mode_template.h"

DEFINE_TESTCASE_MANGLE_PSTATE_INVALID_MODE(3h);
