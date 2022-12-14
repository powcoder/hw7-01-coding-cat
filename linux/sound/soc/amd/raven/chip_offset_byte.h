https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * AMD ACP 3.0 Register Documentation
 *
 * Copyright 2016 Advanced Micro Devices, Inc.
 */

#ifndef _acp_ip_OFFSET_HEADER
#define _acp_ip_OFFSET_HEADER
// Registers from ACP_DMA block

#define mmACP_DMA_CNTL_0                                0x1240000
#define mmACP_DMA_CNTL_1                                0x1240004
#define mmACP_DMA_CNTL_2                                0x1240008
#define mmACP_DMA_CNTL_3                                0x124000C
#define mmACP_DMA_CNTL_4                                0x1240010
#define mmACP_DMA_CNTL_5                                0x1240014
#define mmACP_DMA_CNTL_6                                0x1240018
#define mmACP_DMA_CNTL_7                                0x124001C
#define mmACP_DMA_DSCR_STRT_IDX_0                       0x1240020
#define mmACP_DMA_DSCR_STRT_IDX_1                       0x1240024
#define mmACP_DMA_DSCR_STRT_IDX_2                       0x1240028
#define mmACP_DMA_DSCR_STRT_IDX_3                       0x124002C
#define mmACP_DMA_DSCR_STRT_IDX_4                       0x1240030
#define mmACP_DMA_DSCR_STRT_IDX_5                       0x1240034
#define mmACP_DMA_DSCR_STRT_IDX_6                       0x1240038
#define mmACP_DMA_DSCR_STRT_IDX_7                       0x124003C
#define mmACP_DMA_DSCR_CNT_0                            0x1240040
#define mmACP_DMA_DSCR_CNT_1                            0x1240044
#define mmACP_DMA_DSCR_CNT_2                            0x1240048
#define mmACP_DMA_DSCR_CNT_3                            0x124004C
#define mmACP_DMA_DSCR_CNT_4                            0x1240050
#define mmACP_DMA_DSCR_CNT_5                            0x1240054
#define mmACP_DMA_DSCR_CNT_6                            0x1240058
#define mmACP_DMA_DSCR_CNT_7                            0x124005C
#define mmACP_DMA_PRIO_0                                0x1240060
#define mmACP_DMA_PRIO_1                                0x1240064
#define mmACP_DMA_PRIO_2                                0x1240068
#define mmACP_DMA_PRIO_3                                0x124006C
#define mmACP_DMA_PRIO_4                                0x1240070
#define mmACP_DMA_PRIO_5                                0x1240074
#define mmACP_DMA_PRIO_6                                0x1240078
#define mmACP_DMA_PRIO_7                                0x124007C
#define mmACP_DMA_CUR_DSCR_0                            0x1240080
#define mmACP_DMA_CUR_DSCR_1                            0x1240084
#define mmACP_DMA_CUR_DSCR_2                            0x1240088
#define mmACP_DMA_CUR_DSCR_3                            0x124008C
#define mmACP_DMA_CUR_DSCR_4                            0x1240090
#define mmACP_DMA_CUR_DSCR_5                            0x1240094
#define mmACP_DMA_CUR_DSCR_6                            0x1240098
#define mmACP_DMA_CUR_DSCR_7                            0x124009C
#define mmACP_DMA_CUR_TRANS_CNT_0                       0x12400A0
#define mmACP_DMA_CUR_TRANS_CNT_1                       0x12400A4
#define mmACP_DMA_CUR_TRANS_CNT_2                       0x12400A8
#define mmACP_DMA_CUR_TRANS_CNT_3                       0x12400AC
#define mmACP_DMA_CUR_TRANS_CNT_4                       0x12400B0
#define mmACP_DMA_CUR_TRANS_CNT_5                       0x12400B4
#define mmACP_DMA_CUR_TRANS_CNT_6                       0x12400B8
#define mmACP_DMA_CUR_TRANS_CNT_7                       0x12400BC
#define mmACP_DMA_ERR_STS_0                             0x12400C0
#define mmACP_DMA_ERR_STS_1                             0x12400C4
#define mmACP_DMA_ERR_STS_2                             0x12400C8
#define mmACP_DMA_ERR_STS_3                             0x12400CC
#define mmACP_DMA_ERR_STS_4                             0x12400D0
#define mmACP_DMA_ERR_STS_5                             0x12400D4
#define mmACP_DMA_ERR_STS_6                             0x12400D8
#define mmACP_DMA_ERR_STS_7                             0x12400DC
#define mmACP_DMA_DESC_BASE_ADDR                        0x12400E0
#define mmACP_DMA_DESC_MAX_NUM_DSCR                     0x12400E4
#define mmACP_DMA_CH_STS                                0x12400E8
#define mmACP_DMA_CH_GROUP                              0x12400EC
#define mmACP_DMA_CH_RST_STS                            0x12400F0


// Registers from ACP_AXI2AXIATU block

#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_1                0x1240C00
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_1                0x1240C04
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_2                0x1240C08
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_2                0x1240C0C
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_3                0x1240C10
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_3                0x1240C14
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_4                0x1240C18
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_4                0x1240C1C
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_5                0x1240C20
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_5                0x1240C24
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_6                0x1240C28
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_6                0x1240C2C
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_7                0x1240C30
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_7                0x1240C34
#define mmACPAXI2AXI_ATU_PAGE_SIZE_GRP_8                0x1240C38
#define mmACPAXI2AXI_ATU_BASE_ADDR_GRP_8                0x1240C3C
#define mmACPAXI2AXI_ATU_CTRL                           0x1240C40


