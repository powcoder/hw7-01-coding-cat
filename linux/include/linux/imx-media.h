https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (c) 2014-2017 Mentor Graphics Inc.
 */

#ifndef __LINUX_IMX_MEDIA_H__
#define __LINUX_IMX_MEDIA_H__

/*
 * events from the subdevs
 */
#define V4L2_EVENT_IMX_CLASS                V4L2_EVENT_PRIVATE_START
#define V4L2_EVENT_IMX_FRAME_INTERVAL_ERROR (V4L2_EVENT_IMX_CLASS + 1)

enum imx_ctrl_id {
	V4L2_CID_IMX_FIM_ENABLE = (V4L2_CID_USER_IMX_BASE + 0),
	V4L2_CID_IMX_FIM_NUM,
	V4L2_CID_IMX_FIM_TOLERANCE_MIN,
	V4L2_CID_IMX_FIM_TOLERANCE_MAX,
	V4L2_CID_IMX_FIM_NUM_SKIP,
	V4L2_CID_IMX_FIM_ICAP_EDGE,
	V4L2_CID_IMX_FIM_ICAP_CHANNEL,
};

#endif
