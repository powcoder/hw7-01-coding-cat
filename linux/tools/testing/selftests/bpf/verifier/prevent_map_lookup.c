https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"prevent map lookup in stack trace",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_EXIT_INSN(),
	},
	.fixup_map_stacktrace = { 3 },
	.result = REJECT,
	.errstr = "cannot pass map_type 7 into func bpf_map_lookup_elem",
	.prog_type = BPF_PROG_TYPE_PERF_EVENT,
},
{
	"prevent map lookup in prog array",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_EXIT_INSN(),
	},
	.fixup_prog2 = { 3 },
	.result = REJECT,
	.errstr = "cannot pass map_type 3 into func bpf_map_lookup_elem",
},
