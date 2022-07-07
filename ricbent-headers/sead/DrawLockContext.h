#pragma once

namespace sead { 

class DrawLockContext
{
public:
    DrawLockContext();
    initialize(sead::Heap*);
    lock();
    unlock();
    genMessage(sead::hostio::Context*);
};

} 
