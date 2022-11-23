https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __API_DEBUG_H__
#define __API_DEBUG_H__

typedef int (*libapi_print_fn_t)(const char *, ...);

void libapi_set_print(libapi_print_fn_t warn,
		      libapi_print_fn_t info,
		      libapi_print_fn_t debug);

#endif /* __API_DEBUG_H__ */
