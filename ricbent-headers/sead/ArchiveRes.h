#pragma once

namespace sead { 

class ArchiveRes
{
public:
    doCreate_(unsigned char*, unsigned int, sead::Heap*);
    load(sead::ResourceMgr::LoadArg&);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~ArchiveRes();
    getLoadDataAlignment() const;
};

} 
