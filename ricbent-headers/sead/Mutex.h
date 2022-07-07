#pragma once

namespace sead { 

class Mutex
{
public:
    Mutex();
    Mutex(sead::Heap*);
    Mutex(sead::Heap*, sead::IDisposer::HeapNullOption);
    ~Mutex();
    lock();
    tryLock();
    unlock();
};

} 
