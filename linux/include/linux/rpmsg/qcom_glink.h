https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef _LINUX_RPMSG_QCOM_GLINK_H
#define _LINUX_RPMSG_QCOM_GLINK_H

#include <linux/device.h>

struct qcom_glink;

#if IS_ENABLED(CONFIG_RPMSG_QCOM_GLINK_SMEM)

struct qcom_glink *qcom_glink_smem_register(struct device *parent,
					    struct device_node *node);
void qcom_glink_smem_unregister(struct qcom_glink *glink);
void qcom_glink_ssr_notify(const char *ssr_name);

#else

static inline struct qcom_glink *
qcom_glink_smem_register(struct device *parent,
			 struct device_node *node)
{
	return NULL;
}

static inline void qcom_glink_smem_unregister(struct qcom_glink *glink) {}
static inline void qcom_glink_ssr_notify(const char *ssr_name) {}
#endif

#endif
