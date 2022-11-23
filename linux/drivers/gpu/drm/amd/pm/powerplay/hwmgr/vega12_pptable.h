https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Copyright 2017 Advanced Micro Devices, Inc.
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
#ifndef _VEGA12_PPTABLE_H_
#define _VEGA12_PPTABLE_H_

#pragma pack(push, 1)

#define ATOM_VEGA12_PP_THERMALCONTROLLER_NONE           0
#define ATOM_VEGA12_PP_THERMALCONTROLLER_VEGA12     25

#define ATOM_VEGA12_PP_PLATFORM_CAP_POWERPLAY                   0x1
#define ATOM_VEGA12_PP_PLATFORM_CAP_SBIOSPOWERSOURCE            0x2
#define ATOM_VEGA12_PP_PLATFORM_CAP_HARDWAREDC                  0x4
#define ATOM_VEGA12_PP_PLATFORM_CAP_BACO                        0x8
#define ATOM_VEGA12_PP_PLATFORM_CAP_BAMACO                      0x10
#define ATOM_VEGA12_PP_PLATFORM_CAP_ENABLESHADOWPSTATE          0x20

#define ATOM_VEGA12_TABLE_REVISION_VEGA12         9

enum ATOM_VEGA12_ODSETTING_ID {
  ATOM_VEGA12_ODSETTING_GFXCLKFMAX = 0,
  ATOM_VEGA12_ODSETTING_GFXCLKFMIN,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEFREQ_P1,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEVOLTAGEOFFSET_P1,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEFREQ_P2,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEVOLTAGEOFFSET_P2,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEFREQ_P3,
  ATOM_VEGA12_ODSETTING_VDDGFXCURVEVOLTAGEOFFSET_P3,
  ATOM_VEGA12_ODSETTING_UCLKFMAX,
  ATOM_VEGA12_ODSETTING_POWERPERCENTAGE,
  ATOM_VEGA12_ODSETTING_FANRPMMIN,
  ATOM_VEGA12_ODSETTING_FANRPMACOUSTICLIMIT,
  ATOM_VEGA12_ODSETTING_FANTARGETTEMPERATURE,
  ATOM_VEGA12_ODSETTING_OPERATINGTEMPMAX,
  ATOM_VEGA12_ODSETTING_COUNT,
};
typedef enum ATOM_VEGA12_ODSETTING_ID ATOM_VEGA12_ODSETTING_ID;

enum ATOM_VEGA12_PPCLOCK_ID {
  ATOM_VEGA12_PPCLOCK_GFXCLK = 0,
  ATOM_VEGA12_PPCLOCK_VCLK,
  ATOM_VEGA12_PPCLOCK_DCLK,
  ATOM_VEGA12_PPCLOCK_ECLK,
  ATOM_VEGA12_PPCLOCK_SOCCLK,
  ATOM_VEGA12_PPCLOCK_UCLK,
  ATOM_VEGA12_PPCLOCK_DCEFCLK,
  ATOM_VEGA12_PPCLOCK_DISPCLK,
  ATOM_VEGA12_PPCLOCK_PIXCLK,
  ATOM_VEGA12_PPCLOCK_PHYCLK,
  ATOM_VEGA12_PPCLOCK_COUNT,
};
typedef enum ATOM_VEGA12_PPCLOCK_ID ATOM_VEGA12_PPCLOCK_ID;


typedef struct _ATOM_VEGA12_POWERPLAYTABLE
{
      struct atom_common_table_header sHeader;
      UCHAR  ucTableRevision;
      USHORT usTableSize;
      ULONG  ulGoldenPPID;
      ULONG  ulGoldenRevision;
      USHORT usFormatID;

      ULONG  ulPlatformCaps;

      UCHAR  ucThermalControllerType;

      USHORT usSmallPowerLimit1;
      USHORT usSmallPowerLimit2;
      USHORT usBoostPowerLimit;
      USHORT usODTurboPowerLimit;
      USHORT usODPowerSavePowerLimit;
      USHORT usSoftwareShutdownTemp;

      ULONG PowerSavingClockMax  [ATOM_VEGA12_PPCLOCK_COUNT];
      ULONG PowerSavingClockMin  [ATOM_VEGA12_PPCLOCK_COUNT];

      ULONG ODSettingsMax [ATOM_VEGA12_ODSETTING_COUNT];
      ULONG ODSettingsMin [ATOM_VEGA12_ODSETTING_COUNT];

      USHORT usReserve[5];

      PPTable_t smcPPTable;

} ATOM_Vega12_POWERPLAYTABLE;

#pragma pack(pop)

#endif
