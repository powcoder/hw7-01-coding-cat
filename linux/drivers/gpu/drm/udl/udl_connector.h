https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef __UDL_CONNECTOR_H__
#define __UDL_CONNECTOR_H__

#include <drm/drm_crtc.h>

struct edid;

struct udl_drm_connector {
	struct drm_connector connector;
	/* last udl_detect edid */
	struct edid *edid;
};


#endif //__UDL_CONNECTOR_H__
