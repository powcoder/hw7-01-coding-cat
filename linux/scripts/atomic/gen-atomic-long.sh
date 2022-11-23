https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0

ATOMICDIR=$(dirname $0)

. ${ATOMICDIR}/atomic-tbl.sh

#gen_cast(arg, int, atomic)
gen_cast()
{
	local arg="$1"; shift
	local int="$1"; shift
	local atomic="$1"; shift

	[ "${arg%%:*}" = "p" ] || return

	printf "($(gen_param_type "${arg}" "${int}" "${atomic}"))"
}

#gen_args_cast(int, atomic, arg...)
gen_args_cast()
{
	local int="$1"; shift
	local atomic="$1"; shift

	while [ "$#" -gt 0 ]; do
		local cast="$(gen_cast "$1" "${int}" "${atomic}")"
		local arg="$(gen_param_name "$1")"
		printf "${cast}${arg}"
		[ "$#" -gt 1 ] && printf ", "
		shift;
	done
}

#gen_proto_order_variant(meta, pfx, name, sfx, order, atomic, int, arg...)
gen_proto_order_variant()
{
	local meta="$1"; shift
	local name="$1$2$3$4"; shift; shift; shift; shift
	local atomic="$1"; shift
	local int="$1"; shift

	local ret="$(gen_ret_type "${meta}" "long")"
	local params="$(gen_params "long" "atomic_long" "$@")"
	local argscast="$(gen_args_cast "${int}" "${atomic}" "$@")"
	local retstmt="$(gen_ret_stmt "${meta}")"

cat <<EOF
static __always_inline ${ret}
atomic_long_${name}(${params})
{
	${retstmt}${atomic}_${name}(${argscast});
}

EOF
}

cat << EOF
// SPDX-License-Identifier: GPL-2.0

// Generated by $0
// DO NOT MODIFY THIS FILE DIRECTLY

#ifndef _ASM_GENERIC_ATOMIC_LONG_H
#define _ASM_GENERIC_ATOMIC_LONG_H

#include <linux/compiler.h>
#include <asm/types.h>

#ifdef CONFIG_64BIT
typedef atomic64_t atomic_long_t;
#define ATOMIC_LONG_INIT(i)		ATOMIC64_INIT(i)
#define atomic_long_cond_read_acquire	atomic64_cond_read_acquire
#define atomic_long_cond_read_relaxed	atomic64_cond_read_relaxed
#else
typedef atomic_t atomic_long_t;
#define ATOMIC_LONG_INIT(i)		ATOMIC_INIT(i)
#define atomic_long_cond_read_acquire	atomic_cond_read_acquire
#define atomic_long_cond_read_relaxed	atomic_cond_read_relaxed
#endif

#ifdef CONFIG_64BIT

EOF

grep '^[a-z]' "$1" | while read name meta args; do
	gen_proto "${meta}" "${name}" "atomic64" "s64" ${args}
done

cat <<EOF
#else /* CONFIG_64BIT */

EOF

grep '^[a-z]' "$1" | while read name meta args; do
	gen_proto "${meta}" "${name}" "atomic" "int" ${args}
done

cat <<EOF
#endif /* CONFIG_64BIT */
#endif /* _ASM_GENERIC_ATOMIC_LONG_H */
EOF