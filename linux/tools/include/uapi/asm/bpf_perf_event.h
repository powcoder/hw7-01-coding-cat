https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#if defined(__aarch64__)
#include "../../arch/arm64/include/uapi/asm/bpf_perf_event.h"
#elif defined(__s390__)
#include "../../arch/s390/include/uapi/asm/bpf_perf_event.h"
#elif defined(__riscv)
#include "../../arch/riscv/include/uapi/asm/bpf_perf_event.h"
#else
#include <uapi/asm-generic/bpf_perf_event.h>
#endif
