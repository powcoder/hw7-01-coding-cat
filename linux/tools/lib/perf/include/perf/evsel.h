https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LIBPERF_EVSEL_H
#define __LIBPERF_EVSEL_H

#include <stdint.h>
#include <perf/core.h>

struct perf_evsel;
struct perf_event_attr;
struct perf_cpu_map;
struct perf_thread_map;

struct perf_counts_values {
	union {
		struct {
			uint64_t val;
			uint64_t ena;
			uint64_t run;
		};
		uint64_t values[3];
	};
};

LIBPERF_API struct perf_evsel *perf_evsel__new(struct perf_event_attr *attr);
LIBPERF_API void perf_evsel__delete(struct perf_evsel *evsel);
LIBPERF_API int perf_evsel__open(struct perf_evsel *evsel, struct perf_cpu_map *cpus,
				 struct perf_thread_map *threads);
LIBPERF_API void perf_evsel__close(struct perf_evsel *evsel);
LIBPERF_API void perf_evsel__close_cpu(struct perf_evsel *evsel, int cpu);
LIBPERF_API int perf_evsel__read(struct perf_evsel *evsel, int cpu, int thread,
				 struct perf_counts_values *count);
LIBPERF_API int perf_evsel__enable(struct perf_evsel *evsel);
LIBPERF_API int perf_evsel__enable_cpu(struct perf_evsel *evsel, int cpu);
LIBPERF_API int perf_evsel__disable(struct perf_evsel *evsel);
LIBPERF_API int perf_evsel__disable_cpu(struct perf_evsel *evsel, int cpu);
LIBPERF_API struct perf_cpu_map *perf_evsel__cpus(struct perf_evsel *evsel);
LIBPERF_API struct perf_thread_map *perf_evsel__threads(struct perf_evsel *evsel);
LIBPERF_API struct perf_event_attr *perf_evsel__attr(struct perf_evsel *evsel);

#endif /* __LIBPERF_EVSEL_H */
