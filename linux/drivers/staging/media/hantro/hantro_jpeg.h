https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */

#define JPEG_HEADER_SIZE	601

struct hantro_jpeg_ctx {
	int width;
	int height;
	int quality;
	unsigned char *buffer;
};

unsigned char *hantro_jpeg_get_qtable(int index);
void hantro_jpeg_header_assemble(struct hantro_jpeg_ctx *ctx);
