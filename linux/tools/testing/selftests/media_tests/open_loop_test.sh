https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash
# SPDX-License-Identifier: GPL-2.0
 i=0
file=/dev/media$1
 while :; do
  echo $file
  i=$((i+1))
  R=$(./media_device_open -d $file);
 # clear
  echo -e "Loop $i\n$R"
 done