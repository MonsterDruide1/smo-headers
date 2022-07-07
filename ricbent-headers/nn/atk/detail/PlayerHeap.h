#pragma once

namespace nn { namespace atk { namespace detail { 

class PlayerHeap
{
public:
    PlayerHeap();
    ~PlayerHeap();
    Destroy();
    Create(void*, unsigned long);
    Clear();
    Allocate(unsigned long);
    Allocate(unsigned long, void (*)(void*), void*);
    GetAllocateSize(unsigned long, bool);
    GetFreeSize() const;
};

} } } 