// Registers from ACP_CLKRST block

#define mmACP_SOFT_RESET                                0x1241000
#define mmACP_CONTROL                                   0x1241004
#define mmACP_STATUS                                    0x1241008
#define mmACP_DSP0_OCD_HALT_ON_RST                      0x124100C
#define mmACP_DYNAMIC_CG_MASTER_CONTROL                 0x1241010


// Registers from ACP_MISC block

#define mmACP_EXTERNAL_INTR_ENB                         0x1241800
#define mmACP_EXTERNAL_INTR_CNTL                        0x1241804
#define mmACP_EXTERNAL_INTR_STAT                        0x1241808
#define mmACP_DSP0_INTR_CNTL                            0x124180C
#define mmACP_DSP0_INTR_STAT                            0x1241810
#define mmACP_DSP_SW_INTR_CNTL                          0x1241814
#define mmACP_DSP_SW_INTR_STAT                          0x1241818
#define mmACP_SW_INTR_TRIG                              0x124181C
#define mmACP_SMU_MAILBOX                               0x1241820
#define mmDSP_INTERRUPT_ROUTING_CTRL                    0x1241824
#define mmACP_DSP0_WATCHDOG_TIMER_CNTL                  0x1241828
#define mmACP_DSP0_EXT_TIMER1_CNTL                      0x124182C
#define mmACP_DSP0_EXT_TIMER2_CNTL                      0x1241830
#define mmACP_DSP0_EXT_TIMER3_CNTL                      0x1241834
#define mmACP_DSP0_EXT_TIMER4_CNTL                      0x1241838
#define mmACP_DSP0_EXT_TIMER5_CNTL                      0x124183C
#define mmACP_DSP0_EXT_TIMER6_CNTL                      0x1241840
#define mmACP_DSP0_EXT_TIMER1_CURR_VALUE                0x1241844
#define mmACP_DSP0_EXT_TIMER2_CURR_VALUE                0x1241848
#define mmACP_DSP0_EXT_TIMER3_CURR_VALUE                0x124184C
#define mmACP_DSP0_EXT_TIMER4_CURR_VALUE                0x1241850
#define mmACP_DSP0_EXT_TIMER5_CURR_VALUE                0x1241854
#define mmACP_DSP0_EXT_TIMER6_CURR_VALUE                0x1241858
#define mmACP_FW_STATUS                                 0x124185C
#define mmACP_TIMER                                     0x1241874
#define mmACP_TIMER_CNTL                                0x1241878
#define mmACP_PGMEM_CTRL                                0x12418C0
#define mmACP_ERROR_STATUS                              0x12418C4
#define mmACP_SW_I2S_ERROR_REASON                       0x12418C8
#define mmACP_MEM_PG_STS                                0x12418CC


// Registers from ACP_PGFSM block

#define mmACP_I2S_PIN_CONFIG                            0x1241400
#define mmACP_PAD_PULLUP_PULLDOWN_CTRL                  0x1241404
#define mmACP_PAD_DRIVE_STRENGTH_CTRL                   0x1241408
#define mmACP_SW_PAD_KEEPER_EN                          0x124140C
#define mmACP_SW_WAKE_EN                                0x1241410
#define mmACP_I2S_WAKE_EN                               0x1241414
#define mmACP_PME_EN                                    0x1241418
#define mmACP_PGFSM_CONTROL                             0x124141C
#define mmACP_PGFSM_STATUS                              0x1241420


// Registers from ACP_SCRATCH block

