https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LIBLOCKDEP_TEST_COMMON_H
#define _LIBLOCKDEP_TEST_COMMON_H

#define LOCK_UNLOCK_2(a, b)			\
	do {					\
		pthread_mutex_lock(&(a));	\
		pthread_mutex_lock(&(b));	\
		pthread_mutex_unlock(&(b));	\
		pthread_mutex_unlock(&(a));	\
	} while(0)

#endif
