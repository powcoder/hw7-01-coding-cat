https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"invalid map_fd for function call",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_ALU64_REG(BPF_MOV, BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_delete_elem),
	BPF_EXIT_INSN(),
	},
	.errstr = "fd 0 is not pointing to valid bpf_map",
	.result = REJECT,
},
{
	"don't check return value before access",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_ST_MEM(BPF_DW, BPF_REG_0, 0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr = "R0 invalid mem access 'map_value_or_null'",
	.result = REJECT,
},
{
	"access memory with incorrect alignment",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 1),
	BPF_ST_MEM(BPF_DW, BPF_REG_0, 4, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr = "misaligned value access",
	.result = REJECT,
	.flags = F_LOAD_WITH_STRICT_ALIGNMENT,
},
{
	"sometimes access memory with incorrect alignment",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 2),
	BPF_ST_MEM(BPF_DW, BPF_REG_0, 0, 0),
	BPF_EXIT_INSN(),
	BPF_ST_MEM(BPF_DW, BPF_REG_0, 0, 1),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr = "R0 invalid mem access",
	.errstr_unpriv = "R0 leaks addr",
	.result = REJECT,
	.flags = F_LOAD_WITH_STRICT_ALIGNMENT,
},
