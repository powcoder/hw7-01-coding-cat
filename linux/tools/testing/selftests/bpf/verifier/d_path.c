https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"d_path accept",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_1, BPF_REG_1, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_MOV64_IMM(BPF_REG_6, 0),
	BPF_STX_MEM(BPF_DW, BPF_REG_2, BPF_REG_6, 0),
	BPF_LD_IMM64(BPF_REG_3, 8),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_d_path),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACING,
	.expected_attach_type = BPF_TRACE_FENTRY,
	.kfunc = "dentry_open",
},
{
	"d_path reject",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_1, BPF_REG_1, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_MOV64_IMM(BPF_REG_6, 0),
	BPF_STX_MEM(BPF_DW, BPF_REG_2, BPF_REG_6, 0),
	BPF_LD_IMM64(BPF_REG_3, 8),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_d_path),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "helper call is not allowed in probe",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_TRACING,
	.expected_attach_type = BPF_TRACE_FENTRY,
	.kfunc = "d_path",
},
