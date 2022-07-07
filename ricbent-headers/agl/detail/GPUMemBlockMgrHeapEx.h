#pragma once

namespace agl { namespace detail { 

class GPUMemBlockMgrHeapEx
{
public:
    freeMemoryPoolHeap(agl::detail::MemoryPoolHeap*);
    GPUMemBlockMgrHeapEx(sead::Heap*);
    ~GPUMemBlockMgrHeapEx();
    tryAlloc(agl::GPUMemBlockBase*, unsigned long, int, unsigned long, int, unsigned long, unsigned long, agl::detail::MemoryPoolType const&, bool, bool);
    countMemoryPoolNum() const;
    countMemoryPoolSize() const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