#define mmACP_SCRATCH_REG_0                             0x1250000
#define mmACP_SCRATCH_REG_1                             0x1250004
#define mmACP_SCRATCH_REG_2                             0x1250008
#define mmACP_SCRATCH_REG_3                             0x125000C
#define mmACP_SCRATCH_REG_4                             0x1250010
#define mmACP_SCRATCH_REG_5                             0x1250014
#define mmACP_SCRATCH_REG_6                             0x1250018
#define mmACP_SCRATCH_REG_7                             0x125001C
#define mmACP_SCRATCH_REG_8                             0x1250020
#define mmACP_SCRATCH_REG_9                             0x1250024
#define mmACP_SCRATCH_REG_10                            0x1250028
#define mmACP_SCRATCH_REG_11                            0x125002C
#define mmACP_SCRATCH_REG_12                            0x1250030
#define mmACP_SCRATCH_REG_13                            0x1250034
#define mmACP_SCRATCH_REG_14                            0x1250038
#define mmACP_SCRATCH_REG_15                            0x125003C
#define mmACP_SCRATCH_REG_16                            0x1250040
#define mmACP_SCRATCH_REG_17                            0x1250044
#define mmACP_SCRATCH_REG_18                            0x1250048
#define mmACP_SCRATCH_REG_19                            0x125004C
#define mmACP_SCRATCH_REG_20                            0x1250050
#define mmACP_SCRATCH_REG_21                            0x1250054
#define mmACP_SCRATCH_REG_22                            0x1250058
#define mmACP_SCRATCH_REG_23                            0x125005C
#define mmACP_SCRATCH_REG_24                            0x1250060
#define mmACP_SCRATCH_REG_25                            0x1250064
#define mmACP_SCRATCH_REG_26                            0x1250068
#define mmACP_SCRATCH_REG_27                            0x125006C
#define mmACP_SCRATCH_REG_28                            0x1250070
#define mmACP_SCRATCH_REG_29                            0x1250074
#define mmACP_SCRATCH_REG_30                            0x1250078
#define mmACP_SCRATCH_REG_31                            0x125007C
#define mmACP_SCRATCH_REG_32                            0x1250080
#define mmACP_SCRATCH_REG_33                            0x1250084
#define mmACP_SCRATCH_REG_34                            0x1250088
#define mmACP_SCRATCH_REG_35                            0x125008C
#define mmACP_SCRATCH_REG_36                            0x1250090
#define mmACP_SCRATCH_REG_37                            0x1250094
#define mmACP_SCRATCH_REG_38                            0x1250098
#define mmACP_SCRATCH_REG_39                            0x125009C
#define mmACP_SCRATCH_REG_40                            0x12500A0
#define mmACP_SCRATCH_REG_41                            0x12500A4
#define mmACP_SCRATCH_REG_42                            0x12500A8
#define mmACP_SCRATCH_REG_43                            0x12500AC
#define mmACP_SCRATCH_REG_44                            0x12500B0
#define mmACP_SCRATCH_REG_45                            0x12500B4
#define mmACP_SCRATCH_REG_46                            0x12500B8
#define mmACP_SCRATCH_REG_47                            0x12500BC
#define mmACP_SCRATCH_REG_48                            0x12500C0
#define mmACP_SCRATCH_REG_49                            0x12500C4
#define mmACP_SCRATCH_REG_50                            0x12500C8
#define mmACP_SCRATCH_REG_51                            0x12500CC
#define mmACP_SCRATCH_REG_52                            0x12500D0
#define mmACP_SCRATCH_REG_53                            0x12500D4
#define mmACP_SCRATCH_REG_54                            0x12500D8
#define mmACP_SCRATCH_REG_55                            0x12500DC
#define mmACP_SCRATCH_REG_56                            0x12500E0
#define mmACP_SCRATCH_REG_57                            0x12500E4
#define mmACP_SCRATCH_REG_58                            0x12500E8
#define mmACP_SCRATCH_REG_59                            0x12500EC
#define mmACP_SCRATCH_REG_60                            0x12500F0
#define mmACP_SCRATCH_REG_61                            0x12500F4
#define mmACP_SCRATCH_REG_62                            0x12500F8
#define mmACP_SCRATCH_REG_63                            0x12500FC
#define mmACP_SCRATCH_REG_64                            0x1250100
#define mmACP_SCRATCH_REG_65                            0x1250104
#define mmACP_SCRATCH_REG_66                            0x1250108
#define mmACP_SCRATCH_REG_67                            0x125010C
#define mmACP_SCRATCH_REG_68                            0x1250110
#define mmACP_SCRATCH_REG_69                            0x1250114
#define mmACP_SCRATCH_REG_70                            0x1250118
#define mmACP_SCRATCH_REG_71                            0x125011C
#define mmACP_SCRATCH_REG_72                            0x1250120
#define mmACP_SCRATCH_REG_73                            0x1250124
#define mmACP_SCRATCH_REG_74                            0x1250128
#define mmACP_SCRATCH_REG_75                            0x125012C
#define mmACP_SCRATCH_REG_76                            0x1250130
#define mmACP_SCRATCH_REG_77                            0x1250134
#define mmACP_SCRATCH_REG_78                            0x1250138
#define mmACP_SCRATCH_REG_79                            0x125013C
#define mmACP_SCRATCH_REG_80                            0x1250140
#define mmACP_SCRATCH_REG_81                            0x1250144
#define mmACP_SCRATCH_REG_82                            0x1250148
#define mmACP_SCRATCH_REG_83                            0x125014C
#define mmACP_SCRATCH_REG_84                            0x1250150
#define mmACP_SCRATCH_REG_85                            0x1250154
#define mmACP_SCRATCH_REG_86                            0x1250158
#define mmACP_SCRATCH_REG_87                            0x125015C
#define mmACP_SCRATCH_REG_88                            0x1250160
#define mmACP_SCRATCH_REG_89                            0x1250164
#define mmACP_SCRATCH_REG_90                            0x1250168
#define mmACP_SCRATCH_REG_91                            0x125016C
#define mmACP_SCRATCH_REG_92                            0x1250170
#define mmACP_SCRATCH_REG_93                            0x1250174
#define mmACP_SCRATCH_REG_94                            0x1250178
#define mmACP_SCRATCH_REG_95                            0x125017C
#define mmACP_SCRATCH_REG_96                            0x1250180
#define mmACP_SCRATCH_REG_97                            0x1250184
#define mmACP_SCRATCH_REG_98                            0x1250188
#define mmACP_SCRATCH_REG_99                            0x125018C
#define mmACP_SCRATCH_REG_100                           0x1250190
#define mmACP_SCRATCH_REG_101                           0x1250194
#define mmACP_SCRATCH_REG_102                           0x1250198
#define mmACP_SCRATCH_REG_103                           0x125019C
#define mmACP_SCRATCH_REG_104                           0x12501A0
#define mmACP_SCRATCH_REG_105                           0x12501A4
#define mmACP_SCRATCH_REG_106                           0x12501A8
#define mmACP_SCRATCH_REG_107                           0x12501AC
#define mmACP_SCRATCH_REG_108                           0x12501B0
#define mmACP_SCRATCH_REG_109                           0x12501B4
#define mmACP_SCRATCH_REG_110                           0x12501B8
#define mmACP_SCRATCH_REG_111                           0x12501BC
#define mmACP_SCRATCH_REG_112                           0x12501C0
#define mmACP_SCRATCH_REG_113                           0x12501C4
#define mmACP_SCRATCH_REG_114                           0x12501C8
#define mmACP_SCRATCH_REG_115                           0x12501CC
#define mmACP_SCRATCH_REG_116                           0x12501D0
#define mmACP_SCRATCH_REG_117                           0x12501D4
#define mmACP_SCRATCH_REG_118                           0x12501D8
#define mmACP_SCRATCH_REG_119                           0x12501DC
#define mmACP_SCRATCH_REG_120                           0x12501E0
#define mmACP_SCRATCH_REG_121                           0x12501E4
#define mmACP_SCRATCH_REG_122                           0x12501E8
#define mmACP_SCRATCH_REG_123                           0x12501EC
#define mmACP_SCRATCH_REG_124                           0x12501F0
#define mmACP_SCRATCH_REG_125                           0x12501F4
#define mmACP_SCRATCH_REG_126                           0x12501F8
#define mmACP_SCRATCH_REG_127                           0x12501FC
#define mmACP_SCRATCH_REG_128                           0x1250200


