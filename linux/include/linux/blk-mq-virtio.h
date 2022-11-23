https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_BLK_MQ_VIRTIO_H
#define _LINUX_BLK_MQ_VIRTIO_H

struct blk_mq_queue_map;
struct virtio_device;

int blk_mq_virtio_map_queues(struct blk_mq_queue_map *qmap,
		struct virtio_device *vdev, int first_vec);

#endif /* _LINUX_BLK_MQ_VIRTIO_H */
