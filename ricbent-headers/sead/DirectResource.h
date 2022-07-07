#pragma once

namespace sead { 

class DirectResource
{
public:
    DirectResource();
    ~DirectResource();
    create(unsigned char*, unsigned int, unsigned int, bool, sead::Heap*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getLoadDataAlignment() const;
    doCreate_(unsigned char*, unsigned int, sead::Heap*);
};

} 