// Registers from ACP_SW_ACLK block

#define mmSW_CORB_Base_Address                          0x1243200
#define mmSW_CORB_Write_Pointer                         0x1243204
#define mmSW_CORB_Read_Pointer                          0x1243208
#define mmSW_CORB_Control                               0x124320C
#define mmSW_CORB_Size                                  0x1243214
#define mmSW_RIRB_Base_Address                          0x1243218
#define mmSW_RIRB_Write_Pointer                         0x124321C
#define mmSW_RIRB_Response_Interrupt_Count              0x1243220
#define mmSW_RIRB_Control                               0x1243224
#define mmSW_RIRB_Size                                  0x1243228
#define mmSW_RIRB_FIFO_MIN_THDL                         0x124322C
#define mmSW_imm_cmd_UPPER_WORD                         0x1243230
#define mmSW_imm_cmd_LOWER_QWORD                        0x1243234
#define mmSW_imm_resp_UPPER_WORD                        0x1243238
#define mmSW_imm_resp_LOWER_QWORD                       0x124323C
#define mmSW_imm_cmd_sts                                0x1243240
#define mmSW_BRA_BASE_ADDRESS                           0x1243244
#define mmSW_BRA_TRANSFER_SIZE                          0x1243248
#define mmSW_BRA_DMA_BUSY                               0x124324C
#define mmSW_BRA_RESP                                   0x1243250
#define mmSW_BRA_RESP_FRAME_ADDR                        0x1243254
#define mmSW_BRA_CURRENT_TRANSFER_SIZE                  0x1243258
#define mmSW_STATE_CHANGE_STATUS_0TO7                   0x124325C
#define mmSW_STATE_CHANGE_STATUS_8TO11                  0x1243260
#define mmSW_STATE_CHANGE_STATUS_MASK_0to7              0x1243264
#define mmSW_STATE_CHANGE_STATUS_MASK_8to11             0x1243268
#define mmSW_CLK_FREQUENCY_CTRL                         0x124326C
#define mmSW_ERROR_INTR_MASK                            0x1243270
#define mmSW_PHY_TEST_MODE_DATA_OFF                     0x1243274


// Registers from ACP_SW_SWCLK block

