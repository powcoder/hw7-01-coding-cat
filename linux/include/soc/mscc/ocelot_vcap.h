https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: (GPL-2.0 OR MIT)
 * Microsemi Ocelot Switch driver
 * Copyright (c) 2019 Microsemi Corporation
 */

#ifndef _OCELOT_VCAP_H_
#define _OCELOT_VCAP_H_

#include <soc/mscc/ocelot.h>

/* =================================================================
 *  VCAP Common
 * =================================================================
 */

enum {
	VCAP_ES0,
	VCAP_IS1,
	VCAP_IS2,
	__VCAP_COUNT,
};

#define OCELOT_NUM_VCAP_BLOCKS		__VCAP_COUNT

struct vcap_props {
	u16 tg_width; /* Type-group width (in bits) */
	u16 sw_count; /* Sub word count */
	u16 entry_count; /* Entry count */
	u16 entry_words; /* Number of entry words */
	u16 entry_width; /* Entry width (in bits) */
	u16 action_count; /* Action count */
	u16 action_words; /* Number of action words */
	u16 action_width; /* Action width (in bits) */
	u16 action_type_width; /* Action type width (in bits) */
	struct {
		u16 width; /* Action type width (in bits) */
		u16 count; /* Action type sub word count */
	} action_table[2];
	u16 counter_words; /* Number of counter words */
	u16 counter_width; /* Counter width (in bits) */

	enum ocelot_target		target;

	const struct vcap_field		*keys;
	const struct vcap_field		*actions;
};

/* VCAP Type-Group values */
#define VCAP_TG_NONE 0 /* Entry is invalid */
#define VCAP_TG_FULL 1 /* Full entry */
#define VCAP_TG_HALF 2 /* Half entry */
#define VCAP_TG_QUARTER 3 /* Quarter entry */

#define VCAP_CORE_UPDATE_CTRL_UPDATE_CMD(x)      (((x) << 22) & GENMASK(24, 22))
#define VCAP_CORE_UPDATE_CTRL_UPDATE_CMD_M       GENMASK(24, 22)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_CMD_X(x)    (((x) & GENMASK(24, 22)) >> 22)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_ENTRY_DIS   BIT(21)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_ACTION_DIS  BIT(20)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_CNT_DIS     BIT(19)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_ADDR(x)     (((x) << 3) & GENMASK(18, 3))
#define VCAP_CORE_UPDATE_CTRL_UPDATE_ADDR_M      GENMASK(18, 3)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_ADDR_X(x)   (((x) & GENMASK(18, 3)) >> 3)
#define VCAP_CORE_UPDATE_CTRL_UPDATE_SHOT        BIT(2)
#define VCAP_CORE_UPDATE_CTRL_CLEAR_CACHE        BIT(1)
#define VCAP_CORE_UPDATE_CTRL_MV_TRAFFIC_IGN     BIT(0)

#define VCAP_CORE_MV_CFG_MV_NUM_POS(x)           (((x) << 16) & GENMASK(31, 16))
#define VCAP_CORE_MV_CFG_MV_NUM_POS_M            GENMASK(31, 16)
#define VCAP_CORE_MV_CFG_MV_NUM_POS_X(x)         (((x) & GENMASK(31, 16)) >> 16)
#define VCAP_CORE_MV_CFG_MV_SIZE(x)              ((x) & GENMASK(15, 0))
#define VCAP_CORE_MV_CFG_MV_SIZE_M               GENMASK(15, 0)

#define VCAP_CACHE_ENTRY_DAT_RSZ                 0x4

#define VCAP_CACHE_MASK_DAT_RSZ                  0x4

#define VCAP_CACHE_ACTION_DAT_RSZ                0x4

#define VCAP_CACHE_CNT_DAT_RSZ                   0x4

#define VCAP_STICKY_VCAP_ROW_DELETED_STICKY      BIT(0)

#define TCAM_BIST_CTRL_TCAM_BIST                 BIT(1)
#define TCAM_BIST_CTRL_TCAM_INIT                 BIT(0)

#define TCAM_BIST_CFG_TCAM_BIST_SOE_ENA          BIT(8)
#define TCAM_BIST_CFG_TCAM_HCG_DIS               BIT(7)
#define TCAM_BIST_CFG_TCAM_CG_DIS                BIT(6)
#define TCAM_BIST_CFG_TCAM_BIAS(x)               ((x) & GENMASK(5, 0))
#define TCAM_BIST_CFG_TCAM_BIAS_M                GENMASK(5, 0)

