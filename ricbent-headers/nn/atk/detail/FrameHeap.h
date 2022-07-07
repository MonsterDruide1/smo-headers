#pragma once

namespace nn { namespace atk { namespace detail { 

class FrameHeap
{
public:
    FrameHeap();
    ~FrameHeap();
    Destroy();
    Create(void*, unsigned long);
    NewSection();
    ClearSection();
    Clear();
    Alloc(unsigned long, void (*)(void*, unsigned long, void*), void*, void (*)(void*), void*);
    SaveState();
    ProcessCallback(int);
    LoadState(int);
    GetCurrentLevel() const;
    GetSize() const;
    GetFreeSize() const;
    Dump(nn::atk::SoundDataManager const&, nn::atk::SoundArchive const&) const;
    HeapAlign;
};

} } } 