#define mmACP_SW_EN                                     0x1243000
#define mmACP_SW_EN_STATUS                              0x1243004
#define mmACP_SW_FRAMESIZE                              0x1243008
#define mmACP_SW_SSP_Counter                            0x124300C
#define mmACP_SW_Audio_TX_EN                            0x1243010
#define mmACP_SW_Audio_TX_EN_STATUS                     0x1243014
#define mmACP_SW_Audio_TX_Frame_Format                  0x1243018
#define mmACP_SW_Audio_TX_SampleInterval                0x124301C
#define mmACP_SW_Audio_TX_Hctrl_DP0                     0x1243020
#define mmACP_SW_Audio_TX_Hctrl_DP1                     0x1243024
#define mmACP_SW_Audio_TX_Hctrl_DP2                     0x1243028
#define mmACP_SW_Audio_TX_Hctrl_DP3                     0x124302C
#define mmACP_SW_Audio_TX_offset_DP0                    0x1243030
#define mmACP_SW_Audio_TX_offset_DP1                    0x1243034
#define mmACP_SW_Audio_TX_offset_DP2                    0x1243038
#define mmACP_SW_Audio_TX_offset_DP3                    0x124303C
#define mmACP_SW_Audio_TX_Channel_Enable_DP0            0x1243040
#define mmACP_SW_Audio_TX_Channel_Enable_DP1            0x1243044
#define mmACP_SW_Audio_TX_Channel_Enable_DP2            0x1243048
#define mmACP_SW_Audio_TX_Channel_Enable_DP3            0x124304C
#define mmACP_SW_BT_TX_EN                               0x1243050
#define mmACP_SW_BT_TX_EN_STATUS                        0x1243054
#define mmACP_SW_BT_TX_Frame_Format                     0x1243058
#define mmACP_SW_BT_TX_SampleInterval                   0x124305C
#define mmACP_SW_BT_TX_Hctrl                            0x1243060
#define mmACP_SW_BT_TX_offset                           0x1243064
#define mmACP_SW_BT_TX_Channel_Enable_DP0               0x1243068
#define mmACP_SW_Headset_TX_EN                          0x124306C
#define mmACP_SW_Headset_TX_EN_STATUS                   0x1243070
#define mmACP_SW_Headset_TX_Frame_Format                0x1243074
#define mmACP_SW_Headset_TX_SampleInterval              0x1243078
#define mmACP_SW_Headset_TX_Hctrl                       0x124307C
#define mmACP_SW_Headset_TX_offset                      0x1243080
#define mmACP_SW_Headset_TX_Channel_Enable_DP0          0x1243084
#define mmACP_SW_Audio_RX_EN                            0x1243088
#define mmACP_SW_Audio_RX_EN_STATUS                     0x124308C
#define mmACP_SW_Audio_RX_Frame_Format                  0x1243090
#define mmACP_SW_Audio_RX_SampleInterval                0x1243094
#define mmACP_SW_Audio_RX_Hctrl_DP0                     0x1243098
#define mmACP_SW_Audio_RX_Hctrl_DP1                     0x124309C
#define mmACP_SW_Audio_RX_Hctrl_DP2                     0x1243100
#define mmACP_SW_Audio_RX_Hctrl_DP3                     0x1243104
#define mmACP_SW_Audio_RX_offset_DP0                    0x1243108
#define mmACP_SW_Audio_RX_offset_DP1                    0x124310C
#define mmACP_SW_Audio_RX_offset_DP2                    0x1243110
#define mmACP_SW_Audio_RX_offset_DP3                    0x1243114
#define mmACP_SW_Audio_RX_Channel_Enable_DP0            0x1243118
#define mmACP_SW_Audio_RX_Channel_Enable_DP1            0x124311C
#define mmACP_SW_Audio_RX_Channel_Enable_DP2            0x1243120
#define mmACP_SW_Audio_RX_Channel_Enable_DP3            0x1243124
#define mmACP_SW_BT_RX_EN                               0x1243128
#define mmACP_SW_BT_RX_EN_STATUS                        0x124312C
#define mmACP_SW_BT_RX_Frame_Format                     0x1243130
#define mmACP_SW_BT_RX_SampleInterval                   0x1243134
#define mmACP_SW_BT_RX_Hctrl                            0x1243138
#define mmACP_SW_BT_RX_offset                           0x124313C
#define mmACP_SW_BT_RX_Channel_Enable_DP0               0x1243140
#define mmACP_SW_Headset_RX_EN                          0x1243144
#define mmACP_SW_Headset_RX_EN_STATUS                   0x1243148
#define mmACP_SW_Headset_RX_Frame_Format                0x124314C
#define mmACP_SW_Headset_RX_SampleInterval              0x1243150
#define mmACP_SW_Headset_RX_Hctrl                       0x1243154
#define mmACP_SW_Headset_RX_offset                      0x1243158
#define mmACP_SW_Headset_RX_Channel_Enable_DP0          0x124315C
#define mmACP_SW_BPT_PORT_EN                            0x1243160
#define mmACP_SW_BPT_PORT_EN_STATUS                     0x1243164
#define mmACP_SW_BPT_PORT_Frame_Format                  0x1243168
#define mmACP_SW_BPT_PORT_SampleInterval                0x124316C
#define mmACP_SW_BPT_PORT_Hctrl                         0x1243170
#define mmACP_SW_BPT_PORT_offset                        0x1243174
#define mmACP_SW_BPT_PORT_Channel_Enable                0x1243178
#define mmACP_SW_BPT_PORT_First_byte_addr               0x124317C
#define mmACP_SW_CLK_RESUME_CTRL                        0x1243180
#define mmACP_SW_CLK_RESUME_Delay_Cntr                  0x1243184
#define mmACP_SW_BUS_RESET_CTRL                         0x1243188
#define mmACP_SW_PRBS_ERR_STATUS                        0x124318C


// Registers from ACP_AUDIO_BUFFERS block

