https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"ld_ind: check calling conv, r1",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_1, 1),
	BPF_LD_IND(BPF_W, BPF_REG_1, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 !read_ok",
	.result = REJECT,
},
{
	"ld_ind: check calling conv, r2",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_2, 1),
	BPF_LD_IND(BPF_W, BPF_REG_2, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_2),
	BPF_EXIT_INSN(),
	},
	.errstr = "R2 !read_ok",
	.result = REJECT,
},
{
	"ld_ind: check calling conv, r3",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_3, 1),
	BPF_LD_IND(BPF_W, BPF_REG_3, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_3),
	BPF_EXIT_INSN(),
	},
	.errstr = "R3 !read_ok",
	.result = REJECT,
},
{
	"ld_ind: check calling conv, r4",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_4, 1),
	BPF_LD_IND(BPF_W, BPF_REG_4, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_4),
	BPF_EXIT_INSN(),
	},
	.errstr = "R4 !read_ok",
	.result = REJECT,
},
{
	"ld_ind: check calling conv, r5",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_5, 1),
	BPF_LD_IND(BPF_W, BPF_REG_5, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_5),
	BPF_EXIT_INSN(),
	},
	.errstr = "R5 !read_ok",
	.result = REJECT,
},
{
	"ld_ind: check calling conv, r7",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_7, 1),
	BPF_LD_IND(BPF_W, BPF_REG_7, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_7),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 1,
},