#define TCAM_BIST_STAT_BIST_RT_ERR               BIT(15)
#define TCAM_BIST_STAT_BIST_PENC_ERR             BIT(14)
#define TCAM_BIST_STAT_BIST_COMP_ERR             BIT(13)
#define TCAM_BIST_STAT_BIST_ADDR_ERR             BIT(12)
#define TCAM_BIST_STAT_BIST_BL1E_ERR             BIT(11)
#define TCAM_BIST_STAT_BIST_BL1_ERR              BIT(10)
#define TCAM_BIST_STAT_BIST_BL0E_ERR             BIT(9)
#define TCAM_BIST_STAT_BIST_BL0_ERR              BIT(8)
#define TCAM_BIST_STAT_BIST_PH1_ERR              BIT(7)
#define TCAM_BIST_STAT_BIST_PH0_ERR              BIT(6)
#define TCAM_BIST_STAT_BIST_PV1_ERR              BIT(5)
#define TCAM_BIST_STAT_BIST_PV0_ERR              BIT(4)
#define TCAM_BIST_STAT_BIST_RUN                  BIT(3)
#define TCAM_BIST_STAT_BIST_ERR                  BIT(2)
#define TCAM_BIST_STAT_BIST_BUSY                 BIT(1)
#define TCAM_BIST_STAT_TCAM_RDY                  BIT(0)

/* =================================================================
 *  VCAP IS2
 * =================================================================
 */

/* IS2 half key types */
#define IS2_TYPE_ETYPE 0
#define IS2_TYPE_LLC 1
#define IS2_TYPE_SNAP 2
#define IS2_TYPE_ARP 3
#define IS2_TYPE_IP_UDP_TCP 4
#define IS2_TYPE_IP_OTHER 5
#define IS2_TYPE_IPV6 6
#define IS2_TYPE_OAM 7
#define IS2_TYPE_SMAC_SIP6 8
#define IS2_TYPE_ANY 100 /* Pseudo type */

/* IS2 half key type mask for matching any IP */
#define IS2_TYPE_MASK_IP_ANY 0xe

enum {
	IS2_ACTION_TYPE_NORMAL,
	IS2_ACTION_TYPE_SMAC_SIP,
	IS2_ACTION_TYPE_MAX,
};

/* IS2 MASK_MODE values */
#define IS2_ACT_MASK_MODE_NONE 0
#define IS2_ACT_MASK_MODE_FILTER 1
#define IS2_ACT_MASK_MODE_POLICY 2
#define IS2_ACT_MASK_MODE_REDIR 3

/* IS2 REW_OP values */
#define IS2_ACT_REW_OP_NONE 0
#define IS2_ACT_REW_OP_PTP_ONE 2
#define IS2_ACT_REW_OP_PTP_TWO 3
#define IS2_ACT_REW_OP_SPECIAL 8
#define IS2_ACT_REW_OP_PTP_ORG 9
#define IS2_ACT_REW_OP_PTP_ONE_SUB_DELAY_1 (IS2_ACT_REW_OP_PTP_ONE | (1 << 3))
#define IS2_ACT_REW_OP_PTP_ONE_SUB_DELAY_2 (IS2_ACT_REW_OP_PTP_ONE | (2 << 3))
#define IS2_ACT_REW_OP_PTP_ONE_ADD_DELAY (IS2_ACT_REW_OP_PTP_ONE | (1 << 5))
#define IS2_ACT_REW_OP_PTP_ONE_ADD_SUB BIT(7)

#define VCAP_PORT_WIDTH 4

/* IS2 quarter key - SMAC_SIP4 */
#define IS2_QKO_IGR_PORT 0
#define IS2_QKL_IGR_PORT VCAP_PORT_WIDTH
#define IS2_QKO_L2_SMAC (IS2_QKO_IGR_PORT + IS2_QKL_IGR_PORT)
#define IS2_QKL_L2_SMAC 48
#define IS2_QKO_L3_IP4_SIP (IS2_QKO_L2_SMAC + IS2_QKL_L2_SMAC)
#define IS2_QKL_L3_IP4_SIP 32