#define mmACP_I2S_RX_RINGBUFADDR                        0x1242000
#define mmACP_I2S_RX_RINGBUFSIZE                        0x1242004
#define mmACP_I2S_RX_LINKPOSITIONCNTR                   0x1242008
#define mmACP_I2S_RX_FIFOADDR                           0x124200C
#define mmACP_I2S_RX_FIFOSIZE                           0x1242010
#define mmACP_I2S_RX_DMA_SIZE                           0x1242014
#define mmACP_I2S_RX_LINEARPOSITIONCNTR_HIGH            0x1242018
#define mmACP_I2S_RX_LINEARPOSITIONCNTR_LOW             0x124201C
#define mmACP_I2S_RX_INTR_WATERMARK_SIZE                0x1242020
#define mmACP_I2S_TX_RINGBUFADDR                        0x1242024
#define mmACP_I2S_TX_RINGBUFSIZE                        0x1242028
#define mmACP_I2S_TX_LINKPOSITIONCNTR                   0x124202C
#define mmACP_I2S_TX_FIFOADDR                           0x1242030
#define mmACP_I2S_TX_FIFOSIZE                           0x1242034
#define mmACP_I2S_TX_DMA_SIZE                           0x1242038
#define mmACP_I2S_TX_LINEARPOSITIONCNTR_HIGH            0x124203C
#define mmACP_I2S_TX_LINEARPOSITIONCNTR_LOW             0x1242040
#define mmACP_I2S_TX_INTR_WATERMARK_SIZE                0x1242044
#define mmACP_BT_RX_RINGBUFADDR                         0x1242048
#define mmACP_BT_RX_RINGBUFSIZE                         0x124204C
#define mmACP_BT_RX_LINKPOSITIONCNTR                    0x1242050
#define mmACP_BT_RX_FIFOADDR                            0x1242054
#define mmACP_BT_RX_FIFOSIZE                            0x1242058
#define mmACP_BT_RX_DMA_SIZE                            0x124205C
#define mmACP_BT_RX_LINEARPOSITIONCNTR_HIGH             0x1242060
#define mmACP_BT_RX_LINEARPOSITIONCNTR_LOW              0x1242064
#define mmACP_BT_RX_INTR_WATERMARK_SIZE                 0x1242068
#define mmACP_BT_TX_RINGBUFADDR                         0x124206C
#define mmACP_BT_TX_RINGBUFSIZE                         0x1242070
#define mmACP_BT_TX_LINKPOSITIONCNTR                    0x1242074
#define mmACP_BT_TX_FIFOADDR                            0x1242078
#define mmACP_BT_TX_FIFOSIZE                            0x124207C
#define mmACP_BT_TX_DMA_SIZE                            0x1242080
#define mmACP_BT_TX_LINEARPOSITIONCNTR_HIGH             0x1242084
#define mmACP_BT_TX_LINEARPOSITIONCNTR_LOW              0x1242088
#define mmACP_BT_TX_INTR_WATERMARK_SIZE                 0x124208C
#define mmACP_HS_RX_RINGBUFADDR                         0x1242090
#define mmACP_HS_RX_RINGBUFSIZE                         0x1242094
#define mmACP_HS_RX_LINKPOSITIONCNTR                    0x1242098
#define mmACP_HS_RX_FIFOADDR                            0x124209C
#define mmACP_HS_RX_FIFOSIZE                            0x12420A0
#define mmACP_HS_RX_DMA_SIZE                            0x12420A4
#define mmACP_HS_RX_LINEARPOSITIONCNTR_HIGH             0x12420A8
#define mmACP_HS_RX_LINEARPOSITIONCNTR_LOW              0x12420AC
#define mmACP_HS_RX_INTR_WATERMARK_SIZE                 0x12420B0
#define mmACP_HS_TX_RINGBUFADDR                         0x12420B4
#define mmACP_HS_TX_RINGBUFSIZE                         0x12420B8
#define mmACP_HS_TX_LINKPOSITIONCNTR                    0x12420BC
#define mmACP_HS_TX_FIFOADDR                            0x12420C0
#define mmACP_HS_TX_FIFOSIZE                            0x12420C4
#define mmACP_HS_TX_DMA_SIZE                            0x12420C8
#define mmACP_HS_TX_LINEARPOSITIONCNTR_HIGH             0x12420CC
#define mmACP_HS_TX_LINEARPOSITIONCNTR_LOW              0x12420D0
#define mmACP_HS_TX_INTR_WATERMARK_SIZE                 0x12420D4


// Registers from ACP_I2S_TDM block

#define mmACP_I2STDM_IER                                0x1242400
#define mmACP_I2STDM_IRER                               0x1242404
#define mmACP_I2STDM_RXFRMT                             0x1242408
#define mmACP_I2STDM_ITER                               0x124240C
#define mmACP_I2STDM_TXFRMT                             0x1242410


// Registers from ACP_BT_TDM block

#define mmACP_BTTDM_IER                                 0x1242800
#define mmACP_BTTDM_IRER                                0x1242804
#define mmACP_BTTDM_RXFRMT                              0x1242808
#define mmACP_BTTDM_ITER                                0x124280C
#define mmACP_BTTDM_TXFRMT                              0x1242810


// Registers from AZALIA_IP block

