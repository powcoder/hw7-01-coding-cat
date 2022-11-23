https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LIBPERF_INTERNAL_LIB_H
#define __LIBPERF_INTERNAL_LIB_H

#include <sys/types.h>

extern unsigned int page_size;

ssize_t readn(int fd, void *buf, size_t n);
ssize_t writen(int fd, const void *buf, size_t n);

#endif /* __LIBPERF_INTERNAL_CPUMAP_H */
