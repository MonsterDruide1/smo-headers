#pragma once

namespace sead { 

class CriticalSection
{
public:
    CriticalSection();
    CriticalSection(sead::Heap*);
    CriticalSection(sead::Heap*, sead::IDisposer::HeapNullOption);
    ~CriticalSection();
    lock();
    tryLock();
    unlock();
};

} 
