https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SAMPLE_RAW_H
#define __SAMPLE_RAW_H 1

struct evlist;
union perf_event;
struct perf_sample;

void perf_evlist__s390_sample_raw(struct evlist *evlist,
				  union perf_event *event,
				  struct perf_sample *sample);

void perf_evlist__init_trace_event_sample_raw(struct evlist *evlist);
#endif /* __PERF_EVLIST_H */
