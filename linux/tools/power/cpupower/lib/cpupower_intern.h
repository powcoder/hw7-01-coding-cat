https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */
#define PATH_TO_CPU "/sys/devices/system/cpu/"
#define MAX_LINE_LEN 4096
#define SYSFS_PATH_MAX 255

unsigned int cpupower_read_sysfs(const char *path, char *buf, size_t buflen);
