https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <zstd.h>

int main(void)
{
	ZSTD_CStream	*cstream;

	cstream = ZSTD_createCStream();
	ZSTD_freeCStream(cstream);

	return 0;
}
