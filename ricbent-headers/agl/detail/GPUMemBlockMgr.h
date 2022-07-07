#pragma once

namespace agl { namespace detail { 

class GPUMemBlockMgr
{
public:
    removeHeap(agl::detail::GPUMemBlockMgrHeapEx*);
    createInstance(sead::Heap*);
    deleteInstance();
    GPUMemBlockMgr();
    ~GPUMemBlockMgr();
    initialize(sead::Heap*, sead::Heap*);
    tryAllocMemory(agl::GPUMemBlockBase*, sead::Heap*, unsigned long, int, agl::MemoryAttribute);
    calcGPUMemorySize(unsigned long);
    calcGPUMemoryAlignment(int);
    findGPUMemBlockMgrHeapEx_(sead::Heap*, int*);
    enableSharedMemoryPool(bool);
    removeGPUMemBlockMgrHeapExIfNoMemoryPool(sead::Heap*);
    enableSharedMemoryPool(sead::Heap*, bool);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