enum vcap_is2_half_key_field {
	/* Common */
	VCAP_IS2_TYPE,
	VCAP_IS2_HK_FIRST,
	VCAP_IS2_HK_PAG,
	VCAP_IS2_HK_RSV1,
	VCAP_IS2_HK_IGR_PORT_MASK,
	VCAP_IS2_HK_RSV2,
	VCAP_IS2_HK_HOST_MATCH,
	VCAP_IS2_HK_L2_MC,
	VCAP_IS2_HK_L2_BC,
	VCAP_IS2_HK_VLAN_TAGGED,
	VCAP_IS2_HK_VID,
	VCAP_IS2_HK_DEI,
	VCAP_IS2_HK_PCP,
	/* MAC_ETYPE / MAC_LLC / MAC_SNAP / OAM common */
	VCAP_IS2_HK_L2_DMAC,
	VCAP_IS2_HK_L2_SMAC,
	/* MAC_ETYPE (TYPE=000) */
	VCAP_IS2_HK_MAC_ETYPE_ETYPE,
	VCAP_IS2_HK_MAC_ETYPE_L2_PAYLOAD0,
	VCAP_IS2_HK_MAC_ETYPE_L2_PAYLOAD1,
	VCAP_IS2_HK_MAC_ETYPE_L2_PAYLOAD2,
	/* MAC_LLC (TYPE=001) */
	VCAP_IS2_HK_MAC_LLC_DMAC,
	VCAP_IS2_HK_MAC_LLC_SMAC,
	VCAP_IS2_HK_MAC_LLC_L2_LLC,
	/* MAC_SNAP (TYPE=010) */
	VCAP_IS2_HK_MAC_SNAP_SMAC,
	VCAP_IS2_HK_MAC_SNAP_DMAC,
	VCAP_IS2_HK_MAC_SNAP_L2_SNAP,
	/* MAC_ARP (TYPE=011) */
	VCAP_IS2_HK_MAC_ARP_SMAC,
	VCAP_IS2_HK_MAC_ARP_ADDR_SPACE_OK,
	VCAP_IS2_HK_MAC_ARP_PROTO_SPACE_OK,
	VCAP_IS2_HK_MAC_ARP_LEN_OK,
	VCAP_IS2_HK_MAC_ARP_TARGET_MATCH,
	VCAP_IS2_HK_MAC_ARP_SENDER_MATCH,
	VCAP_IS2_HK_MAC_ARP_OPCODE_UNKNOWN,
	VCAP_IS2_HK_MAC_ARP_OPCODE,
	VCAP_IS2_HK_MAC_ARP_L3_IP4_DIP,
	VCAP_IS2_HK_MAC_ARP_L3_IP4_SIP,
	VCAP_IS2_HK_MAC_ARP_DIP_EQ_SIP,
	/* IP4_TCP_UDP / IP4_OTHER common */
	VCAP_IS2_HK_IP4,
	VCAP_IS2_HK_L3_FRAGMENT,
	VCAP_IS2_HK_L3_FRAG_OFS_GT0,
	VCAP_IS2_HK_L3_OPTIONS,
	VCAP_IS2_HK_IP4_L3_TTL_GT0,
	VCAP_IS2_HK_L3_TOS,
	VCAP_IS2_HK_L3_IP4_DIP,
	VCAP_IS2_HK_L3_IP4_SIP,
	VCAP_IS2_HK_DIP_EQ_SIP,
	/* IP4_TCP_UDP (TYPE=100) */
	VCAP_IS2_HK_TCP,
	VCAP_IS2_HK_L4_SPORT,
	VCAP_IS2_HK_L4_DPORT,
	VCAP_IS2_HK_L4_RNG,
	VCAP_IS2_HK_L4_SPORT_EQ_DPORT,
	VCAP_IS2_HK_L4_SEQUENCE_EQ0,
	VCAP_IS2_HK_L4_URG,
	VCAP_IS2_HK_L4_ACK,
	VCAP_IS2_HK_L4_PSH,
	VCAP_IS2_HK_L4_RST,
	VCAP_IS2_HK_L4_SYN,
	VCAP_IS2_HK_L4_FIN,
	VCAP_IS2_HK_L4_1588_DOM,
	VCAP_IS2_HK_L4_1588_VER,
	/* IP4_OTHER (TYPE=101) */
	VCAP_IS2_HK_IP4_L3_PROTO,
	VCAP_IS2_HK_L3_PAYLOAD,
	/* IP6_STD (TYPE=110) */
	VCAP_IS2_HK_IP6_L3_TTL_GT0,
	VCAP_IS2_HK_IP6_L3_PROTO,
	VCAP_IS2_HK_L3_IP6_SIP,
	/* OAM (TYPE=111) */
	VCAP_IS2_HK_OAM_MEL_FLAGS,
	VCAP_IS2_HK_OAM_VER,
	VCAP_IS2_HK_OAM_OPCODE,
	VCAP_IS2_HK_OAM_FLAGS,
	VCAP_IS2_HK_OAM_MEPID,
	VCAP_IS2_HK_OAM_CCM_CNTS_EQ0,
	VCAP_IS2_HK_OAM_IS_Y1731,
};

