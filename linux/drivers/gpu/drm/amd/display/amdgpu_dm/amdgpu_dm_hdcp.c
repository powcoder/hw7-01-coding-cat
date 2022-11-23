https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * Copyright 2019 Advanced Micro Devices, Inc.
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
 * Authors: AMD
 *
 */

#include "amdgpu_dm_hdcp.h"
#include "amdgpu.h"
#include "amdgpu_dm.h"
#include "dm_helpers.h"
#include <drm/drm_hdcp.h>
#include "hdcp_psp.h"

/*
 * If the SRM version being loaded is less than or equal to the
 * currently loaded SRM, psp will return 0xFFFF as the version
 */
#define PSP_SRM_VERSION_MAX 0xFFFF

static bool
lp_write_i2c(void *handle, uint32_t address, const uint8_t *data, uint32_t size)
{

	struct dc_link *link = handle;
	struct i2c_payload i2c_payloads[] = {{true, address, size, (void *)data} };
	struct i2c_command cmd = {i2c_payloads, 1, I2C_COMMAND_ENGINE_HW, link->dc->caps.i2c_speed_in_khz};

	return dm_helpers_submit_i2c(link->ctx, link, &cmd);
}

static bool
lp_read_i2c(void *handle, uint32_t address, uint8_t offset, uint8_t *data, uint32_t size)
{
	struct dc_link *link = handle;

	struct i2c_payload i2c_payloads[] = {{true, address, 1, &offset}, {false, address, size, data} };
	struct i2c_command cmd = {i2c_payloads, 2, I2C_COMMAND_ENGINE_HW, link->dc->caps.i2c_speed_in_khz};

	return dm_helpers_submit_i2c(link->ctx, link, &cmd);
}

static bool
lp_write_dpcd(void *handle, uint32_t address, const uint8_t *data, uint32_t size)
{
	struct dc_link *link = handle;

	return dm_helpers_dp_write_dpcd(link->ctx, link, address, data, size);
}

static bool
lp_read_dpcd(void *handle, uint32_t address, uint8_t *data, uint32_t size)
{
	struct dc_link *link = handle;

	return dm_helpers_dp_read_dpcd(link->ctx, link, address, data, size);
}

static uint8_t *psp_get_srm(struct psp_context *psp, uint32_t *srm_version, uint32_t *srm_size)
{

	struct ta_hdcp_shared_memory *hdcp_cmd;

	if (!psp->hdcp_context.hdcp_initialized) {
		DRM_WARN("Failed to get hdcp srm. HDCP TA is not initialized.");
		return NULL;
	}

	hdcp_cmd = (struct ta_hdcp_shared_memory *)psp->hdcp_context.hdcp_shared_buf;
	memset(hdcp_cmd, 0, sizeof(struct ta_hdcp_shared_memory));

	hdcp_cmd->cmd_id = TA_HDCP_COMMAND__HDCP_GET_SRM;
	psp_hdcp_invoke(psp, hdcp_cmd->cmd_id);

	if (hdcp_cmd->hdcp_status != TA_HDCP_STATUS__SUCCESS)
		return NULL;

	*srm_version = hdcp_cmd->out_msg.hdcp_get_srm.srm_version;
	*srm_size = hdcp_cmd->out_msg.hdcp_get_srm.srm_buf_size;


	return hdcp_cmd->out_msg.hdcp_get_srm.srm_buf;
}

static int psp_set_srm(struct psp_context *psp, uint8_t *srm, uint32_t srm_size, uint32_t *srm_version)
{

	struct ta_hdcp_shared_memory *hdcp_cmd;

	if (!psp->hdcp_context.hdcp_initialized) {
		DRM_WARN("Failed to get hdcp srm. HDCP TA is not initialized.");
		return -EINVAL;
	}

	hdcp_cmd = (struct ta_hdcp_shared_memory *)psp->hdcp_context.hdcp_shared_buf;
	memset(hdcp_cmd, 0, sizeof(struct ta_hdcp_shared_memory));

	memcpy(hdcp_cmd->in_msg.hdcp_set_srm.srm_buf, srm, srm_size);
	hdcp_cmd->in_msg.hdcp_set_srm.srm_buf_size = srm_size;
	hdcp_cmd->cmd_id = TA_HDCP_COMMAND__HDCP_SET_SRM;

	psp_hdcp_invoke(psp, hdcp_cmd->cmd_id);

	if (hdcp_cmd->hdcp_status != TA_HDCP_STATUS__SUCCESS || hdcp_cmd->out_msg.hdcp_set_srm.valid_signature != 1 ||
	    hdcp_cmd->out_msg.hdcp_set_srm.srm_version == PSP_SRM_VERSION_MAX)
		return -EINVAL;

	*srm_version = hdcp_cmd->out_msg.hdcp_set_srm.srm_version;
	return 0;
}

