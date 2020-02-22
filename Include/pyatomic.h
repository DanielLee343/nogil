#ifndef Py_ATOMIC_H
#define Py_ATOMIC_H

static inline int32_t
_Py_atomic_add_int32(volatile int32_t *address, int32_t value);

static inline int64_t
_Py_atomic_add_int64(volatile int64_t *address, int64_t value);

static inline intptr_t
_Py_atomic_add_intptr(volatile intptr_t *address, intptr_t value);

static inline uint32_t
_Py_atomic_add_uint32(volatile uint32_t *address, uint32_t value);

static inline uint64_t
_Py_atomic_add_uint64(volatile uint64_t *address, uint64_t value);

static inline uintptr_t
_Py_atomic_add_uintptr(volatile uintptr_t *address, uintptr_t value);


static inline int
_Py_atomic_compare_exchange_int32(volatile int32_t *address, int32_t expected, int32_t value);

static inline int
_Py_atomic_compare_exchange_int64(volatile int64_t *address, int64_t expected, int64_t value);

static inline int
_Py_atomic_compare_exchange_intptr(volatile intptr_t *address, intptr_t expected, intptr_t value);

static inline int
_Py_atomic_compare_exchange_uint32(volatile uint32_t *address, uint32_t expected, uint32_t value);

static inline int
_Py_atomic_compare_exchange_uint64(volatile uint64_t *address, uint64_t expected, uint64_t value);

static inline int
_Py_atomic_compare_exchange_uintptr(volatile uintptr_t *address, uintptr_t expected, uintptr_t value);

static inline int
_Py_atomic_compare_exchange_ptr(volatile void *address, void *expected, void *value);


static inline int32_t
_Py_atomic_exchange_int32(volatile int32_t *address, int32_t value);

static inline int64_t
_Py_atomic_exchange_int64(volatile int64_t *address, int64_t value);

static inline intptr_t
_Py_atomic_exchange_intptr(volatile intptr_t *address, intptr_t value);

static inline uint32_t
_Py_atomic_exchange_uint32(volatile uint32_t *address, uint32_t value);

static inline uint64_t
_Py_atomic_exchange_uint64(volatile uint64_t *address, uint64_t value);

static inline uintptr_t
_Py_atomic_exchange_uintptr(volatile uintptr_t *address, uintptr_t value);

static inline void *
_Py_atomic_exchange_ptr(volatile void *address, void *value);


static inline int32_t
_Py_atomic_load_int32(const volatile int32_t *address);

static inline int64_t
_Py_atomic_load_int64(const volatile int64_t *address);

static inline intptr_t
_Py_atomic_load_intptr(const volatile intptr_t *address);

static inline uint32_t
_Py_atomic_load_uint32(const volatile uint32_t *address);

static inline uint64_t
_Py_atomic_load_uint64(const volatile uint64_t *address);

static inline uintptr_t
_Py_atomic_load_uintptr(const volatile uintptr_t *address);

static inline void *
_Py_atomic_load_ptr(const volatile void *address);


static inline int32_t
_Py_atomic_load_int32_relaxed(const volatile int32_t *address);

static inline int64_t
_Py_atomic_load_int64_relaxed(const volatile int64_t *address);

static inline intptr_t
_Py_atomic_load_intptr_relaxed(const volatile intptr_t *address);

static inline uint32_t
_Py_atomic_load_uint32_relaxed(const volatile uint32_t *address);

static inline uint64_t
_Py_atomic_load_uint64_relaxed(const volatile uint64_t *address);

static inline uintptr_t
_Py_atomic_load_uintptr_relaxed(const volatile uintptr_t *address);

static inline void *
_Py_atomic_load_ptr_relaxed(const volatile void *address);


static inline void
_Py_atomic_store_int32(volatile int32_t *address, int32_t value);

static inline void
_Py_atomic_store_int64(volatile int64_t *address, int64_t value);

static inline void
_Py_atomic_store_intptr(volatile intptr_t *address, intptr_t value);

static inline void
_Py_atomic_store_uint32(volatile uint32_t *address, uint32_t value);

static inline void
_Py_atomic_store_uint64(volatile uint64_t *address, uint64_t value);

static inline void
_Py_atomic_store_uintptr(volatile uintptr_t *address, uintptr_t value);

static inline void
_Py_atomic_store_ptr(volatile void *address, void *value);


static inline void
_Py_atomic_store_int32_relaxed(volatile int32_t *address, int32_t value);

static inline void
_Py_atomic_store_int64_relaxed(volatile int64_t *address, int64_t value);

static inline void
_Py_atomic_store_intptr_relaxed(volatile intptr_t *address, intptr_t value);

static inline void
_Py_atomic_store_uint32_relaxed(volatile uint32_t *address, uint32_t value);

static inline void
_Py_atomic_store_uint64_relaxed(volatile uint64_t *address, uint64_t value);

static inline void
_Py_atomic_store_uintptr_relaxed(volatile uintptr_t *address, uintptr_t value);

static inline void
_Py_atomic_store_ptr_relaxed(volatile void *address, void *value);


#if defined(HAVE_STD_ATOMIC) || defined(HAVE_BUILTIN_ATOMIC)
#define Py_ATOMIC_STD_H
#include "pyatomic_std.h"
#elif defined(_MSC_VER)
#define Py_ATOMIC_MSC_H
#include "pyatomic_msc.h"
#endif

#endif  /* Py_ATOMIC_H */
