https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef INSN_H
#define INSN_H 1

struct perf_sample;
struct machine;
struct thread;

void arch_fetch_insn(struct perf_sample *sample,
		     struct thread *thread,
		     struct machine *machine);

#endif
