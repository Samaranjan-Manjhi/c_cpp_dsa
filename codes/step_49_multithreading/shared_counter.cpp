
// Increment a shared counter 1M times from 4 threads. Show the race, then fix it with mutex and with atomic, and compare timings.


#include <iostream>
#include <thread>
#include <mutex>
#include <atomic>

using namespace std;
