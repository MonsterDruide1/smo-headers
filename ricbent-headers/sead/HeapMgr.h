#pragma once

namespace sead { 

class HeapMgr
{
public:
    HeapMgr();
    ~HeapMgr();
    initialize(unsigned long);
    initializeImpl_();
    initialize(sead::Arena*);
    createRootHeap_();
    destroy();
    initHostIO();
    findContainHeap(void const*) const;
    isContainedInAnyHeap(void const*);
    dumpTreeYAML(sead::WriteStream&);
    setAllocFromNotSeadThreadHeap(sead::Heap*);
    removeFromFindContainHeapCache_(sead::Heap*);
    findHeapByName(sead::SafeStringBase<char> const&, int) const;
    findHeapByName_(sead::Heap*, sead::SafeStringBase<char> const&, int*);
    getCurrentHeap() const;
    setCurrentHeap_(sead::Heap*);
    removeRootHeap(sead::Heap*);
    setAllocFailedCallback(sead::IDelegate1<sead::HeapMgr::AllocFailedCallbackArg const*>*);
    sInstance;
    sInstancePtr;
    sArena;
    sDefaultArena;
    sRootHeaps;
    sIndependentHeaps;
    sHeapTreeLockCS;
    sHeapCheckTag;
    sSleepSpanAtRemoveCacheFailure;
};

} 