struct vcap_field {
	int offset;
	int length;
};

enum vcap_is2_action_field {
	VCAP_IS2_ACT_HIT_ME_ONCE,
	VCAP_IS2_ACT_CPU_COPY_ENA,
	VCAP_IS2_ACT_CPU_QU_NUM,
	VCAP_IS2_ACT_MASK_MODE,
	VCAP_IS2_ACT_MIRROR_ENA,
	VCAP_IS2_ACT_LRN_DIS,
	VCAP_IS2_ACT_POLICE_ENA,
	VCAP_IS2_ACT_POLICE_IDX,
	VCAP_IS2_ACT_POLICE_VCAP_ONLY,
	VCAP_IS2_ACT_PORT_MASK,
	VCAP_IS2_ACT_REW_OP,
	VCAP_IS2_ACT_SMAC_REPLACE_ENA,
	VCAP_IS2_ACT_RSV,
	VCAP_IS2_ACT_ACL_ID,
	VCAP_IS2_ACT_HIT_CNT,
};

/* =================================================================
 *  VCAP IS1
 * =================================================================
 */

/* IS1 half key types */
#define IS1_TYPE_S1_NORMAL 0
#define IS1_TYPE_S1_5TUPLE_IP4 1

/* IS1 full key types */
#define IS1_TYPE_S1_NORMAL_IP6 0
#define IS1_TYPE_S1_7TUPLE 1
#define IS2_TYPE_S1_5TUPLE_IP6 2

enum {
	IS1_ACTION_TYPE_NORMAL,
	IS1_ACTION_TYPE_MAX,
};

enum vcap_is1_half_key_field {
	VCAP_IS1_HK_TYPE,
	VCAP_IS1_HK_LOOKUP,
	VCAP_IS1_HK_IGR_PORT_MASK,
	VCAP_IS1_HK_RSV,
	VCAP_IS1_HK_OAM_Y1731,
	VCAP_IS1_HK_L2_MC,
	VCAP_IS1_HK_L2_BC,
	VCAP_IS1_HK_IP_MC,
	VCAP_IS1_HK_VLAN_TAGGED,
	VCAP_IS1_HK_VLAN_DBL_TAGGED,
	VCAP_IS1_HK_TPID,
	VCAP_IS1_HK_VID,
	VCAP_IS1_HK_DEI,
	VCAP_IS1_HK_PCP,
	/* Specific Fields for IS1 Half Key S1_NORMAL */
	VCAP_IS1_HK_L2_SMAC,
	VCAP_IS1_HK_ETYPE_LEN,
	VCAP_IS1_HK_ETYPE,
	VCAP_IS1_HK_IP_SNAP,
	VCAP_IS1_HK_IP4,
	VCAP_IS1_HK_L3_FRAGMENT,
	VCAP_IS1_HK_L3_FRAG_OFS_GT0,
	VCAP_IS1_HK_L3_OPTIONS,
	VCAP_IS1_HK_L3_DSCP,
	VCAP_IS1_HK_L3_IP4_SIP,
	VCAP_IS1_HK_TCP_UDP,
	VCAP_IS1_HK_TCP,
	VCAP_IS1_HK_L4_SPORT,
	VCAP_IS1_HK_L4_RNG,
	/* Specific Fields for IS1 Half Key S1_5TUPLE_IP4 */
	VCAP_IS1_HK_IP4_INNER_TPID,
	VCAP_IS1_HK_IP4_INNER_VID,
	VCAP_IS1_HK_IP4_INNER_DEI,
	VCAP_IS1_HK_IP4_INNER_PCP,
	VCAP_IS1_HK_IP4_IP4,
	VCAP_IS1_HK_IP4_L3_FRAGMENT,
	VCAP_IS1_HK_IP4_L3_FRAG_OFS_GT0,
	VCAP_IS1_HK_IP4_L3_OPTIONS,
	VCAP_IS1_HK_IP4_L3_DSCP,
	VCAP_IS1_HK_IP4_L3_IP4_DIP,
	VCAP_IS1_HK_IP4_L3_IP4_SIP,
	VCAP_IS1_HK_IP4_L3_PROTO,
	VCAP_IS1_HK_IP4_TCP_UDP,
	VCAP_IS1_HK_IP4_TCP,
	VCAP_IS1_HK_IP4_L4_RNG,
	VCAP_IS1_HK_IP4_IP_PAYLOAD_S1_5TUPLE,
};

