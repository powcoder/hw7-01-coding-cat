https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
# SPDX-License-Identifier: GPL-2.0
source ../mirror_gre_scale.sh

mirror_gre_get_target()
{
	local should_fail=$1; shift
	local target

	target=$(devlink_resource_size_get span_agents)

	if ((! should_fail)); then
		echo $target
	else
		echo $((target + 1))
	fi
}
