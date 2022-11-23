https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: LGPL-2.1

#include <stdlib.h>
#include <linux/zalloc.h>

void *zalloc(size_t size)
{
	return calloc(1, size);
}

void __zfree(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
