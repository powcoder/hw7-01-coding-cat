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

#include "dmub_hw_lock_mgr.h"
#include "dc_dmub_srv.h"
#include "dc_types.h"
#include "core_types.h"

void dmub_hw_lock_mgr_cmd(struct dc_dmub_srv *dmub_srv,
				bool lock,
				union dmub_hw_lock_flags *hw_locks,
				struct dmub_hw_lock_inst_flags *inst_flags)
{
	union dmub_rb_cmd cmd = { 0 };

	cmd.lock_hw.header.type = DMUB_CMD__HW_LOCK;
	cmd.lock_hw.header.sub_type = 0;
	cmd.lock_hw.header.payload_bytes = sizeof(struct dmub_cmd_lock_hw_data);
	cmd.lock_hw.lock_hw_data.client = HW_LOCK_CLIENT_DRIVER;
	cmd.lock_hw.lock_hw_data.lock = lock;
	cmd.lock_hw.lock_hw_data.hw_locks.u8All = hw_locks->u8All;
	memcpy(&cmd.lock_hw.lock_hw_data.inst_flags, inst_flags, sizeof(struct dmub_hw_lock_inst_flags));

	if (!lock)
		cmd.lock_hw.lock_hw_data.should_release = 1;

	dc_dmub_srv_cmd_queue(dmub_srv, &cmd);
	dc_dmub_srv_cmd_execute(dmub_srv);
	dc_dmub_srv_wait_idle(dmub_srv);
}

bool should_use_dmub_lock(struct dc_link *link)
{
	return false;
}
