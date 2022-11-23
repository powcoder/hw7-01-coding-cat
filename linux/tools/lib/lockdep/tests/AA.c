https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <liblockdep/mutex.h>

int main(void)
{
	pthread_mutex_t a;

	pthread_mutex_init(&a, NULL);

	pthread_mutex_lock(&a);
	pthread_mutex_lock(&a);

	return 0;
}