static void process_output(struct hdcp_workqueue *hdcp_work)
{
	struct mod_hdcp_output output = hdcp_work->output;

	if (output.callback_stop)
		cancel_delayed_work(&hdcp_work->callback_dwork);

	if (output.callback_needed)
		schedule_delayed_work(&hdcp_work->callback_dwork,
				      msecs_to_jiffies(output.callback_delay));

	if (output.watchdog_timer_stop)
		cancel_delayed_work(&hdcp_work->watchdog_timer_dwork);

	if (output.watchdog_timer_needed)
		schedule_delayed_work(&hdcp_work->watchdog_timer_dwork,
				      msecs_to_jiffies(output.watchdog_timer_delay));

	schedule_delayed_work(&hdcp_work->property_validate_dwork, msecs_to_jiffies(0));
}

static void link_lock(struct hdcp_workqueue *work, bool lock)
{

	int i = 0;

	for (i = 0; i < work->max_link; i++) {
		if (lock)
			mutex_lock(&work[i].mutex);
		else
			mutex_unlock(&work[i].mutex);
	}
}
void hdcp_update_display(struct hdcp_workqueue *hdcp_work,
			 unsigned int link_index,
			 struct amdgpu_dm_connector *aconnector,
			 uint8_t content_type,
			 bool enable_encryption)
{
	struct hdcp_workqueue *hdcp_w = &hdcp_work[link_index];
	struct mod_hdcp_display *display = &hdcp_work[link_index].display;
	struct mod_hdcp_link *link = &hdcp_work[link_index].link;
	struct mod_hdcp_display_query query;

	mutex_lock(&hdcp_w->mutex);
	hdcp_w->aconnector = aconnector;

	query.display = NULL;
	mod_hdcp_query_display(&hdcp_w->hdcp, aconnector->base.index, &query);

	if (query.display != NULL) {
		memcpy(display, query.display, sizeof(struct mod_hdcp_display));
		mod_hdcp_remove_display(&hdcp_w->hdcp, aconnector->base.index, &hdcp_w->output);

		hdcp_w->link.adjust.hdcp2.force_type = MOD_HDCP_FORCE_TYPE_0;

		if (enable_encryption) {
			/* Explicitly set the saved SRM as sysfs call will be after we already enabled hdcp
			 * (s3 resume case)
			 */
			if (hdcp_work->srm_size > 0)
				psp_set_srm(hdcp_work->hdcp.config.psp.handle, hdcp_work->srm, hdcp_work->srm_size,
					    &hdcp_work->srm_version);

			display->adjust.disable = 0;
			if (content_type == DRM_MODE_HDCP_CONTENT_TYPE0) {
				hdcp_w->link.adjust.hdcp1.disable = 0;
				hdcp_w->link.adjust.hdcp2.force_type = MOD_HDCP_FORCE_TYPE_0;
			} else if (content_type == DRM_MODE_HDCP_CONTENT_TYPE1) {
				hdcp_w->link.adjust.hdcp1.disable = 1;
				hdcp_w->link.adjust.hdcp2.force_type = MOD_HDCP_FORCE_TYPE_1;
			}

			schedule_delayed_work(&hdcp_w->property_validate_dwork,
					      msecs_to_jiffies(DRM_HDCP_CHECK_PERIOD_MS));
		} else {
			display->adjust.disable = 1;
			hdcp_w->encryption_status = MOD_HDCP_ENCRYPTION_STATUS_HDCP_OFF;
			cancel_delayed_work(&hdcp_w->property_validate_dwork);
		}

		display->state = MOD_HDCP_DISPLAY_ACTIVE;
	}

	mod_hdcp_add_display(&hdcp_w->hdcp, link, display, &hdcp_w->output);

	process_output(hdcp_w);
	mutex_unlock(&hdcp_w->mutex);
}

static void hdcp_remove_display(struct hdcp_workqueue *hdcp_work,
			 unsigned int link_index,
			 struct amdgpu_dm_connector *aconnector)
{
	struct hdcp_workqueue *hdcp_w = &hdcp_work[link_index];

