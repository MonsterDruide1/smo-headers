#pragma once

namespace nn { namespace atk { 

class SoundHeap
{
public:
    SoundHeap();
    ~SoundHeap();
    Destroy();
    Create(void*, unsigned long);
    Create(void*, unsigned long, bool);
    Clear();
    Allocate(unsigned long);
    DisposeCallbackFunc(void*, unsigned long, void*);
    Allocate(unsigned long, void (*)(void*), void*);
    GetAllocateSize(unsigned long, bool);
    SaveState();
    LoadState(int);
};

} } 
