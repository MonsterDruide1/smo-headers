#pragma once

namespace sead { 

class DirectResourceFactoryBase
{
public:
    tryCreateWithDecomp(sead::ResourceMgr::LoadArg const&, sead::Decompressor*);
    tryCreate(sead::ResourceMgr::LoadArg const&);
    create(sead::ResourceMgr::CreateArg const&);
    ~DirectResourceFactoryBase();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
