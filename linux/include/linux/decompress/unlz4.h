https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef DECOMPRESS_UNLZ4_H
#define DECOMPRESS_UNLZ4_H

int unlz4(unsigned char *inbuf, long len,
	long (*fill)(void*, unsigned long),
	long (*flush)(void*, unsigned long),
	unsigned char *output,
	long *pos,
	void(*error)(char *x));
#endif
