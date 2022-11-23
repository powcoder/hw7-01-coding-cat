https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * See lib/crc64.c for the related specification and polynomial arithmetic.
 */
#ifndef _LINUX_CRC64_H
#define _LINUX_CRC64_H

#include <linux/types.h>

u64 __pure crc64_be(u64 crc, const void *p, size_t len);
#endif /* _LINUX_CRC64_H */
