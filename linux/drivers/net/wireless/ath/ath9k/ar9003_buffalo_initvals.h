https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Copyright (c) 2013 Qualcomm Atheros Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef INITVALS_9003_BUFFALO_H
#define INITVALS_9003_BUFFALO_H

static const u32 ar9300Modes_high_power_tx_gain_table_buffalo[][5] = {
	/* Addr      5G_HT20     5G_HT40     2G_HT40     2G_HT20   */
	{0x0000a2dc, 0x0380c7fc, 0x0380c7fc, 0x03aaa352, 0x03aaa352},
	{0x0000a2e0, 0x0000f800, 0x0000f800, 0x03ccc584, 0x03ccc584},
	{0x0000a2e4, 0x03ff0000, 0x03ff0000, 0x03f0f800, 0x03f0f800},
	{0x0000a2e8, 0x00000000, 0x00000000, 0x03ff0000, 0x03ff0000},
	{0x0000a410, 0x000050d8, 0x000050d8, 0x000050d9, 0x000050d9},
	{0x0000a500, 0x00002220, 0x00002220, 0x00000000, 0x00000000},
	{0x0000a504, 0x04002222, 0x04002222, 0x04000002, 0x04000002},
	{0x0000a508, 0x09002421, 0x09002421, 0x08000004, 0x08000004},
	{0x0000a50c, 0x0d002621, 0x0d002621, 0x0b000200, 0x0b000200},
	{0x0000a510, 0x13004620, 0x13004620, 0x0f000202, 0x0f000202},
	{0x0000a514, 0x19004a20, 0x19004a20, 0x11000400, 0x11000400},
	{0x0000a518, 0x1d004e20, 0x1d004e20, 0x15000402, 0x15000402},
	{0x0000a51c, 0x21005420, 0x21005420, 0x19000404, 0x19000404},
	{0x0000a520, 0x26005e20, 0x26005e20, 0x1b000603, 0x1b000603},
	{0x0000a524, 0x2b005e40, 0x2b005e40, 0x1f000a02, 0x1f000a02},
	{0x0000a528, 0x2f005e42, 0x2f005e42, 0x23000a04, 0x23000a04},
	{0x0000a52c, 0x33005e44, 0x33005e44, 0x26000a20, 0x26000a20},
	{0x0000a530, 0x38005e65, 0x38005e65, 0x2a000e20, 0x2a000e20},
	{0x0000a534, 0x3c005e69, 0x3c005e69, 0x2e000e22, 0x2e000e22},
	{0x0000a538, 0x40005e6b, 0x40005e6b, 0x31000e24, 0x31000e24},
	{0x0000a53c, 0x44005e6d, 0x44005e6d, 0x34001640, 0x34001640},
	{0x0000a540, 0x49005e72, 0x49005e72, 0x38001660, 0x38001660},
	{0x0000a544, 0x4e005eb2, 0x4e005eb2, 0x3b001861, 0x3b001861},
	{0x0000a548, 0x53005f12, 0x53005f12, 0x3e001a81, 0x3e001a81},
	{0x0000a54c, 0x59025eb2, 0x59025eb2, 0x42001a83, 0x42001a83},
	{0x0000a550, 0x5e025f12, 0x5e025f12, 0x44001c84, 0x44001c84},
	{0x0000a554, 0x61027f12, 0x61027f12, 0x48001ce3, 0x48001ce3},
	{0x0000a558, 0x6702bf12, 0x6702bf12, 0x4c001ce5, 0x4c001ce5},
	{0x0000a55c, 0x6b02bf14, 0x6b02bf14, 0x50001ce9, 0x50001ce9},
	{0x0000a560, 0x6f02bf16, 0x6f02bf16, 0x54001ceb, 0x54001ceb},
	{0x0000a564, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a568, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a56c, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a570, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a574, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a578, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a57c, 0x6f02bf16, 0x6f02bf16, 0x56001eec, 0x56001eec},
	{0x0000a580, 0x00802220, 0x00802220, 0x00800000, 0x00800000},
	{0x0000a584, 0x04802222, 0x04802222, 0x04800002, 0x04800002},
	{0x0000a588, 0x09802421, 0x09802421, 0x08800004, 0x08800004},
	{0x0000a58c, 0x0d802621, 0x0d802621, 0x0b800200, 0x0b800200},
	{0x0000a590, 0x13804620, 0x13804620, 0x0f800202, 0x0f800202},
	{0x0000a594, 0x19804a20, 0x19804a20, 0x11800400, 0x11800400},
	{0x0000a598, 0x1d804e20, 0x1d804e20, 0x15800402, 0x15800402},
	{0x0000a59c, 0x21805420, 0x21805420, 0x19800404, 0x19800404},
	{0x0000a5a0, 0x26805e20, 0x26805e20, 0x1b800603, 0x1b800603},
	{0x0000a5a4, 0x2b805e40, 0x2b805e40, 0x1f800a02, 0x1f800a02},
	{0x0000a5a8, 0x2f805e42, 0x2f805e42, 0x23800a04, 0x23800a04},
	{0x0000a5ac, 0x33805e44, 0x33805e44, 0x26800a20, 0x26800a20},
	{0x0000a5b0, 0x38805e65, 0x38805e65, 0x2a800e20, 0x2a800e20},
	{0x0000a5b4, 0x3c805e69, 0x3c805e69, 0x2e800e22, 0x2e800e22},
	{0x0000a5b8, 0x40805e6b, 0x40805e6b, 0x31800e24, 0x31800e24},
	{0x0000a5bc, 0x44805e6d, 0x44805e6d, 0x34801640, 0x34801640},
	{0x0000a5c0, 0x49805e72, 0x49805e72, 0x38801660, 0x38801660},
	{0x0000a5c4, 0x4e805eb2, 0x4e805eb2, 0x3b801861, 0x3b801861},
	{0x0000a5c8, 0x53805f12, 0x53805f12, 0x3e801a81, 0x3e801a81},
	{0x0000a5cc, 0x59825eb2, 0x59825eb2, 0x42801a83, 0x42801a83},
	{0x0000a5d0, 0x5e825f12, 0x5e825f12, 0x44801c84, 0x44801c84},
	{0x0000a5d4, 0x61827f12, 0x61827f12, 0x48801ce3, 0x48801ce3},
	{0x0000a5d8, 0x6782bf12, 0x6782bf12, 0x4c801ce5, 0x4c801ce5},
	{0x0000a5dc, 0x6b82bf14, 0x6b82bf14, 0x50801ce9, 0x50801ce9},
	{0x0000a5e0, 0x6f82bf16, 0x6f82bf16, 0x54801ceb, 0x54801ceb},
	{0x0000a5e4, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5e8, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5ec, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5f0, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5f4, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5f8, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a5fc, 0x6f82bf16, 0x6f82bf16, 0x56801eec, 0x56801eec},
	{0x0000a600, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a604, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a608, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a60c, 0x00000000, 0x00000000, 0x00000000, 0x00000000},
	{0x0000a610, 0x00804000, 0x00804000, 0x00000000, 0x00000000},
	{0x0000a614, 0x00804201, 0x00804201, 0x01404000, 0x01404000},
	{0x0000a618, 0x0280c802, 0x0280c802, 0x01404501, 0x01404501},
	{0x0000a61c, 0x0280ca03, 0x0280ca03, 0x02008501, 0x02008501},
	{0x0000a620, 0x04c15104, 0x04c15104, 0x0280ca03, 0x0280ca03},
	{0x0000a624, 0x04c15305, 0x04c15305, 0x03010c04, 0x03010c04},
	{0x0000a628, 0x04c15305, 0x04c15305, 0x04014c04, 0x04014c04},
	{0x0000a62c, 0x04c15305, 0x04c15305, 0x04015005, 0x04015005},
	{0x0000a630, 0x04c15305, 0x04c15305, 0x04015005, 0x04015005},
	{0x0000a634, 0x04c15305, 0x04c15305, 0x04015005, 0x04015005},
	{0x0000a638, 0x04c15305, 0x04c15305, 0x04015005, 0x04015005},
	{0x0000a63c, 0x04c15305, 0x04c15305, 0x04015005, 0x04015005},
	{0x0000b2dc, 0x0380c7fc, 0x0380c7fc, 0x03aaa352, 0x03aaa352},
	{0x0000b2e0, 0x0000f800, 0x0000f800, 0x03ccc584, 0x03ccc584},
	{0x0000b2e4, 0x03ff0000, 0x03ff0000, 0x03f0f800, 0x03f0f800},
	{0x0000b2e8, 0x00000000, 0x00000000, 0x03ff0000, 0x03ff0000},
	{0x0000c2dc, 0x0380c7fc, 0x0380c7fc, 0x03aaa352, 0x03aaa352},
	{0x0000c2e0, 0x0000f800, 0x0000f800, 0x03ccc584, 0x03ccc584},
	{0x0000c2e4, 0x03ff0000, 0x03ff0000, 0x03f0f800, 0x03f0f800},
	{0x0000c2e8, 0x00000000, 0x00000000, 0x03ff0000, 0x03ff0000},
	{0x00016044, 0x012492d4, 0x012492d4, 0x012492d4, 0x012492d4},
	{0x00016048, 0x66480001, 0x66480001, 0x66480001, 0x66480001},
	{0x00016068, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c},
	{0x00016444, 0x012492d4, 0x012492d4, 0x012492d4, 0x012492d4},
	{0x00016448, 0x66480001, 0x66480001, 0x66480001, 0x66480001},
	{0x00016468, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c},
	{0x00016844, 0x012492d4, 0x012492d4, 0x012492d4, 0x012492d4},
	{0x00016848, 0x66480001, 0x66480001, 0x66480001, 0x66480001},
	{0x00016868, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c, 0x6db6db6c},
};

#endif /* INITVALS_9003_BUFFALO_H */