#define mmAudio_Az_Global_Capabilities                  0x1200000
#define mmAudio_Az_Minor_Version                        0x1200002
#define mmAudio_Az_Major_Version                        0x1200003
#define mmAudio_Az_Output_Payload_Capability            0x1200004
#define mmAudio_Az_Input_Payload_Capability             0x1200006
#define mmAudio_Az_Global_Control                       0x1200008
#define mmAudio_Az_Wake_Enable                          0x120000C
#define mmAudio_Az_State_Change_Status                  0x120000E
#define mmAudio_Az_Global_Status                        0x1200010
#define mmAudio_Az_Linked_List_Capability_Header        0x1200014
#define mmAudio_Az_Output_Stream_Payload_Capability     0x1200018
#define mmAudio_Az_Input_Stream_Payload_Capability      0x120001A
#define mmAudio_Az_Interrupt_Control                    0x1200020
#define mmAudio_Az_Interrupt_Status                     0x1200024
#define mmAudio_Az_Wall_Clock_Counter                   0x1200030
#define mmAudio_Az_Stream_Synchronization               0x1200038
#define mmAudio_Az_CORB_Lower_Base_Address              0x1200040
#define mmAudio_Az_CORB_Upper_Base_Address              0x1200044
#define mmAudio_Az_CORB_Write_Pointer                   0x1200048
#define mmAudio_Az_CORB_Read_Pointer                    0x120004A
#define mmAudio_Az_CORB_Control                         0x120004C
#define mmAudio_Az_CORB_Status                          0x120004D
#define mmAudio_Az_CORB_Size                            0x120004E
#define mmAudio_Az_RIRB_Lower_Base_Address              0x1200050
#define mmAudio_Az_RIRB_Upper_Base_Address              0x1200054
#define mmAudio_Az_RIRB_Write_Pointer                   0x1200058
#define mmAudio_Az_RIRB_Response_Interrupt_Count        0x120005A
#define mmAudio_Az_RIRB_Control                         0x120005C
#define mmAudio_Az_RIRB_Status                          0x120005D
#define mmAudio_Az_RIRB_Size                            0x120005E
#define mmAudio_Az_Immediate_Command_Output_Interface   0x1200060
#define mmAudio_Az_Immediate_Response_Input_Interface   0x1200064
#define mmAudio_Az_Immediate_Command_Status             0x1200068
#define mmAudio_Az_DPLBASE                              0x1200070
#define mmAudio_Az_DPUBASE                              0x1200074
#define mmAudio_Az_Input_SD0CTL_and_STS                 0x1200080
#define mmAudio_Az_Input_SD0LPIB                        0x1200084
#define mmAudio_Az_Input_SD0CBL                         0x1200088
#define mmAudio_Az_Input_SD0LVI                         0x120008C
#define mmAudio_Az_Input_SD0FIFOS                       0x1200090
#define mmAudio_Az_Input_SD0FMT                         0x1200092
#define mmAudio_Az_Input_SD0BDPL                        0x1200098
#define mmAudio_Az_Input_SD0BDPU                        0x120009C
#define mmAudio_Az_Input_SD1CTL_and_STS                 0x12000A0
#define mmAudio_Az_Input_SD1LPIB                        0x12000A4
#define mmAudio_Az_Input_SD1CBL                         0x12000A8
#define mmAudio_Az_Input_SD1LVI                         0x12000AC
#define mmAudio_Az_Input_SD1FIFOS                       0x12000B0
#define mmAudio_Az_Input_SD1FMT                         0x12000B2
#define mmAudio_Az_Input_SD1BDPL                        0x12000B8
#define mmAudio_Az_Input_SD1BDPU                        0x12000BC
#define mmAudio_Az_Input_SD2CTL_and_STS                 0x12000C0
#define mmAudio_Az_Input_SD2LPIB                        0x12000C4
#define mmAudio_Az_Input_SD2CBL                         0x12000C8
#define mmAudio_Az_Input_SD2LVI                         0x12000CC
#define mmAudio_Az_Input_SD2FIFOS                       0x12000D0
#define mmAudio_Az_Input_SD2FMT                         0x12000D2
#define mmAudio_Az_Input_SD2BDPL                        0x12000D8
#define mmAudio_Az_Input_SD2BDPU                        0x12000DC
#define mmAudio_Az_Input_SD3CTL_and_STS                 0x12000E0
#define mmAudio_Az_Input_SD3LPIB                        0x12000E4
#define mmAudio_Az_Input_SD3CBL                         0x12000E8
#define mmAudio_Az_Input_SD3LVI                         0x12000EC
#define mmAudio_Az_Input_SD3FIFOS                       0x12000F0
#define mmAudio_Az_Input_SD3FMT                         0x12000F2
#define mmAudio_Az_Input_SD3BDPL                        0x12000F8
#define mmAudio_Az_Input_SD3BDPU                        0x12000FC
#define mmAudio_Az_Output_SD0CTL_and_STS                0x1200100
#define mmAudio_Az_Output_SD0LPIB                       0x1200104
#define mmAudio_Az_Output_SD0CBL                        0x1200108
#define mmAudio_Az_Output_SD0LVI                        0x120010C
#define mmAudio_Az_Output_SD0FIFOS                      0x1200110
#define mmAudio_Az_Output_SD0FMT                        0x1200112
#define mmAudio_Az_Output_SD0BDPL                       0x1200118
#define mmAudio_Az_Output_SD0BDPU                       0x120011C
#define mmAudio_Az_Output_SD1CTL_and_STS                0x1200120
#define mmAudio_Az_Output_SD1LPIB                       0x1200124
#define mmAudio_Az_Output_SD1CBL                        0x1200128
#define mmAudio_Az_Output_SD1LVI                        0x120012C
#define mmAudio_Az_Output_SD1FIFOS                      0x1200130
#define mmAudio_Az_Output_SD1FMT                        0x1200132
#define mmAudio_Az_Output_SD1BDPL                       0x1200138
#define mmAudio_Az_Output_SD1BDPU                       0x120013C
#define mmAudio_Az_Output_SD2CTL_and_STS                0x1200140
#define mmAudio_Az_Output_SD2LPIB                       0x1200144
#define mmAudio_Az_Output_SD2CBL                        0x1200148
#define mmAudio_Az_Output_SD2LVI                        0x120014C
#define mmAudio_Az_Output_SD2FIFOS                      0x1200150
#define mmAudio_Az_Output_SD2FMT                        0x1200152
#define mmAudio_Az_Output_SD2BDPL                       0x1200158
#define mmAudio_Az_Output_SD2BDPU                       0x120015C
#define mmAudio_Az_Output_SD3CTL_and_STS                0x1200160
#define mmAudio_Az_Output_SD3LPIB                       0x1200164
#define mmAudio_Az_Output_SD3CBL                        0x1200168
#define mmAudio_Az_Output_SD3LVI                        0x120016C
#define mmAudio_Az_Output_SD3FIFOS                      0x1200170
#define mmAudio_Az_Output_SD3FMT                        0x1200172
#define mmAudio_Az_Output_SD3BDPL                       0x1200178
#define mmAudio_Az_Output_SD3BDPU                       0x120017C
#define mmAudioAZ_Misc_Control_Register_1               0x1200180
#define mmAudioAZ_Misc_Control_Register_2               0x1200182
#define mmAudioAZ_Misc_Control_Register_3               0x1200183
#define mmAudio_AZ_Multiple_Links_Capability_Header     0x1200200
#define mmAudio_AZ_Multiple_Links_Capability_Declaration 0x1200204
#define mmAudio_AZ_Link0_Capabilities                   0x1200240
#define mmAudio_AZ_Link0_Control                        0x1200244
#define mmAudio_AZ_Link0_Output_Stream_ID               0x1200248
#define mmAudio_AZ_Link0_SDI_Identifier                 0x120024C
#define mmAudio_AZ_Link0_Per_Stream_Overhead            0x1200250
#define mmAudio_AZ_Link0_Wall_Frame_Counter             0x1200258
#define mmAudio_AZ_Link0_Output_Payload_Capability_L    0x1200260
#define mmAudio_AZ_Link0_Output_Payload_Capability_U    0x1200264
#define mmAudio_AZ_Link0_Input_Payload_Capability_L     0x1200270
#define mmAudio_AZ_Link0_Input_Payload_Capability_U     0x1200274
#define mmAudio_Az_Input_SD0LICBA                       0x1202084
#define mmAudio_Az_Input_SD1LICBA                       0x12020A4
#define mmAudio_Az_Input_SD2LICBA                       0x12020C4
#define mmAudio_Az_Input_SD3LICBA                       0x12020E4
#define mmAudio_Az_Output_SD0LICBA                      0x1202104
#define mmAudio_Az_Output_SD1LICBA                      0x1202124
#define mmAudio_Az_Output_SD2LICBA                      0x1202144
#define mmAudio_Az_Output_SD3LICBA                      0x1202164
#define mmAUDIO_AZ_POWER_MANAGEMENT_CONTROL             0x1204000
#define mmAUDIO_AZ_IOC_SOFTRST_CONTROL                  0x1204004
#define mmAUDIO_AZ_IOC_CLKGATE_CONTROL                  0x1204008