	mutex_lock(&hdcp_w->mutex);
	hdcp_w->aconnector = aconnector;

	mod_hdcp_remove_display(&hdcp_w->hdcp, aconnector->base.index, &hdcp_w->output);

	process_output(hdcp_w);
	mutex_unlock(&hdcp_w->mutex);
}
void hdcp_reset_display(struct hdcp_workqueue *hdcp_work, unsigned int link_index)
{
	struct hdcp_workqueue *hdcp_w = &hdcp_work[link_index];

	mutex_lock(&hdcp_w->mutex);

	mod_hdcp_reset_connection(&hdcp_w->hdcp,  &hdcp_w->output);

	cancel_delayed_work(&hdcp_w->property_validate_dwork);
	hdcp_w->encryption_status = MOD_HDCP_ENCRYPTION_STATUS_HDCP_OFF;

	process_output(hdcp_w);

	mutex_unlock(&hdcp_w->mutex);
}

void hdcp_handle_cpirq(struct hdcp_workqueue *hdcp_work, unsigned int link_index)
{
	struct hdcp_workqueue *hdcp_w = &hdcp_work[link_index];

	schedule_work(&hdcp_w->cpirq_work);
}




static void event_callback(struct work_struct *work)
{
	struct hdcp_workqueue *hdcp_work;

	hdcp_work = container_of(to_delayed_work(work), struct hdcp_workqueue,
				      callback_dwork);

	mutex_lock(&hdcp_work->mutex);

	cancel_delayed_work(&hdcp_work->callback_dwork);

	mod_hdcp_process_event(&hdcp_work->hdcp, MOD_HDCP_EVENT_CALLBACK,
			       &hdcp_work->output);

	process_output(hdcp_work);

	mutex_unlock(&hdcp_work->mutex);


}
static void event_property_update(struct work_struct *work)
{

	struct hdcp_workqueue *hdcp_work = container_of(work, struct hdcp_workqueue, property_update_work);
	struct amdgpu_dm_connector *aconnector = hdcp_work->aconnector;
	struct drm_device *dev = hdcp_work->aconnector->base.dev;
	long ret;

	drm_modeset_lock(&dev->mode_config.connection_mutex, NULL);
	mutex_lock(&hdcp_work->mutex);


	if (aconnector->base.state->commit) {
		ret = wait_for_completion_interruptible_timeout(&aconnector->base.state->commit->hw_done, 10 * HZ);

		if (ret == 0) {
			DRM_ERROR("HDCP state unknown! Setting it to DESIRED");
			hdcp_work->encryption_status = MOD_HDCP_ENCRYPTION_STATUS_HDCP_OFF;
		}
	}

	if (hdcp_work->encryption_status != MOD_HDCP_ENCRYPTION_STATUS_HDCP_OFF) {
		if (aconnector->base.state->hdcp_content_type == DRM_MODE_HDCP_CONTENT_TYPE0 &&
		    hdcp_work->encryption_status <= MOD_HDCP_ENCRYPTION_STATUS_HDCP2_TYPE0_ON)
			drm_hdcp_update_content_protection(&aconnector->base, DRM_MODE_CONTENT_PROTECTION_ENABLED);
		else if (aconnector->base.state->hdcp_content_type == DRM_MODE_HDCP_CONTENT_TYPE1 &&
			 hdcp_work->encryption_status == MOD_HDCP_ENCRYPTION_STATUS_HDCP2_TYPE1_ON)
			drm_hdcp_update_content_protection(&aconnector->base, DRM_MODE_CONTENT_PROTECTION_ENABLED);
	} else {
		drm_hdcp_update_content_protection(&aconnector->base, DRM_MODE_CONTENT_PROTECTION_DESIRED);
	}


	mutex_unlock(&hdcp_work->mutex);
	drm_modeset_unlock(&dev->mode_config.connection_mutex);
}

static void event_property_validate(struct work_struct *work)
{
	struct hdcp_workqueue *hdcp_work =
		container_of(to_delayed_work(work), struct hdcp_workqueue, property_validate_dwork);
	struct mod_hdcp_display_query query;
	struct amdgpu_dm_connector *aconnector = hdcp_work->aconnector;

	if (!aconnector)
		return;

	mutex_lock(&hdcp_work->mutex);

	query.encryption_status = MOD_HDCP_ENCRYPTION_STATUS_HDCP_OFF;
	mod_hdcp_query_display(&hdcp_work->hdcp, aconnector->base.index, &query);

	if (query.encryption_status != hdcp_work->encryption_status) {
		hdcp_work->encryption_status = query.encryption_status;
		schedule_work(&hdcp_work->property_update_work);
	}

	mutex_unlock(&hdcp_work->mutex);
}

