https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 OR Linux-OpenIB */
/*
 * Copyright (c) 2016 Mellanox Technologies Ltd. All rights reserved.
 * Copyright (c) 2015 System Fabric Works, Inc. All rights reserved.
 */

#ifndef RXE_POOL_H
#define RXE_POOL_H

#define RXE_POOL_ALIGN		(16)
#define RXE_POOL_CACHE_FLAGS	(0)

enum rxe_pool_flags {
	RXE_POOL_ATOMIC		= BIT(0),
	RXE_POOL_INDEX		= BIT(1),
	RXE_POOL_KEY		= BIT(2),
	RXE_POOL_NO_ALLOC	= BIT(4),
};

enum rxe_elem_type {
	RXE_TYPE_UC,
	RXE_TYPE_PD,
	RXE_TYPE_AH,
	RXE_TYPE_SRQ,
	RXE_TYPE_QP,
	RXE_TYPE_CQ,
	RXE_TYPE_MR,
	RXE_TYPE_MW,
	RXE_TYPE_MC_GRP,
	RXE_TYPE_MC_ELEM,
	RXE_NUM_TYPES,		/* keep me last */
};

struct rxe_pool_entry;

struct rxe_type_info {
	const char		*name;
	size_t			size;
	void			(*cleanup)(struct rxe_pool_entry *obj);
	enum rxe_pool_flags	flags;
	u32			max_index;
	u32			min_index;
	size_t			key_offset;
	size_t			key_size;
};

extern struct rxe_type_info rxe_type_info[];

enum rxe_pool_state {
	RXE_POOL_STATE_INVALID,
	RXE_POOL_STATE_VALID,
};

struct rxe_pool_entry {
	struct rxe_pool		*pool;
	struct kref		ref_cnt;
	struct list_head	list;

	/* only used if indexed or keyed */
	struct rb_node		node;
	u32			index;
};

struct rxe_pool {
	struct rxe_dev		*rxe;
	rwlock_t		pool_lock; /* protects pool add/del/search */
	size_t			elem_size;
	struct kref		ref_cnt;
	void			(*cleanup)(struct rxe_pool_entry *obj);
	enum rxe_pool_state	state;
	enum rxe_pool_flags	flags;
	enum rxe_elem_type	type;

	unsigned int		max_elem;
	atomic_t		num_elem;

	/* only used if indexed or keyed */
	struct rb_root		tree;
	unsigned long		*table;
	size_t			table_size;
	u32			max_index;
	u32			min_index;
	u32			last;
	size_t			key_offset;
	size_t			key_size;
};

/* initialize a pool of objects with given limit on
 * number of elements. gets parameters from rxe_type_info
 * pool elements will be allocated out of a slab cache
 */
int rxe_pool_init(struct rxe_dev *rxe, struct rxe_pool *pool,
		  enum rxe_elem_type type, u32 max_elem);

/* free resources from object pool */
void rxe_pool_cleanup(struct rxe_pool *pool);

/* allocate an object from pool */
void *rxe_alloc(struct rxe_pool *pool);

/* connect already allocated object to pool */
int rxe_add_to_pool(struct rxe_pool *pool, struct rxe_pool_entry *elem);

/* assign an index to an indexed object and insert object into
 *  pool's rb tree
 */
void rxe_add_index(void *elem);

/* drop an index and remove object from rb tree */
void rxe_drop_index(void *elem);

/* assign a key to a keyed object and insert object into
 *  pool's rb tree
 */
void rxe_add_key(void *elem, void *key);

/* remove elem from rb tree */
void rxe_drop_key(void *elem);

/* lookup an indexed object from index. takes a reference on object */
void *rxe_pool_get_index(struct rxe_pool *pool, u32 index);

/* lookup keyed object from key. takes a reference on the object */
void *rxe_pool_get_key(struct rxe_pool *pool, void *key);

/* cleanup an object when all references are dropped */
void rxe_elem_release(struct kref *kref);

/* take a reference on an object */
#define rxe_add_ref(elem) kref_get(&(elem)->pelem.ref_cnt)

/* drop a reference on an object */
#define rxe_drop_ref(elem) kref_put(&(elem)->pelem.ref_cnt, rxe_elem_release)

#endif /* RXE_POOL_H */
