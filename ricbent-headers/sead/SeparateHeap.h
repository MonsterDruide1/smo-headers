#pragma once

namespace sead { 

class SeparateHeap
{
public:
    SeparateHeap(sead::SafeStringBase<char> const&, sead::Heap*, void*, unsigned long, void*, unsigned long, bool);
    ~SeparateHeap();
    create(sead::SafeStringBase<char> const&, void*, unsigned long, void*, unsigned long, bool);
    tryCreate(sead::SafeStringBase<char> const&, unsigned long, unsigned long, sead::Heap*, bool);
    getManagementAreaSize(unsigned long);
    create(sead::SafeStringBase<char> const&, unsigned long, unsigned long, sead::Heap*, bool);
    destroy();
    getAllocateAreaSize(void*, unsigned long, int);
    tryAlloc(unsigned long, int);
    free(void*);
    findBlock_(void*);
    resizeFront(void*, unsigned long);
    resizeBack(void*, unsigned long);
    freeAll();
    getFreeSize() const;
    getMaxAllocatableSize(int) const;
    isInclude(void const*) const;
    dumpBlockList() const;
    dumpYAML(sead::WriteStream&, int) const;
    dump() const;
    genInformation_(sead::hostio::Context*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    adjust();
    getStartAddress() const;
    getEndAddress() const;
    getSize() const;
    isEmpty() const;
    isFreeable() const;
    isResizable() const;
    isAdjustable() const;
};

} 