static void event_watchdog_timer(struct work_struct *work)
{
	struct hdcp_workqueue *hdcp_work;

	hdcp_work = container_of(to_delayed_work(work),
				      struct hdcp_workqueue,
				      watchdog_timer_dwork);

	mutex_lock(&hdcp_work->mutex);

	cancel_delayed_work(&hdcp_work->watchdog_timer_dwork);

	mod_hdcp_process_event(&hdcp_work->hdcp,
			       MOD_HDCP_EVENT_WATCHDOG_TIMEOUT,
			       &hdcp_work->output);

	process_output(hdcp_work);

	mutex_unlock(&hdcp_work->mutex);

}

static void event_cpirq(struct work_struct *work)
{
	struct hdcp_workqueue *hdcp_work;

	hdcp_work = container_of(work, struct hdcp_workqueue, cpirq_work);

	mutex_lock(&hdcp_work->mutex);

	mod_hdcp_process_event(&hdcp_work->hdcp, MOD_HDCP_EVENT_CPIRQ, &hdcp_work->output);

	process_output(hdcp_work);

	mutex_unlock(&hdcp_work->mutex);

}


void hdcp_destroy(struct kobject *kobj, struct hdcp_workqueue *hdcp_work)
{
	int i = 0;

	for (i = 0; i < hdcp_work->max_link; i++) {
		cancel_delayed_work_sync(&hdcp_work[i].callback_dwork);
		cancel_delayed_work_sync(&hdcp_work[i].watchdog_timer_dwork);
	}

	sysfs_remove_bin_file(kobj, &hdcp_work[0].attr);
	kfree(hdcp_work->srm);
	kfree(hdcp_work->srm_temp);
	kfree(hdcp_work);
}


static bool enable_assr(void *handle, struct dc_link *link)
{

	struct hdcp_workqueue *hdcp_work = handle;
	struct mod_hdcp hdcp = hdcp_work->hdcp;
	struct psp_context *psp = hdcp.config.psp.handle;
	struct ta_dtm_shared_memory *dtm_cmd;
	bool res = true;

	if (!psp->dtm_context.dtm_initialized) {
		DRM_INFO("Failed to enable ASSR, DTM TA is not initialized.");
		return false;
	}

	dtm_cmd = (struct ta_dtm_shared_memory *)psp->dtm_context.dtm_shared_buf;

	mutex_lock(&psp->dtm_context.mutex);
	memset(dtm_cmd, 0, sizeof(struct ta_dtm_shared_memory));

	dtm_cmd->cmd_id = TA_DTM_COMMAND__TOPOLOGY_ASSR_ENABLE;
	dtm_cmd->dtm_in_message.topology_assr_enable.display_topology_dig_be_index = link->link_enc_hw_inst;
	dtm_cmd->dtm_status = TA_DTM_STATUS__GENERIC_FAILURE;

	psp_dtm_invoke(psp, dtm_cmd->cmd_id);

	if (dtm_cmd->dtm_status != TA_DTM_STATUS__SUCCESS) {
		DRM_INFO("Failed to enable ASSR");
		res = false;
	}

	mutex_unlock(&psp->dtm_context.mutex);

	return res;
}

static void update_config(void *handle, struct cp_psp_stream_config *config)
{
	struct hdcp_workqueue *hdcp_work = handle;
	struct amdgpu_dm_connector *aconnector = config->dm_stream_ctx;
	int link_index = aconnector->dc_link->link_index;
	struct mod_hdcp_display *display = &hdcp_work[link_index].display;
	struct mod_hdcp_link *link = &hdcp_work[link_index].link;

	if (config->dpms_off) {
		hdcp_remove_display(hdcp_work, link_index, aconnector);
		return;
	}

	memset(display, 0, sizeof(*display));
	memset(link, 0, sizeof(*link));

	display->index = aconnector->base.index;
	display->state = MOD_HDCP_DISPLAY_ACTIVE;

	if (aconnector->dc_sink != NULL)
		link->mode = mod_hdcp_signal_type_to_operation_mode(aconnector->dc_sink->sink_signal);

	display->controller = CONTROLLER_ID_D0 + config->otg_inst;
	display->dig_fe = config->stream_enc_inst;
	link->dig_be = config->link_enc_inst;
	link->ddc_line = aconnector->dc_link->ddc_hw_inst + 1;
	link->dp.rev = aconnector->dc_link->dpcd_caps.dpcd_rev.raw;
	link->dp.mst_supported = config->mst_supported;
	display->adjust.disable = 1;
	link->adjust.auth_delay = 3;
	link->adjust.hdcp1.disable = 0;

	hdcp_update_display(hdcp_work, link_index, aconnector, DRM_MODE_HDCP_CONTENT_TYPE0, false);
}


