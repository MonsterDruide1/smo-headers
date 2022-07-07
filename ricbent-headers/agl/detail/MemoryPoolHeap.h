#pragma once

namespace agl { namespace detail { 

class MemoryPoolHeap
{
public:
    create(unsigned long, int, unsigned long, int, unsigned long, unsigned long, agl::detail::MemoryPoolType const&, agl::detail::GPUMemBlockMgrHeapEx*);
    destroy(agl::detail::MemoryPoolHeap*);
    MemoryPoolHeap(void*, unsigned long, unsigned long, agl::detail::MemoryPoolType const&, void*, unsigned long, agl::detail::GPUMemBlockMgrHeapEx*);
    ~MemoryPoolHeap();
    pushBack(agl::GPUMemBlockBase*);
    allocFromMemoryPool(unsigned long, int);
    freeToHeap(agl::GPUMemBlockBase*);
    isAllocatable(agl::detail::MemoryPoolType const&, unsigned long, int) const;
};

} } 
