https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include "blacklist.h"

const char __initdata *const blacklist_hashes[] = {
#include CONFIG_SYSTEM_BLACKLIST_HASH_LIST
	, NULL
};
