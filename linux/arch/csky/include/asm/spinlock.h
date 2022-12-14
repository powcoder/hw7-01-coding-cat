https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __ASM_CSKY_SPINLOCK_H
#define __ASM_CSKY_SPINLOCK_H

#include <linux/spinlock_types.h>
#include <asm/barrier.h>

#ifdef CONFIG_QUEUED_RWLOCKS

/*
 * Ticket-based spin-locking.
 */
static inline void arch_spin_lock(arch_spinlock_t *lock)
{
	arch_spinlock_t lockval;
	u32 ticket_next = 1 << TICKET_NEXT;
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%2) \n"
		"	mov		%1, %0	 \n"
		"	add		%0, %3	 \n"
		"	stex.w		%0, (%2) \n"
		"	bez		%0, 1b   \n"
		: "=&r" (tmp), "=&r" (lockval)
		: "r"(p), "r"(ticket_next)
		: "cc");

	while (lockval.tickets.next != lockval.tickets.owner)
		lockval.tickets.owner = READ_ONCE(lock->tickets.owner);

	smp_mb();
}

static inline int arch_spin_trylock(arch_spinlock_t *lock)
{
	u32 tmp, contended, res;
	u32 ticket_next = 1 << TICKET_NEXT;
	u32 *p = &lock->lock;

	do {
		asm volatile (
		"	ldex.w		%0, (%3)   \n"
		"	movi		%2, 1	   \n"
		"	rotli		%1, %0, 16 \n"
		"	cmpne		%1, %0     \n"
		"	bt		1f         \n"
		"	movi		%2, 0	   \n"
		"	add		%0, %0, %4 \n"
		"	stex.w		%0, (%3)   \n"
		"1:				   \n"
		: "=&r" (res), "=&r" (tmp), "=&r" (contended)
		: "r"(p), "r"(ticket_next)
		: "cc");
	} while (!res);

	if (!contended)
		smp_mb();

	return !contended;
}

static inline void arch_spin_unlock(arch_spinlock_t *lock)
{
	smp_mb();
	WRITE_ONCE(lock->tickets.owner, lock->tickets.owner + 1);
}

static inline int arch_spin_value_unlocked(arch_spinlock_t lock)
{
	return lock.tickets.owner == lock.tickets.next;
}

static inline int arch_spin_is_locked(arch_spinlock_t *lock)
{
	return !arch_spin_value_unlocked(READ_ONCE(*lock));
}

static inline int arch_spin_is_contended(arch_spinlock_t *lock)
{
	struct __raw_tickets tickets = READ_ONCE(lock->tickets);

	return (tickets.next - tickets.owner) > 1;
}
#define arch_spin_is_contended	arch_spin_is_contended

#include <asm/qrwlock.h>

/* See include/linux/spinlock.h */
#define smp_mb__after_spinlock()	smp_mb()

#else /* CONFIG_QUEUED_RWLOCKS */

/*
 * Test-and-set spin-locking.
 */
static inline void arch_spin_lock(arch_spinlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	bnez		%0, 1b   \n"
		"	movi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");
	smp_mb();
}

static inline void arch_spin_unlock(arch_spinlock_t *lock)
{
	smp_mb();
	WRITE_ONCE(lock->lock, 0);
}

static inline int arch_spin_trylock(arch_spinlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	bnez		%0, 2f   \n"
		"	movi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		"	movi		%0, 0    \n"
		"2:				 \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");

	if (!tmp)
		smp_mb();

	return !tmp;
}

#define arch_spin_is_locked(x)	(READ_ONCE((x)->lock) != 0)

/*
 * read lock/unlock/trylock
 */
static inline void arch_read_lock(arch_rwlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	blz		%0, 1b   \n"
		"	addi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");
	smp_mb();
}

static inline void arch_read_unlock(arch_rwlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	smp_mb();
	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	subi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");
}

static inline int arch_read_trylock(arch_rwlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	blz		%0, 2f   \n"
		"	addi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		"	movi		%0, 0    \n"
		"2:				 \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");

	if (!tmp)
		smp_mb();

	return !tmp;
}

/*
 * write lock/unlock/trylock
 */
static inline void arch_write_lock(arch_rwlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	bnez		%0, 1b   \n"
		"	subi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");
	smp_mb();
}

static inline void arch_write_unlock(arch_rwlock_t *lock)
{
	smp_mb();
	WRITE_ONCE(lock->lock, 0);
}

static inline int arch_write_trylock(arch_rwlock_t *lock)
{
	u32 *p = &lock->lock;
	u32 tmp;

	asm volatile (
		"1:	ldex.w		%0, (%1) \n"
		"	bnez		%0, 2f   \n"
		"	subi		%0, 1    \n"
		"	stex.w		%0, (%1) \n"
		"	bez		%0, 1b   \n"
		"	movi		%0, 0    \n"
		"2:				 \n"
		: "=&r" (tmp)
		: "r"(p)
		: "cc");

	if (!tmp)
		smp_mb();

	return !tmp;
}

#endif /* CONFIG_QUEUED_RWLOCKS */
#endif /* __ASM_CSKY_SPINLOCK_H */
