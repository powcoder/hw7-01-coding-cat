https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"bpf_get_stack return R0 within range",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 28),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_MOV64_IMM(BPF_REG_9, sizeof(struct test_val)/2),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_6),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_7),
	BPF_MOV64_IMM(BPF_REG_3, sizeof(struct test_val)/2),
	BPF_MOV64_IMM(BPF_REG_4, 256),
	BPF_EMIT_CALL(BPF_FUNC_get_stack),
	BPF_MOV64_IMM(BPF_REG_1, 0),
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_0),
	BPF_ALU64_IMM(BPF_LSH, BPF_REG_8, 32),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_8, 32),
	BPF_JMP_REG(BPF_JSGT, BPF_REG_1, BPF_REG_8, 16),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_9, BPF_REG_8),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_7),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_2, BPF_REG_8),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_9),
	BPF_ALU64_IMM(BPF_LSH, BPF_REG_1, 32),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_1, 32),
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_2),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_3, BPF_REG_1),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_7),
	BPF_MOV64_IMM(BPF_REG_5, sizeof(struct test_val)/2),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_1, BPF_REG_5),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 4),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_6),
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_9),
	BPF_MOV64_IMM(BPF_REG_4, 0),
	BPF_EMIT_CALL(BPF_FUNC_get_stack),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
