#pragma once

namespace sead { 

class UnitHeap
{
public:
    UnitHeap(sead::SafeStringBase<char> const&, sead::Heap*, void*, unsigned long, unsigned int, bool);
    ~UnitHeap();
    create(unsigned long, sead::SafeStringBase<char> const&, unsigned int, int, sead::Heap*, bool);
    tryCreate(unsigned long, sead::SafeStringBase<char> const&, unsigned int, int, sead::Heap*, bool);
    doCreate(int, bool, sead::Heap*);
    tryCreateWithBlockNum(unsigned int, unsigned int, sead::SafeStringBase<char> const&, int, sead::Heap*, bool);
    resetFreeList_();
    getManagementAreaSize(int);
    destroy();
    isInclude(void const*) const;
    freeAll();
    adjust();
    tryAlloc(unsigned long, int);
    free(void*);
    resizeFront(void*, unsigned long);
    resizeBack(void*, unsigned long);
    getSize() const;
    getFreeSize() const;
    getStartAddress() const;
    getEndAddress() const;
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
