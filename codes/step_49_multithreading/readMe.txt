Level 1: Basics (std::thread)
Launch a thread that prints a message, then join it.
Pass arguments to a thread by value, by reference (std::ref), and as a move-only type (unique_ptr). Explain why each works or fails.
Start N threads in a loop, each printing its ID. Notice the garbled output, then fix it with a mutex.
Increment a shared counter 1M times from 4 threads. Show the race, then fix it with mutex and with atomic, and compare timings.
Write what happens when a std::thread is destroyed without join or detach, then write an RAII wrapper (a mini jthread) that fixes it.
Return a value from a thread using std::promise/future, then again with std::async. When does std::async actually run in parallel?
Level 2: Synchronization
Print odd and even numbers alternately using two threads (mutex + condition_variable).
Print 1..N using 3 threads in round-robin (T1: 1, 4, 7; T2: 2, 5, 8; T3: 3, 6, 9).
Print “ABABAB...” with two threads, N times.
Implement a bounded-buffer producer-consumer with multiple producers and consumers.
Reproduce a deadlock with two mutexes, then fix it with lock ordering and with std::scoped_lock.
Demonstrate a lost wakeup (notify before wait), and explain why a predicate in wait fixes it along with spurious wakeups.
Write a thread-safe singleton three ways: Meyers, std::call_once, and double-checked locking with atomics. Explain why naive DCL is broken.
Compute the sum of a huge vector with N threads, then find the speedup curve vs. thread count.
Solve Dining Philosophers without deadlock or starvation.
Level 3: Intermediate Design
Build a thread-safe blocking queue with push, pop, try_pop, and graceful shutdown.
Build a fixed-size thread pool where submit(f, args...) returns a std::future (use packaged_task).
Implement a read-heavy cache using std::shared_mutex, and benchmark it against a plain mutex.
Implement a counting semaphore and a reusable barrier from scratch with mutex + condvar.
Solve Readers-Writers with writer preference, then with fairness (no starvation).
Write a parallel merge sort with a depth or size cutoff so you don’t spawn too many threads.
Implement cooperative cancellation with std::jthread and std::stop_token, including timed waits (wait_for).
Propagate an exception from a worker thread back to the caller (exception_ptr, future::get).
Use thread_local for per-thread counters, then aggregate them at the end without locks on the hot path.
Level 4: Advanced
Write a spinlock with atomic_flag, then improve it with test-and-test-and-set and backoff. Compare memory orders (seq_cst vs acquire/release).
Demonstrate message passing with release/acquire and show a case where relaxed breaks it.
Implement a lock-free stack (Treiber), reproduce the ABA problem, and fix it with a tagged pointer.
Implement a lock-free SPSC ring buffer. Then demonstrate false sharing and fix it with alignas(64) padding.
Implement a bounded MPMC queue (Vyukov-style).
Write your own shared_ptr with an atomic reference count. Which memory orders are the minimum safe ones for increment and decrement?
Build a work-stealing thread pool with per-thread deques.
Build a multi-stage pipeline (parse → process → write) with backpressure and clean shutdown.
Implement a simple hazard-pointer scheme or epoch-based reclamation for your lock-free stack.
Debugging round: take code with a data race, a lock-order inversion, and a missed notify. Find each using TSan and Helgrind, then fix them.
Linux-specific: reimplement a mutex using futex syscalls, pin threads to cores with pthread_setaffinity_np, and measure the cache effects.
Suggested Order
Day 1: Questions 1 to 6
Days 2 to 3: Questions 7 to 15
Days 4 to 5: Questions 16 to 24
Days 6 to 7: Questions 25 to 35

Questions 7 to 9, 10, 13, 16, 17, and 19 come up the most in interviews. Want me to write reference solutions for any of these, or turn the list into a day-by-day plan?
