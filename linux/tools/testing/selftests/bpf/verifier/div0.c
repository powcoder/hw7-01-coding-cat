https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"DIV32 by 0, zero check 1",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU32_REG(BPF_DIV, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"DIV32 by 0, zero check 2",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_LD_IMM64(BPF_REG_1, 0xffffffff00000000LL),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU32_REG(BPF_DIV, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"DIV64 by 0, zero check",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU64_REG(BPF_DIV, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"MOD32 by 0, zero check 1",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU32_REG(BPF_MOD, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"MOD32 by 0, zero check 2",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_LD_IMM64(BPF_REG_1, 0xffffffff00000000LL),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU32_REG(BPF_MOD, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"MOD64 by 0, zero check",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 1),
	BPF_ALU64_REG(BPF_MOD, BPF_REG_2, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 42,
},
{
	"DIV32 by 0, zero check ok, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 2),
	BPF_MOV32_IMM(BPF_REG_2, 16),
	BPF_ALU32_REG(BPF_DIV, BPF_REG_2, BPF_REG_1),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_2),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 8,
},
{
	"DIV32 by 0, zero check 1, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_0, 1),
	BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"DIV32 by 0, zero check 2, cls",
	.insns = {
	BPF_LD_IMM64(BPF_REG_1, 0xffffffff00000000LL),
	BPF_MOV32_IMM(BPF_REG_0, 1),
	BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"DIV64 by 0, zero check, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_0, 1),
	BPF_ALU64_REG(BPF_DIV, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"MOD32 by 0, zero check ok, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_0, 42),
	BPF_MOV32_IMM(BPF_REG_1, 3),
	BPF_MOV32_IMM(BPF_REG_2, 5),
	BPF_ALU32_REG(BPF_MOD, BPF_REG_2, BPF_REG_1),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_2),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 2,
},
{
	"MOD32 by 0, zero check 1, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_0, 1),
	BPF_ALU32_REG(BPF_MOD, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 1,
},
{
	"MOD32 by 0, zero check 2, cls",
	.insns = {
	BPF_LD_IMM64(BPF_REG_1, 0xffffffff00000000LL),
	BPF_MOV32_IMM(BPF_REG_0, 1),
	BPF_ALU32_REG(BPF_MOD, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 1,
},
{
	"MOD64 by 0, zero check 1, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_0, 2),
	BPF_ALU64_REG(BPF_MOD, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 2,
},
{
	"MOD64 by 0, zero check 2, cls",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_0, -1),
	BPF_ALU64_REG(BPF_MOD, BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = -1,
},
