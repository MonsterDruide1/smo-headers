#pragma once

#if defined(cafe)
#include <cafe.h>
#elif defined(NNSDK)
#include <nn/os.h>
#endif

#include <sead/basis/seadTypes.h>
#include <sead/heap/seadDisposer.h>

namespace sead
{
class Heap;

class Mutex : public IDisposer
{
public:
    Mutex();
    explicit Mutex(Heap* disposer_heap);
    Mutex(Heap* disposer_heap, HeapNullOption heap_null_option);
    ~Mutex() override;

    Mutex(const Mutex&) = delete;
    Mutex& operator=(const Mutex&) = delete;

    void lock();
    bool tryLock();
    void unlock();

    // For compatibility with the standard Lockable concept.
    bool try_lock() { return tryLock(); }

#if defined(cafe)
    OSMutex mMutexInner;
#elif defined(NNSDK)
    nn::os::MutexType mMutexInner;
#else
#error "Unknown platform"
#endif
};

}  // namespace sead
