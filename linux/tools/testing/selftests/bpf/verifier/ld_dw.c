https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"ld_dw: xor semi-random 64 bit imms, test 1",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_rand_ld_dw,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 4090,
},
{
	"ld_dw: xor semi-random 64 bit imms, test 2",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_rand_ld_dw,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 2047,
},
{
	"ld_dw: xor semi-random 64 bit imms, test 3",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_rand_ld_dw,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 511,
},
{
	"ld_dw: xor semi-random 64 bit imms, test 4",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_rand_ld_dw,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 5,
},
{
	"ld_dw: xor semi-random 64 bit imms, test 5",
	.insns = { },
	.data = { },
	.fill_helper = bpf_fill_rand_ld_dw,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 1000000 - 6,
},
