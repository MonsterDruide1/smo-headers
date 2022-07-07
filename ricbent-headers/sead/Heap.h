#pragma once

namespace sead { 

class Heap
{
public:
    tryRealloc(void*, unsigned long, int);
    Heap(sead::SafeStringBase<char> const&, sead::Heap*, void*, unsigned long, sead::Heap::HeapDirection, bool);
    ~Heap();
    destruct_();
    dispose_(void const*, void const*);
    eraseChild_(sead::Heap*);
    appendDisposer_(sead::IDisposer*);
    removeDisposer_(sead::IDisposer*);
    findContainHeap_(void const*);
    pushBackChild_(sead::Heap*);
    checkAccessThread_() const;
    dumpTreeYAML(sead::WriteStream&, int) const;
    dumpYAML(sead::WriteStream&, int) const;
    genInformation_(sead::hostio::Context*);
    makeMetaString_(sead::BufferedSafeStringBase<char>*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    dump() const;
};

} 
