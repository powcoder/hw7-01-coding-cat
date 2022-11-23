https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <string.h>
#include "tests/tests.h"
#include "arch-tests.h"

struct test arch_tests[] = {
#ifdef HAVE_DWARF_UNWIND_SUPPORT
	{
		.desc = "DWARF unwind",
		.func = test__dwarf_unwind,
	},
#endif
	{
		.desc = "Vectors page",
		.func = test__vectors_page,
	},
	{
		.func = NULL,
	},
};
