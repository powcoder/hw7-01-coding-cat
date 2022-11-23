https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <linux/compiler.h>
#include "trace.h"

noinline __noclone int DYN_FTRACE_TEST_NAME(void)
{
	/* used to call mcount */
	return 0;
}

noinline __noclone int DYN_FTRACE_TEST_NAME2(void)
{
	/* used to call mcount */
	return 0;
}