enum vcap_is1_action_field {
	VCAP_IS1_ACT_DSCP_ENA,
	VCAP_IS1_ACT_DSCP_VAL,
	VCAP_IS1_ACT_QOS_ENA,
	VCAP_IS1_ACT_QOS_VAL,
	VCAP_IS1_ACT_DP_ENA,
	VCAP_IS1_ACT_DP_VAL,
	VCAP_IS1_ACT_PAG_OVERRIDE_MASK,
	VCAP_IS1_ACT_PAG_VAL,
	VCAP_IS1_ACT_RSV,
	VCAP_IS1_ACT_VID_REPLACE_ENA,
	VCAP_IS1_ACT_VID_ADD_VAL,
	VCAP_IS1_ACT_FID_SEL,
	VCAP_IS1_ACT_FID_VAL,
	VCAP_IS1_ACT_PCP_DEI_ENA,
	VCAP_IS1_ACT_PCP_VAL,
	VCAP_IS1_ACT_DEI_VAL,
	VCAP_IS1_ACT_VLAN_POP_CNT_ENA,
	VCAP_IS1_ACT_VLAN_POP_CNT,
	VCAP_IS1_ACT_CUSTOM_ACE_TYPE_ENA,
	VCAP_IS1_ACT_HIT_STICKY,
};

/* =================================================================
 *  VCAP ES0
 * =================================================================
 */

enum {
	ES0_ACTION_TYPE_NORMAL,
	ES0_ACTION_TYPE_MAX,
};

enum vcap_es0_key_field {
	VCAP_ES0_EGR_PORT,
	VCAP_ES0_IGR_PORT,
	VCAP_ES0_RSV,
	VCAP_ES0_L2_MC,
	VCAP_ES0_L2_BC,
	VCAP_ES0_VID,
	VCAP_ES0_DP,
	VCAP_ES0_PCP,
};

enum vcap_es0_action_field {
	VCAP_ES0_ACT_PUSH_OUTER_TAG,
	VCAP_ES0_ACT_PUSH_INNER_TAG,
	VCAP_ES0_ACT_TAG_A_TPID_SEL,
	VCAP_ES0_ACT_TAG_A_VID_SEL,
	VCAP_ES0_ACT_TAG_A_PCP_SEL,
	VCAP_ES0_ACT_TAG_A_DEI_SEL,
	VCAP_ES0_ACT_TAG_B_TPID_SEL,
	VCAP_ES0_ACT_TAG_B_VID_SEL,
	VCAP_ES0_ACT_TAG_B_PCP_SEL,
	VCAP_ES0_ACT_TAG_B_DEI_SEL,
	VCAP_ES0_ACT_VID_A_VAL,
	VCAP_ES0_ACT_PCP_A_VAL,
	VCAP_ES0_ACT_DEI_A_VAL,
	VCAP_ES0_ACT_VID_B_VAL,
	VCAP_ES0_ACT_PCP_B_VAL,
	VCAP_ES0_ACT_DEI_B_VAL,
	VCAP_ES0_ACT_RSV,
	VCAP_ES0_ACT_HIT_STICKY,
};

#endif /* _OCELOT_VCAP_H_ */
