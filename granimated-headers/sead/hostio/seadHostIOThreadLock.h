#pragma once

#include "sead/basis/seadTypes.h"
#include "sead/thread/seadAtomic.h"

namespace sead
{
class CriticalSection;

namespace hostio
{
class ThreadLock
{
public:
    ThreadLock();
    ~ThreadLock();
    static void lock();
    static void unlock();

private:
    static CriticalSection& getCS();
    static Atomic<u32> sLockCnt;
};
}  // namespace hostio
}  // namespace sead
