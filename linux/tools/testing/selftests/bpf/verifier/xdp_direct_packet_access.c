https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
{
	"XDP pkt read, pkt_end mangling, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_3, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R3 pointer arithmetic on pkt_end",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
},
{
	"XDP pkt read, pkt_end mangling, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_ALU64_IMM(BPF_SUB, BPF_REG_3, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R3 pointer arithmetic on pkt_end",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
},
{
	"XDP pkt read, pkt_data' > pkt_end, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' > pkt_end, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' > pkt_end, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end > pkt_data', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end > pkt_data', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end > pkt_data', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' < pkt_end, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' < pkt_end, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' < pkt_end, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end < pkt_data', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end < pkt_data', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end < pkt_data', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' >= pkt_end, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' >= pkt_end, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' >= pkt_end, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 0),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end >= pkt_data', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end >= pkt_data', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end >= pkt_data', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' <= pkt_end, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' <= pkt_end, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data' <= pkt_end, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end <= pkt_data', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end <= pkt_data', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_end <= pkt_data', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
		    offsetof(struct xdp_md, data_end)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' > pkt_data, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' > pkt_data, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' > pkt_data, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_1, BPF_REG_3, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data > pkt_meta', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data > pkt_meta', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data > pkt_meta', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' < pkt_data, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' < pkt_data, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' < pkt_data, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data < pkt_meta', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data < pkt_meta', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data < pkt_meta', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLT, BPF_REG_3, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' >= pkt_data, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' >= pkt_data, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' >= pkt_data, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_1, BPF_REG_3, 0),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data >= pkt_meta', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data >= pkt_meta', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data >= pkt_meta', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JGE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' <= pkt_data, good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' <= pkt_data, bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_JMP_IMM(BPF_JA, 0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -4),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_meta' <= pkt_data, bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_1, BPF_REG_3, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data <= pkt_meta', good access",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data <= pkt_meta', bad access 1",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},
{
	"XDP pkt read, pkt_data <= pkt_meta', bad access 2",
	.insns = {
	BPF_LDX_MEM(BPF_W, BPF_REG_2, BPF_REG_1,
		    offsetof(struct xdp_md, data_meta)),
	BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1, offsetof(struct xdp_md, data)),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_2),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_JMP_REG(BPF_JLE, BPF_REG_3, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_1, -5),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 offset is outside of the packet",
	.result = REJECT,
	.prog_type = BPF_PROG_TYPE_XDP,
	.flags = F_NEEDS_EFFICIENT_UNALIGNED_ACCESS,
},