// Registers from ACP_AZALIA block

#define mmACP_AZ_PAGE0_LBASE_ADDR                       0x1243800
#define mmACP_AZ_PAGE0_UBASE_ADDR                       0x1243804
#define mmACP_AZ_PAGE0_PGEN_SIZE                        0x1243808
#define mmACP_AZ_PAGE0_OFFSET                           0x124380C
#define mmACP_AZ_PAGE1_LBASE_ADDR                       0x1243810
#define mmACP_AZ_PAGE1_UBASE_ADDR                       0x1243814
#define mmACP_AZ_PAGE1_PGEN_SIZE                        0x1243818
#define mmACP_AZ_PAGE1_OFFSET                           0x124381C
#define mmACP_AZ_PAGE2_LBASE_ADDR                       0x1243820
#define mmACP_AZ_PAGE2_UBASE_ADDR                       0x1243824
#define mmACP_AZ_PAGE2_PGEN_SIZE                        0x1243828
#define mmACP_AZ_PAGE2_OFFSET                           0x124382C
#define mmACP_AZ_PAGE3_LBASE_ADDR                       0x1243830
#define mmACP_AZ_PAGE3_UBASE_ADDR                       0x1243834
#define mmACP_AZ_PAGE3_PGEN_SIZE                        0x1243838
#define mmACP_AZ_PAGE3_OFFSET                           0x124383C
#define mmACP_AZ_PAGE4_LBASE_ADDR                       0x1243840
#define mmACP_AZ_PAGE4_UBASE_ADDR                       0x1243844
#define mmACP_AZ_PAGE4_PGEN_SIZE                        0x1243848
#define mmACP_AZ_PAGE4_OFFSET                           0x124384C
#define mmACP_AZ_PAGE5_LBASE_ADDR                       0x1243850
#define mmACP_AZ_PAGE5_UBASE_ADDR                       0x1243854
#define mmACP_AZ_PAGE5_PGEN_SIZE                        0x1243858
#define mmACP_AZ_PAGE5_OFFSET                           0x124385C
#define mmACP_AZ_PAGE6_LBASE_ADDR                       0x1243860
#define mmACP_AZ_PAGE6_UBASE_ADDR                       0x1243864
#define mmACP_AZ_PAGE6_PGEN_SIZE                        0x1243868
#define mmACP_AZ_PAGE6_OFFSET                           0x124386C
#define mmACP_AZ_PAGE7_LBASE_ADDR                       0x1243870
#define mmACP_AZ_PAGE7_UBASE_ADDR                       0x1243874
#define mmACP_AZ_PAGE7_PGEN_SIZE                        0x1243878
#define mmACP_AZ_PAGE7_OFFSET                           0x124387C


#endif
