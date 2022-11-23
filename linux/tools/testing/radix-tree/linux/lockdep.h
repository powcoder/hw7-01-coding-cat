https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _LINUX_LOCKDEP_H
#define _LINUX_LOCKDEP_H
struct lock_class_key {
	unsigned int a;
};

static inline void lockdep_set_class(spinlock_t *lock,
					struct lock_class_key *key)
{
}
#endif /* _LINUX_LOCKDEP_H */
