https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0 */
/* Copyright (c) 2015-2018 Mellanox Technologies. All rights reserved */

#ifndef _MLXSW_TRAP_H
#define _MLXSW_TRAP_H

enum {
	/* Ethernet EMAD and FDB miss */
	MLXSW_TRAP_ID_FDB_MC = 0x01,
	MLXSW_TRAP_ID_ETHEMAD = 0x05,
	/* L2 traps for specific packet types */
	MLXSW_TRAP_ID_STP = 0x10,
	MLXSW_TRAP_ID_LACP = 0x11,
	MLXSW_TRAP_ID_EAPOL = 0x12,
	MLXSW_TRAP_ID_LLDP = 0x13,
	MLXSW_TRAP_ID_MMRP = 0x14,
	MLXSW_TRAP_ID_MVRP = 0x15,
	MLXSW_TRAP_ID_RPVST = 0x16,
	MLXSW_TRAP_ID_DHCP = 0x19,
	MLXSW_TRAP_ID_PTP0 = 0x28,
	MLXSW_TRAP_ID_PTP1 = 0x29,
	MLXSW_TRAP_ID_IGMP_QUERY = 0x30,
	MLXSW_TRAP_ID_IGMP_V1_REPORT = 0x31,
	MLXSW_TRAP_ID_IGMP_V2_REPORT = 0x32,
	MLXSW_TRAP_ID_IGMP_V2_LEAVE = 0x33,
	MLXSW_TRAP_ID_IGMP_V3_REPORT = 0x34,
	MLXSW_TRAP_ID_PKT_SAMPLE = 0x38,
	MLXSW_TRAP_ID_FID_MISS = 0x3D,
	MLXSW_TRAP_ID_DECAP_ECN0 = 0x40,
	MLXSW_TRAP_ID_ARPBC = 0x50,
	MLXSW_TRAP_ID_ARPUC = 0x51,
	MLXSW_TRAP_ID_MTUERROR = 0x52,
	MLXSW_TRAP_ID_TTLERROR = 0x53,
	MLXSW_TRAP_ID_LBERROR = 0x54,
	MLXSW_TRAP_ID_IPV4_OSPF = 0x55,
	MLXSW_TRAP_ID_IPV4_PIM = 0x58,
	MLXSW_TRAP_ID_IPV4_VRRP = 0x59,
	MLXSW_TRAP_ID_RPF = 0x5C,
	MLXSW_TRAP_ID_IP2ME = 0x5F,
	MLXSW_TRAP_ID_IPV6_UNSPECIFIED_ADDRESS = 0x60,
	MLXSW_TRAP_ID_IPV6_LINK_LOCAL_DEST = 0x61,
	MLXSW_TRAP_ID_IPV6_LINK_LOCAL_SRC = 0x62,
	MLXSW_TRAP_ID_IPV6_ALL_NODES_LINK = 0x63,
	MLXSW_TRAP_ID_IPV6_OSPF = 0x64,
	MLXSW_TRAP_ID_IPV6_MLDV12_LISTENER_QUERY = 0x65,
	MLXSW_TRAP_ID_IPV6_MLDV1_LISTENER_REPORT = 0x66,
	MLXSW_TRAP_ID_IPV6_MLDV1_LISTENER_DONE = 0x67,
	MLXSW_TRAP_ID_IPV6_MLDV2_LISTENER_REPORT = 0x68,
	MLXSW_TRAP_ID_IPV6_DHCP = 0x69,
	MLXSW_TRAP_ID_IPV6_ALL_ROUTERS_LINK = 0x6F,
	MLXSW_TRAP_ID_RTR_INGRESS0 = 0x70,
	MLXSW_TRAP_ID_RTR_INGRESS1 = 0x71,
	MLXSW_TRAP_ID_IPV6_PIM = 0x79,
	MLXSW_TRAP_ID_IPV6_VRRP = 0x7A,
	MLXSW_TRAP_ID_IPV4_BGP = 0x88,
	MLXSW_TRAP_ID_IPV6_BGP = 0x89,
	MLXSW_TRAP_ID_L3_IPV6_ROUTER_SOLICITATION = 0x8A,
	MLXSW_TRAP_ID_L3_IPV6_ROUTER_ADVERTISEMENT = 0x8B,
	MLXSW_TRAP_ID_L3_IPV6_NEIGHBOR_SOLICITATION = 0x8C,
	MLXSW_TRAP_ID_L3_IPV6_NEIGHBOR_ADVERTISEMENT = 0x8D,
	MLXSW_TRAP_ID_L3_IPV6_REDIRECTION = 0x8E,
	MLXSW_TRAP_ID_IPV4_DHCP = 0x8F,
	MLXSW_TRAP_ID_HOST_MISS_IPV4 = 0x90,
	MLXSW_TRAP_ID_IPV6_MC_LINK_LOCAL_DEST = 0x91,
	MLXSW_TRAP_ID_HOST_MISS_IPV6 = 0x92,
	MLXSW_TRAP_ID_IPIP_DECAP_ERROR = 0xB1,
	MLXSW_TRAP_ID_NVE_DECAP_ARP = 0xB8,
	MLXSW_TRAP_ID_NVE_ENCAP_ARP = 0xBD,
	MLXSW_TRAP_ID_IPV4_BFD = 0xD0,
	MLXSW_TRAP_ID_IPV6_BFD = 0xD1,
	MLXSW_TRAP_ID_ROUTER_ALERT_IPV4 = 0xD6,
	MLXSW_TRAP_ID_ROUTER_ALERT_IPV6 = 0xD7,
	MLXSW_TRAP_ID_DISCARD_NON_ROUTABLE = 0x11A,
	MLXSW_TRAP_ID_DISCARD_ROUTER2 = 0x130,
	MLXSW_TRAP_ID_DISCARD_ROUTER3 = 0x131,
	MLXSW_TRAP_ID_DISCARD_ING_PACKET_SMAC_MC = 0x140,
	MLXSW_TRAP_ID_DISCARD_ING_SWITCH_VTAG_ALLOW = 0x148,
	MLXSW_TRAP_ID_DISCARD_ING_SWITCH_VLAN = 0x149,
	MLXSW_TRAP_ID_DISCARD_ING_SWITCH_STP = 0x14A,
	MLXSW_TRAP_ID_DISCARD_LOOKUP_SWITCH_UC = 0x150,
	MLXSW_TRAP_ID_DISCARD_LOOKUP_SWITCH_MC_NULL = 0x151,
	MLXSW_TRAP_ID_DISCARD_LOOKUP_SWITCH_LB = 0x152,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_NON_IP_PACKET = 0x160,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_UC_DIP_MC_DMAC = 0x161,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_DIP_LB = 0x162,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_SIP_MC = 0x163,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_SIP_CLASS_E = 0x164,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_SIP_LB = 0x165,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_CORRUPTED_IP_HDR = 0x167,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_MC_DMAC = 0x168,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_SIP_DIP = 0x169,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_IPV4_SIP_BC = 0x16A,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_IPV4_DIP_LOCAL_NET = 0x16B,
	MLXSW_TRAP_ID_DISCARD_ING_ROUTER_DIP_LINK_LOCAL = 0x16C,
	MLXSW_TRAP_ID_DISCARD_ROUTER_IRIF_EN = 0x178,
	MLXSW_TRAP_ID_DISCARD_ROUTER_ERIF_EN = 0x179,
	MLXSW_TRAP_ID_DISCARD_ROUTER_LPM4 = 0x17B,
	MLXSW_TRAP_ID_DISCARD_ROUTER_LPM6 = 0x17C,
	MLXSW_TRAP_ID_DISCARD_DEC_PKT = 0x188,
	MLXSW_TRAP_ID_DISCARD_OVERLAY_SMAC_MC = 0x190,
	MLXSW_TRAP_ID_DISCARD_IPV6_MC_DIP_RESERVED_SCOPE = 0x1B0,
	MLXSW_TRAP_ID_DISCARD_IPV6_MC_DIP_INTERFACE_LOCAL_SCOPE = 0x1B1,
	MLXSW_TRAP_ID_ACL0 = 0x1C0,
	/* Multicast trap used for routes with trap action */
	MLXSW_TRAP_ID_ACL1 = 0x1C1,
	/* Multicast trap used for routes with trap-and-forward action */
	MLXSW_TRAP_ID_ACL2 = 0x1C2,
	MLXSW_TRAP_ID_DISCARD_INGRESS_ACL = 0x1C3,
	MLXSW_TRAP_ID_DISCARD_EGRESS_ACL = 0x1C4,
	MLXSW_TRAP_ID_MIRROR_SESSION0 = 0x220,
	MLXSW_TRAP_ID_MIRROR_SESSION1 = 0x221,
	MLXSW_TRAP_ID_MIRROR_SESSION2 = 0x222,
	MLXSW_TRAP_ID_MIRROR_SESSION3 = 0x223,
	MLXSW_TRAP_ID_MIRROR_SESSION4 = 0x224,
	MLXSW_TRAP_ID_MIRROR_SESSION5 = 0x225,
	MLXSW_TRAP_ID_MIRROR_SESSION6 = 0x226,
	MLXSW_TRAP_ID_MIRROR_SESSION7 = 0x227,

	MLXSW_TRAP_ID_MAX = 0x3FF,
};

enum mlxsw_event_trap_id {
	/* Fatal Event generated by FW */
	MLXSW_TRAP_ID_MFDE = 0x3,
	/* Port Up/Down event generated by hardware */
	MLXSW_TRAP_ID_PUDE = 0x8,
	/* Port Module Plug/Unplug Event generated by hardware */
	MLXSW_TRAP_ID_PMPE = 0x9,
	/* Temperature Warning event generated by hardware */
	MLXSW_TRAP_ID_MTWE = 0xC,
	/* PTP Ingress FIFO has a new entry */
	MLXSW_TRAP_ID_PTP_ING_FIFO = 0x2D,
	/* PTP Egress FIFO has a new entry */
	MLXSW_TRAP_ID_PTP_EGR_FIFO = 0x2E,
};

#endif /* _MLXSW_TRAP_H */