/* NOTE: From the usermodes prospective you only need to call write *ONCE*, the kernel
 *      will automatically call once or twice depending on the size
 *
 * call: "cat file > /sys/class/drm/card0/device/hdcp_srm" from usermode no matter what the size is
 *
 * The kernel can only send PAGE_SIZE at once and since MAX_SRM_FILE(5120) > PAGE_SIZE(4096),
 * srm_data_write can be called multiple times.
 *
 * sysfs interface doesn't tell us the size we will get so we are sending partial SRMs to psp and on
 * the last call we will send the full SRM. PSP will fail on every call before the last.
 *
 * This means we don't know if the SRM is good until the last call. And because of this limitation we
 * cannot throw errors early as it will stop the kernel from writing to sysfs
 *
 * Example 1:
 * 	Good SRM size = 5096
 * 	first call to write 4096 -> PSP fails
 * 	Second call to write 1000 -> PSP Pass -> SRM is set
 *
 * Example 2:
 * 	Bad SRM size = 4096
 * 	first call to write 4096 -> PSP fails (This is the same as above, but we don't know if this
 * 	is the last call)
 *
 * Solution?:
 * 	1: Parse the SRM? -> It is signed so we don't know the EOF
 * 	2: We can have another sysfs that passes the size before calling set. -> simpler solution
 * 	below
 *
 * Easy Solution:
 * Always call get after Set to verify if set was successful.
 * +----------------------+
 * |   Why it works:      |
 * +----------------------+
 * PSP will only update its srm if its older than the one we are trying to load.
 * Always do set first than get.
 * 	-if we try to "1. SET" a older version PSP will reject it and we can "2. GET" the newer
 * 	version and save it
 *
 * 	-if we try to "1. SET" a newer version PSP will accept it and we can "2. GET" the
 * 	same(newer) version back and save it
 *
 * 	-if we try to "1. SET" a newer version and PSP rejects it. That means the format is
 * 	incorrect/corrupted and we should correct our SRM by getting it from PSP
 */
static ssize_t srm_data_write(struct file *filp, struct kobject *kobj, struct bin_attribute *bin_attr, char *buffer,
			      loff_t pos, size_t count)
{
	struct hdcp_workqueue *work;
	uint32_t srm_version = 0;

	work = container_of(bin_attr, struct hdcp_workqueue, attr);
	link_lock(work, true);

	memcpy(work->srm_temp + pos, buffer, count);

	if (!psp_set_srm(work->hdcp.config.psp.handle, work->srm_temp, pos + count, &srm_version)) {
		DRM_DEBUG_DRIVER("HDCP SRM SET version 0x%X", srm_version);
		memcpy(work->srm, work->srm_temp, pos + count);
		work->srm_size = pos + count;
		work->srm_version = srm_version;
	}


	link_lock(work, false);

	return count;
}

static ssize_t srm_data_read(struct file *filp, struct kobject *kobj, struct bin_attribute *bin_attr, char *buffer,
			     loff_t pos, size_t count)
{
	struct hdcp_workqueue *work;
	uint8_t *srm = NULL;
	uint32_t srm_version;
	uint32_t srm_size;
	size_t ret = count;

	work = container_of(bin_attr, struct hdcp_workqueue, attr);

	link_lock(work, true);

	srm = psp_get_srm(work->hdcp.config.psp.handle, &srm_version, &srm_size);

	if (!srm) {
		ret = -EINVAL;
		goto ret;
	}

	if (pos >= srm_size)
		ret = 0;

	if (srm_size - pos < count) {
		memcpy(buffer, srm + pos, srm_size - pos);
		ret = srm_size - pos;
		goto ret;
	}

	memcpy(buffer, srm + pos, count);

ret:
	link_lock(work, false);
	return ret;
}

