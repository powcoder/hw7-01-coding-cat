https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash

set -eufo pipefail

for i in base tp rawtp kprobe fentry fmodret
do
	summary=$(sudo ./bench -w2 -d5 -a trig-$i | tail -n1 | cut -d'(' -f1 | cut -d' ' -f3-)
	printf "%-10s: %s\n" $i "$summary"
done
