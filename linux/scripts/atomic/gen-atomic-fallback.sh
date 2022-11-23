https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/sh
# SPDX-License-Identifier: GPL-2.0

ATOMICDIR=$(dirname $0)
ARCH=$2

. ${ATOMICDIR}/atomic-tbl.sh

#gen_template_fallback(template, meta, pfx, name, sfx, order, arch, atomic, int, args...)
gen_template_fallback()
{
	local template="$1"; shift
	local meta="$1"; shift
	local pfx="$1"; shift
	local name="$1"; shift
	local sfx="$1"; shift
	local order="$1"; shift
	local arch="$1"; shift
	local atomic="$1"; shift
	local int="$1"; shift

	local atomicname="${arch}${atomic}_${pfx}${name}${sfx}${order}"

	local ret="$(gen_ret_type "${meta}" "${int}")"
	local retstmt="$(gen_ret_stmt "${meta}")"
	local params="$(gen_params "${int}" "${atomic}" "$@")"
	local args="$(gen_args "$@")"

	if [ ! -z "${template}" ]; then
		printf "#ifndef ${atomicname}\n"
		. ${template}
		printf "#define ${atomicname} ${atomicname}\n"
		printf "#endif\n\n"
	fi
}

#gen_proto_fallback(meta, pfx, name, sfx, order, arch, atomic, int, args...)
gen_proto_fallback()
{
	local meta="$1"; shift
	local pfx="$1"; shift
	local name="$1"; shift
	local sfx="$1"; shift
	local order="$1"; shift

	local tmpl="$(find_fallback_template "${pfx}" "${name}" "${sfx}" "${order}")"
	gen_template_fallback "${tmpl}" "${meta}" "${pfx}" "${name}" "${sfx}" "${order}" "$@"
}

#gen_basic_fallbacks(basename)
gen_basic_fallbacks()
{
	local basename="$1"; shift
cat << EOF
#define ${basename}_acquire ${basename}
#define ${basename}_release ${basename}
#define ${basename}_relaxed ${basename}
EOF
}

gen_proto_order_variant()
{
	local meta="$1"; shift
	local pfx="$1"; shift
	local name="$1"; shift
	local sfx="$1"; shift
	local order="$1"; shift
	local arch="$1"
	local atomic="$2"

	local basename="${arch}${atomic}_${pfx}${name}${sfx}"

	printf "#define arch_${basename}${order} ${basename}${order}\n"
}

#gen_proto_order_variants(meta, pfx, name, sfx, arch, atomic, int, args...)
gen_proto_order_variants()
{
	local meta="$1"; shift
	local pfx="$1"; shift
	local name="$1"; shift
	local sfx="$1"; shift
	local arch="$1"
	local atomic="$2"

	local basename="${arch}${atomic}_${pfx}${name}${sfx}"

	local template="$(find_fallback_template "${pfx}" "${name}" "${sfx}" "${order}")"

	if [ -z "$arch" ]; then
		gen_proto_order_variant "${meta}" "${pfx}" "${name}" "${sfx}" "" "$@"

		if meta_has_acquire "${meta}"; then
			gen_proto_order_variant "${meta}" "${pfx}" "${name}" "${sfx}" "_acquire" "$@"
		fi
		if meta_has_release "${meta}"; then
			gen_proto_order_variant "${meta}" "${pfx}" "${name}" "${sfx}" "_release" "$@"
		fi
		if meta_has_relaxed "${meta}"; then
			gen_proto_order_variant "${meta}" "${pfx}" "${name}" "${sfx}" "_relaxed" "$@"
		fi

		echo ""
	fi

	# If we don't have relaxed atomics, then we don't bother with ordering fallbacks
	# read_acquire and set_release need to be templated, though
	if ! meta_has_relaxed "${meta}"; then
		gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "" "$@"

		if meta_has_acquire "${meta}"; then
			gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "_acquire" "$@"
		fi

		if meta_has_release "${meta}"; then
			gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "_release" "$@"
		fi

		return
	fi

	printf "#ifndef ${basename}_relaxed\n"

	if [ ! -z "${template}" ]; then
		printf "#ifdef ${basename}\n"
	fi

	gen_basic_fallbacks "${basename}"

	if [ ! -z "${template}" ]; then
		printf "#endif /* ${arch}${atomic}_${pfx}${name}${sfx} */\n\n"
		gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "" "$@"
		gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "_acquire" "$@"
		gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "_release" "$@"
		gen_proto_fallback "${meta}" "${pfx}" "${name}" "${sfx}" "_relaxed" "$@"
	fi

	printf "#else /* ${basename}_relaxed */\n\n"

	gen_template_fallback "${ATOMICDIR}/fallbacks/acquire"  "${meta}" "${pfx}" "${name}" "${sfx}" "_acquire" "$@"
	gen_template_fallback "${ATOMICDIR}/fallbacks/release"  "${meta}" "${pfx}" "${name}" "${sfx}" "_release" "$@"
	gen_template_fallback "${ATOMICDIR}/fallbacks/fence"  "${meta}" "${pfx}" "${name}" "${sfx}" "" "$@"

	printf "#endif /* ${basename}_relaxed */\n\n"
}

gen_xchg_fallbacks()
{
	local xchg="$1"; shift
cat <<EOF
#ifndef ${xchg}_relaxed
#define ${xchg}_relaxed		${xchg}
#define ${xchg}_acquire		${xchg}
#define ${xchg}_release		${xchg}
#else /* ${xchg}_relaxed */

#ifndef ${xchg}_acquire
#define ${xchg}_acquire(...) \\
	__atomic_op_acquire(${xchg}, __VA_ARGS__)
#endif

#ifndef ${xchg}_release
#define ${xchg}_release(...) \\
	__atomic_op_release(${xchg}, __VA_ARGS__)
#endif

#ifndef ${xchg}
#define ${xchg}(...) \\
	__atomic_op_fence(${xchg}, __VA_ARGS__)
#endif

#endif /* ${xchg}_relaxed */

EOF
}

cat << EOF
// SPDX-License-Identifier: GPL-2.0

// Generated by $0
// DO NOT MODIFY THIS FILE DIRECTLY

#ifndef _LINUX_ATOMIC_FALLBACK_H
#define _LINUX_ATOMIC_FALLBACK_H

#include <linux/compiler.h>

EOF

for xchg in "${ARCH}xchg" "${ARCH}cmpxchg" "${ARCH}cmpxchg64"; do
	gen_xchg_fallbacks "${xchg}"
done

grep '^[a-z]' "$1" | while read name meta args; do
	gen_proto "${meta}" "${name}" "${ARCH}" "atomic" "int" ${args}
done

cat <<EOF
#ifdef CONFIG_GENERIC_ATOMIC64
#include <asm-generic/atomic64.h>
#endif

EOF

grep '^[a-z]' "$1" | while read name meta args; do
	gen_proto "${meta}" "${name}" "${ARCH}" "atomic64" "s64" ${args}
done

cat <<EOF
#endif /* _LINUX_ATOMIC_FALLBACK_H */
EOF