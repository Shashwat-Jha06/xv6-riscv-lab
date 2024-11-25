#include "kernel/types.h"

typedef struct lock_t {
    uint locked;
} lock_t;

int thread_create(void* (*start_routine)(void*), void* arg);
void lock_init(struct lock_t* lk);
void lock_acquire(struct lock_t* lk);
void lock_release(struct lock_t* lk);