https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * RDMA Network Block Driver
 *
 * Copyright (c) 2014 - 2018 ProfitBricks GmbH. All rights reserved.
 * Copyright (c) 2018 - 2019 1&1 IONOS Cloud GmbH. All rights reserved.
 * Copyright (c) 2019 - 2020 1&1 IONOS SE. All rights reserved.
 */
#undef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME " L" __stringify(__LINE__) ": " fmt

#include <uapi/linux/limits.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/stat.h>
#include <linux/genhd.h>
#include <linux/list.h>
#include <linux/moduleparam.h>
#include <linux/device.h>

#include "rnbd-srv.h"

static struct device *rnbd_dev;
static struct class *rnbd_dev_class;
static struct kobject *rnbd_devs_kobj;

static void rnbd_srv_dev_release(struct kobject *kobj)
{
	struct rnbd_srv_dev *dev;

	dev = container_of(kobj, struct rnbd_srv_dev, dev_kobj);

	kfree(dev);
}

static struct kobj_type dev_ktype = {
	.sysfs_ops = &kobj_sysfs_ops,
	.release = rnbd_srv_dev_release
};

int rnbd_srv_create_dev_sysfs(struct rnbd_srv_dev *dev,
			       struct block_device *bdev,
			       const char *dev_name)
{
	struct kobject *bdev_kobj;
	int ret;

	ret = kobject_init_and_add(&dev->dev_kobj, &dev_ktype,
				   rnbd_devs_kobj, dev_name);
	if (ret)
		return ret;

	dev->dev_sessions_kobj = kobject_create_and_add("sessions",
							&dev->dev_kobj);
	if (!dev->dev_sessions_kobj)
		goto put_dev_kobj;

	bdev_kobj = &disk_to_dev(bdev->bd_disk)->kobj;
	ret = sysfs_create_link(&dev->dev_kobj, bdev_kobj, "block_dev");
	if (ret)
		goto put_sess_kobj;

	return 0;

put_sess_kobj:
	kobject_put(dev->dev_sessions_kobj);
put_dev_kobj:
	kobject_put(&dev->dev_kobj);
	return ret;
}

void rnbd_srv_destroy_dev_sysfs(struct rnbd_srv_dev *dev)
{
	sysfs_remove_link(&dev->dev_kobj, "block_dev");
	kobject_del(dev->dev_sessions_kobj);
	kobject_put(dev->dev_sessions_kobj);
	kobject_del(&dev->dev_kobj);
	kobject_put(&dev->dev_kobj);
}

static ssize_t read_only_show(struct kobject *kobj, struct kobj_attribute *attr,
			      char *page)
{
	struct rnbd_srv_sess_dev *sess_dev;

	sess_dev = container_of(kobj, struct rnbd_srv_sess_dev, kobj);

	return scnprintf(page, PAGE_SIZE, "%d\n",
			 !(sess_dev->open_flags & FMODE_WRITE));
}

static struct kobj_attribute rnbd_srv_dev_session_ro_attr =
	__ATTR_RO(read_only);

static ssize_t access_mode_show(struct kobject *kobj,
				struct kobj_attribute *attr,
				char *page)
{
	struct rnbd_srv_sess_dev *sess_dev;

	sess_dev = container_of(kobj, struct rnbd_srv_sess_dev, kobj);

	return scnprintf(page, PAGE_SIZE, "%s\n",
			 rnbd_access_mode_str(sess_dev->access_mode));
}

static struct kobj_attribute rnbd_srv_dev_session_access_mode_attr =
	__ATTR_RO(access_mode);

static ssize_t mapping_path_show(struct kobject *kobj,
				 struct kobj_attribute *attr, char *page)
{
	struct rnbd_srv_sess_dev *sess_dev;

	sess_dev = container_of(kobj, struct rnbd_srv_sess_dev, kobj);

	return scnprintf(page, PAGE_SIZE, "%s\n", sess_dev->pathname);
}

static struct kobj_attribute rnbd_srv_dev_session_mapping_path_attr =
	__ATTR_RO(mapping_path);

static struct attribute *rnbd_srv_default_dev_sessions_attrs[] = {
	&rnbd_srv_dev_session_access_mode_attr.attr,
	&rnbd_srv_dev_session_ro_attr.attr,
	&rnbd_srv_dev_session_mapping_path_attr.attr,
	NULL,
};

static struct attribute_group rnbd_srv_default_dev_session_attr_group = {
	.attrs = rnbd_srv_default_dev_sessions_attrs,
};

void rnbd_srv_destroy_dev_session_sysfs(struct rnbd_srv_sess_dev *sess_dev)
{
	sysfs_remove_group(&sess_dev->kobj,
			   &rnbd_srv_default_dev_session_attr_group);

	kobject_del(&sess_dev->kobj);
	kobject_put(&sess_dev->kobj);
}

static void rnbd_srv_sess_dev_release(struct kobject *kobj)
{
	struct rnbd_srv_sess_dev *sess_dev;

	sess_dev = container_of(kobj, struct rnbd_srv_sess_dev, kobj);
	rnbd_destroy_sess_dev(sess_dev);
}

static struct kobj_type rnbd_srv_sess_dev_ktype = {
	.sysfs_ops	= &kobj_sysfs_ops,
	.release	= rnbd_srv_sess_dev_release,
};

int rnbd_srv_create_dev_session_sysfs(struct rnbd_srv_sess_dev *sess_dev)
{
	int ret;

	ret = kobject_init_and_add(&sess_dev->kobj, &rnbd_srv_sess_dev_ktype,
				   sess_dev->dev->dev_sessions_kobj, "%s",
				   sess_dev->sess->sessname);
	if (ret)
		return ret;

	ret = sysfs_create_group(&sess_dev->kobj,
				 &rnbd_srv_default_dev_session_attr_group);
	if (ret)
		goto err;

	return 0;

err:
	kobject_put(&sess_dev->kobj);

	return ret;
}

int rnbd_srv_create_sysfs_files(void)
{
	int err;

	rnbd_dev_class = class_create(THIS_MODULE, "rnbd-server");
	if (IS_ERR(rnbd_dev_class))
		return PTR_ERR(rnbd_dev_class);

	rnbd_dev = device_create(rnbd_dev_class, NULL,
				  MKDEV(0, 0), NULL, "ctl");
	if (IS_ERR(rnbd_dev)) {
		err = PTR_ERR(rnbd_dev);
		goto cls_destroy;
	}
	rnbd_devs_kobj = kobject_create_and_add("devices", &rnbd_dev->kobj);
	if (!rnbd_devs_kobj) {
		err = -ENOMEM;
		goto dev_destroy;
	}

	return 0;

dev_destroy:
	device_destroy(rnbd_dev_class, MKDEV(0, 0));
cls_destroy:
	class_destroy(rnbd_dev_class);

	return err;
}

void rnbd_srv_destroy_sysfs_files(void)
{
	kobject_del(rnbd_devs_kobj);
	kobject_put(rnbd_devs_kobj);
	device_destroy(rnbd_dev_class, MKDEV(0, 0));
	class_destroy(rnbd_dev_class);
}
