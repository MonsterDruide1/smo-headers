#pragma once

namespace sead { 

class FrameHeap
{
public:
    FrameHeap(sead::SafeStringBase<char> const&, sead::Heap*, void*, unsigned long, sead::Heap::HeapDirection, bool);
    ~FrameHeap();
    create(unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, int, sead::Heap::HeapDirection, bool);
    tryCreate(unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, int, sead::Heap::HeapDirection, bool);
    initialize_();
    getAreaStart_() const;
    getAreaEnd_() const;
    getManagementAreaSize(int);
    destroy();
    getSize() const;
    isInclude(void const*) const;
    freeAll();
    adjust();
    adjustBack_();
    adjustFront_();
    tryAlloc(unsigned long, int);
    free(void*);
    resizeFront(void*, unsigned long);
    resizeBack(void*, unsigned long);
    freeHead();
    freeTail();
    restoreState(sead::FrameHeap::State const&);
    getStartAddress() const;
    getEndAddress() const;
    getFreeSize() const;
    getMaxAllocatableSize(int) const;
    dumpYAML(sead::WriteStream&, int) const;
    dump() const;
    genInformation_(sead::hostio::Context*);
    isEmpty() const;
    isFreeable() const;
    isResizable() const;
    isAdjustable() const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
