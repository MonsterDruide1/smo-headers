#pragma once

namespace sead { 

class IndirectResourceFactoryBase
{
public:
    tryCreateWithDecomp(sead::ResourceMgr::LoadArg const&, sead::Decompressor*);
    tryCreate(sead::ResourceMgr::LoadArg const&);
    create(sead::ResourceMgr::CreateArg const&);
    ~IndirectResourceFactoryBase();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
