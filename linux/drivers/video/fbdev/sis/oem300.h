https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* $XFree86$ */
/* $XdotOrg$ */
/*
 * OEM Data for 300 series
 *
 * Copyright (C) 2001-2005 by Thomas Winischhofer, Vienna, Austria
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License as published by
 * * the Free Software Foundation; either version 2 of the named License,
 * * or any later version.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) The name of the author may not be used to endorse or promote products
 * *    derived from this software without specific prior written permission.
 * *
 * * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: 	Thomas Winischhofer <thomas@winischhofer.net>
 *
 */

static const unsigned char SiS300_OEMTVDelay301[8][4] =
{
	{0x08,0x08,0x08,0x08},
	{0x08,0x08,0x08,0x08},
	{0x08,0x08,0x08,0x08},
	{0x2c,0x2c,0x2c,0x2c},
	{0x08,0x08,0x08,0x08},
	{0x08,0x08,0x08,0x08},
	{0x08,0x08,0x08,0x08},
	{0x20,0x20,0x20,0x20}
};

static const unsigned char SiS300_OEMTVDelayLVDS[8][4] =
{
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20}
};

static const unsigned char SiS300_OEMTVFlicker[8][4] =
{
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00},
	{0x00,0x00,0x00,0x00}
};

static const unsigned char SiS300_OEMLCDDelay2[64][4] =		 /* for 301/301b/302b/301LV/302LV */
{
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20}
};

static const unsigned char SiS300_OEMLCDDelay4[12][4] =
{
	{0x2c,0x2c,0x2c,0x2c},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x2c,0x2c,0x2c,0x2c},
	{0x2c,0x2c,0x2c,0x2c},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x24,0x24,0x24,0x24},
	{0x24,0x24,0x24,0x24},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x24,0x24,0x24,0x24}
};

static const unsigned char SiS300_OEMLCDDelay5[32][4] =
{
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
};

static const unsigned char SiS300_OEMLCDDelay3[64][4] =		/* For LVDS */
{
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20},
	{0x20,0x20,0x20,0x20}
};

static const unsigned char SiS300_Phase1[8][5][4] =
{
    {
	{0x21,0xed,0x00,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
        {0x21,0xed,0x00,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
        {0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    }
};

static const unsigned char SiS300_Phase2[8][5][4] =
{
    {
	{0x21,0xed,0x00,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
	{0x21,0xed,0x00,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08},
	{0x21,0xed,0x8a,0x08}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    },
    {
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00},
	{0x2a,0x05,0xd3,0x00}
    }
};

static const unsigned char SiS300_Filter1[10][16][4] =
{
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x10,0x32},
	{0xf3,0x00,0x1d,0x20},
	{0x00,0xf4,0x10,0x38},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xfc,0xfb,0x14,0x2a},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32},
	{0xf1,0xf7,0x1f,0x32}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18}
    },
    {
	{0x00,0xf4,0x10,0x38},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x10,0x18},
	{0xf7,0x06,0x19,0x14},
	{0x00,0xf4,0x10,0x38},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x15,0x25,0xf6},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18},
	{0xeb,0x04,0x25,0x18}
    },
};

static const unsigned char SiS300_Filter2[10][9][7] =
{
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    },
    {
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0xFF,0x03,0x02,0xF6,0xFC,0x27,0x46},
	{0x01,0x02,0xFE,0xF7,0x03,0x27,0x3C},
	{0x01,0x01,0xFC,0xF8,0x08,0x26,0x38},
	{0xFF,0xFF,0xFC,0x00,0x0F,0x22,0x28}
    }
};

/* Custom data for Barco iQ Pro R300 */
static const unsigned char barco_p1[2][9][7][3] =
{
  {
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x19, 0x00 }
     },
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x1e, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x16, 0x00 }
     },
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x19, 0x00 },
	{    0,    0,    0 }
     },
     {
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x1e, 0x00 },
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0xd1, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x11, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x26, 0x00 }
     },
     {
	{ 0x16, 0xd1, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x30, 0x00 },
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0x00, 0x00 },
	{ 0x17, 0xa0, 0x00 },
	{ 0x1a, 0xa0, 0x00 },
	{ 0x1b, 0x2a, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0x00, 0x00 },
	{ 0x17, 0xaa, 0x00 },
	{ 0x1a, 0xa0, 0x00 },
	{ 0x1b, 0x2a, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{    0,    0,    0 }
     }
  },
  {
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x19, 0x00 }
     },
     {
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x19, 0x00 },
     },
     {
	{    0,    0,    0 }
     },
     {
	{ 0x16, 0xcf, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe7, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x1e, 0x00 }
     },
     {
	{ 0x16, 0xd1, 0x00 },
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe6, 0x00 },
	{ 0x1b, 0x11, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x26, 0x00 }
     },
     {
	{ 0x18, 0x00, 0x00 },
	{ 0x1a, 0xe0, 0x00 },
	{ 0x1b, 0x26, 0x00 },
	{ 0x1c, 0xff, 0x00 },
	{ 0x1d, 0x1c, 0x00 },
	{ 0x1e, 0x30, 0x00 },
	{    0,    0,    0 }
     },
     {
	{    0,    0,    0 }
     },
     {
	{    0,    0,    0 }
     }
  }
};






