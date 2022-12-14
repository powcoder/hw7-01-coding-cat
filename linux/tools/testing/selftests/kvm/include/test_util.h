https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * tools/testing/selftests/kvm/include/test_util.h
 *
 * Copyright (C) 2018, Google LLC.
 */

#ifndef SELFTEST_KVM_TEST_UTIL_H
#define SELFTEST_KVM_TEST_UTIL_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "kselftest.h"

static inline int _no_printf(const char *format, ...) { return 0; }

#ifdef DEBUG
#define pr_debug(...) printf(__VA_ARGS__)
#else
#define pr_debug(...) _no_printf(__VA_ARGS__)
#endif
#ifndef QUIET
#define pr_info(...) printf(__VA_ARGS__)
#else
#define pr_info(...) _no_printf(__VA_ARGS__)
#endif

void print_skip(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

ssize_t test_write(int fd, const void *buf, size_t count);
ssize_t test_read(int fd, void *buf, size_t count);
int test_seq_read(const char *path, char **bufp, size_t *sizep);

void test_assert(bool exp, const char *exp_str,
		 const char *file, unsigned int line, const char *fmt, ...)
		__attribute__((format(printf, 5, 6)));

#define TEST_ASSERT(e, fmt, ...) \
	test_assert((e), #e, __FILE__, __LINE__, fmt, ##__VA_ARGS__)

#define ASSERT_EQ(a, b) do { \
	typeof(a) __a = (a); \
	typeof(b) __b = (b); \
	TEST_ASSERT(__a == __b, \
		    "ASSERT_EQ(%s, %s) failed.\n" \
		    "\t%s is %#lx\n" \
		    "\t%s is %#lx", \
		    #a, #b, #a, (unsigned long) __a, #b, (unsigned long) __b); \
} while (0)

#define TEST_FAIL(fmt, ...) \
	TEST_ASSERT(false, fmt, ##__VA_ARGS__)

size_t parse_size(const char *size);

int64_t timespec_to_ns(struct timespec ts);
struct timespec timespec_add_ns(struct timespec ts, int64_t ns);
struct timespec timespec_add(struct timespec ts1, struct timespec ts2);
struct timespec timespec_sub(struct timespec ts1, struct timespec ts2);
struct timespec timespec_diff_now(struct timespec start);
struct timespec timespec_div(struct timespec ts, int divisor);

#endif /* SELFTEST_KVM_TEST_UTIL_H */
