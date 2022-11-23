https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
#include <stdint.h>
#include <pthread.h>
#include <sched.h>

int main(void)
{
	int ret = 0;
	pthread_attr_t thread_attr;
	cpu_set_t cs;

	pthread_attr_init(&thread_attr);
	CPU_ZERO(&cs);

	ret = pthread_attr_setaffinity_np(&thread_attr, sizeof(cs), &cs);

	return ret;
}
