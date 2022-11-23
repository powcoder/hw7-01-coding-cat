https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <linux/device.h>
#include "pl111_drm.h"

#ifndef PL111_VERSATILE_H
#define PL111_VERSATILE_H

struct device;
struct pl111_drm_dev_private;

int pl111_versatile_init(struct device *dev, struct pl111_drm_dev_private *priv);

#endif
