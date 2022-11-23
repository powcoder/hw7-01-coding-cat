https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef TIMEOUT_H
#define TIMEOUT_H

enum {
	/* Default timeout */
	TIMEOUT = 10 /* seconds */
};

void sigalrm(int signo);
void timeout_begin(unsigned int seconds);
void timeout_check(const char *operation);
void timeout_end(void);

#endif /* TIMEOUT_H */
