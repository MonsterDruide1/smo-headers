#pragma once

namespace sead { 

class ExpHeap
{
public:
    ExpHeap(sead::SafeStringBase<char> const&, sead::Heap*, void*, unsigned long, sead::Heap::HeapDirection, bool);
    ~ExpHeap();
    create(unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, int, sead::Heap::HeapDirection, bool);
    tryCreate(unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, int, sead::Heap::HeapDirection, bool);
    doCreate(sead::ExpHeap*, sead::Heap*);
    tryCreate(void*, unsigned long, sead::SafeStringBase<char> const&, bool);
    create(void*, unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, bool);
    tryCreate(void*, unsigned long, sead::SafeStringBase<char> const&, sead::Heap*, bool);
    getManagementAreaSize(int);
    createMaxSizeFreeMemBlock_(sead::ExpHeap*);
    destroy();
    destroyAndGetAllocatableSize(int);
    freeAndGetAllocatableSize(void*, int);
    isInclude(void const*) const;
    freeAll();
    adjust();
    adjustBack_();
    adjustFront_();
    findLastMemBlockIfFree_();
    findFirstMemBlockIfFree_();
    tryAlloc(unsigned long, int);
    allocFromHead_(unsigned long);
    allocFromHead_(unsigned long, int);
    allocFromTail_(unsigned long);
    allocFromTail_(unsigned long, int);
    findFreeMemBlockFromHead_(unsigned long, sead::ExpHeap::FindMode) const;
    findFreeMemBlockFromHead_(unsigned long, int, sead::ExpHeap::FindMode) const;
    findFreeMemBlockFromTail_(unsigned long, sead::ExpHeap::FindMode) const;
    findFreeMemBlockFromTail_(unsigned long, int, sead::ExpHeap::FindMode) const;
    pushToUseList_(sead::MemBlock*);
    free(void*);
    pushToFreeList_(sead::MemBlock*);
    dumpUseList() const;
    dumpFreeList() const;
    resizeFront(void*, unsigned long);
    resizeBack(void*, unsigned long);
    realloc_(void*, unsigned char*, unsigned long, unsigned long, int);
    tryRealloc(void*, unsigned long, int);
    getStartAddress() const;
    getEndAddress() const;
    getSize() const;
    getFreeSize() const;
    getMaxAllocatableSize(int) const;
    compareMemBlockAddr_(sead::MemBlock const*, sead::MemBlock const*);
    tryCheckFreeList() const;
    tryCheckUseList() const;
    getAllocatedSize(void*);
    getFindFreeBlockModeString_(sead::ExpHeap::FindFreeBlockMode);
    dumpYAML(sead::WriteStream&, int) const;
    setFindFreeBlockMode(sead::ExpHeap::FindFreeBlockMode);
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
