#pragma once

namespace sead { 

class IndirectResource
{
public:
    IndirectResource();
    ~IndirectResource();
    create(sead::ReadStream*, unsigned int, sead::Heap*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    doCreate_(sead::ReadStream*, unsigned int, sead::Heap*);
};

} 
