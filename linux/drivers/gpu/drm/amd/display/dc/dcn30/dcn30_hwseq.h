https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
* Copyright 2020 Advanced Micro Devices, Inc.
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

#ifndef __DC_HWSS_DCN30_H__
#define __DC_HWSS_DCN30_H__

#include "hw_sequencer_private.h"

struct dc;

void dcn30_init_hw(struct dc *dc);
void dcn30_program_all_writeback_pipes_in_tree(
		struct dc *dc,
		const struct dc_stream_state *stream,
		struct dc_state *context);
void dcn30_update_writeback(
		struct dc *dc,
		struct dc_writeback_info *wb_info,
		struct dc_state *context);
void dcn30_enable_writeback(
		struct dc *dc,
		struct dc_writeback_info *wb_info,
		struct dc_state *context);
void dcn30_disable_writeback(
		struct dc *dc,
		unsigned int dwb_pipe_inst);

bool dcn30_mmhubbub_warmup(
	struct dc *dc,
	unsigned int num_dwb,
	struct dc_writeback_info *wb_info);

bool dcn30_set_blend_lut(struct pipe_ctx *pipe_ctx,
		const struct dc_plane_state *plane_state);

bool dcn30_set_input_transfer_func(struct dc *dc,
				struct pipe_ctx *pipe_ctx,
				const struct dc_plane_state *plane_state);
bool dcn30_set_output_transfer_func(struct dc *dc,
				struct pipe_ctx *pipe_ctx,
				const struct dc_stream_state *stream);
void dcn30_set_avmute(struct pipe_ctx *pipe_ctx, bool enable);
void dcn30_update_info_frame(struct pipe_ctx *pipe_ctx);
void dcn30_program_dmdata_engine(struct pipe_ctx *pipe_ctx);

bool dcn30_apply_idle_power_optimizations(struct dc *dc, bool enable);

#endif /* __DC_HWSS_DCN30_H__ */