#include "user/thread.h"
#include "user/user.h"
#include "kernel/riscv.h"

/**
 * Create a new thread.
 * 
 * 1. Allocate a new user stack for the new thread 
 * and move the stack base to proper point (how does the stack grow in xv6?).
 * 2. Call `clone()` system call.
 * 3. return.
 * 
 * TODO:
 * @param start_routine The function to be executed by the new thread.
 * @param arg The argument to be passed to the new thread.
 * @return 0 on success, -1 on failure.
 * 
 */
int thread_create(void *(*start_routine)(void*), void *arg) {

}


// For lock implementation, you can refer to kernel/spinlock.c.
/**
 * Initialize a lock.
 * 
 * TODO:
 * @param lk The lock to be initialized.
 */
void lock_init(struct lock_t* lk) {
    
}

/**
 * Acquire a lock.
 * 
 * TODO:
 * @param lk The lock to be acquired.
 */
void lock_acquire(struct lock_t* lk) {

}

/**
 * Release a lock.
 * 
 * TODO:
 * @param lk The lock to be released.
 */
void lock_release(struct lock_t* lk) {

}