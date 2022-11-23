https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Copyright 2020 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */


#ifndef SMU_11_0_CDR_TABLE
#define SMU_11_0_CDR_TABLE


#pragma pack(push, 1)

/// CDR table : PRBS sequence for DQ toggles

/*static unsigned int NoDbiPrbs7[] =
{
//256 bytes, 256 byte aligned
0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
};


static unsigned int DbiPrbs7[] =
{
// 256 bytes, 256 byte aligned
0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
};
*/


//4096 bytes, 256 byte aligned
static unsigned int NoDbiPrbs7[] =
{
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
    0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f00f0f,
    0x0f0f0f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0xf0f00f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0ff0f0, 0xf0f00f0f,
    0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0ff0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0ffff,
};

// 4096 bytes, 256 byte aligned
static unsigned int DbiPrbs7[] =
{
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
    0xffffffff, 0xffffffff, 0xffffffff, 0x0000ffff, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x0000ffff, 0x0000ffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0x00000000, 0xffffffff, 0x00000000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff, 0xffffffff, 0x00000000, 0x0000ffff,
    0xffffffff, 0x0000ffff, 0xffff0000, 0xffffffff, 0x00000000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x00000000, 0xffff0000, 0x00000000, 0x0000ffff, 0x00000000, 0xffffffff, 0xffff0000, 0x0000ffff,
    0x0000ffff, 0xffff0000, 0xffff0000, 0x00000000, 0xffff0000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x00000000, 0x00000000, 0x00000000, 0x0000ffff,
};

#pragma pack(pop)

#endif