/* From the hdcp spec (5.Renewability) SRM needs to be stored in a non-volatile memory.
 *
 * For example,
 * 	if Application "A" sets the SRM (ver 2) and we reboot/suspend and later when Application "B"
 * 	needs to use HDCP, the version in PSP should be SRM(ver 2). So SRM should be persistent
 * 	across boot/reboots/suspend/resume/shutdown
 *
 * Currently when the system goes down (suspend/shutdown) the SRM is cleared from PSP. For HDCP we need
 * to make the SRM persistent.
 *
 * -PSP owns the checking of SRM but doesn't have the ability to store it in a non-volatile memory.
 * -The kernel cannot write to the file systems.
 * -So we need usermode to do this for us, which is why an interface for usermode is needed
 *
 *
 *
 * Usermode can read/write to/from PSP using the sysfs interface
 * For example:
 * 	to save SRM from PSP to storage : cat /sys/class/drm/card0/device/hdcp_srm > srmfile
 * 	to load from storage to PSP: cat srmfile > /sys/class/drm/card0/device/hdcp_srm
 */
static const struct bin_attribute data_attr = {
	.attr = {.name = "hdcp_srm", .mode = 0664},
	.size = PSP_HDCP_SRM_FIRST_GEN_MAX_SIZE, /* Limit SRM size */
	.write = srm_data_write,
	.read = srm_data_read,
};


struct hdcp_workqueue *hdcp_create_workqueue(struct amdgpu_device *adev, struct cp_psp *cp_psp, struct dc *dc)
{

	int max_caps = dc->caps.max_links;
	struct hdcp_workqueue *hdcp_work;
	int i = 0;

	hdcp_work = kcalloc(max_caps, sizeof(*hdcp_work), GFP_KERNEL);
	if (ZERO_OR_NULL_PTR(hdcp_work))
		return NULL;

	hdcp_work->srm = kcalloc(PSP_HDCP_SRM_FIRST_GEN_MAX_SIZE, sizeof(*hdcp_work->srm), GFP_KERNEL);

	if (hdcp_work->srm == NULL)
		goto fail_alloc_context;

	hdcp_work->srm_temp = kcalloc(PSP_HDCP_SRM_FIRST_GEN_MAX_SIZE, sizeof(*hdcp_work->srm_temp), GFP_KERNEL);

	if (hdcp_work->srm_temp == NULL)
		goto fail_alloc_context;

	hdcp_work->max_link = max_caps;

	for (i = 0; i < max_caps; i++) {
		mutex_init(&hdcp_work[i].mutex);

		INIT_WORK(&hdcp_work[i].cpirq_work, event_cpirq);
		INIT_WORK(&hdcp_work[i].property_update_work, event_property_update);
		INIT_DELAYED_WORK(&hdcp_work[i].callback_dwork, event_callback);
		INIT_DELAYED_WORK(&hdcp_work[i].watchdog_timer_dwork, event_watchdog_timer);
		INIT_DELAYED_WORK(&hdcp_work[i].property_validate_dwork, event_property_validate);

		hdcp_work[i].hdcp.config.psp.handle = &adev->psp;
		hdcp_work[i].hdcp.config.ddc.handle = dc_get_link_at_index(dc, i);
		hdcp_work[i].hdcp.config.ddc.funcs.write_i2c = lp_write_i2c;
		hdcp_work[i].hdcp.config.ddc.funcs.read_i2c = lp_read_i2c;
		hdcp_work[i].hdcp.config.ddc.funcs.write_dpcd = lp_write_dpcd;
		hdcp_work[i].hdcp.config.ddc.funcs.read_dpcd = lp_read_dpcd;
	}

	cp_psp->funcs.update_stream_config = update_config;
	cp_psp->funcs.enable_assr = enable_assr;
	cp_psp->handle = hdcp_work;

	/* File created at /sys/class/drm/card0/device/hdcp_srm*/
	hdcp_work[0].attr = data_attr;
	sysfs_bin_attr_init(&hdcp_work[0].attr);

	if (sysfs_create_bin_file(&adev->dev->kobj, &hdcp_work[0].attr))
		DRM_WARN("Failed to create device file hdcp_srm");

	return hdcp_work;

fail_alloc_context:
	kfree(hdcp_work->srm);
	kfree(hdcp_work->srm_temp);
	kfree(hdcp_work);

	return NULL;



}



