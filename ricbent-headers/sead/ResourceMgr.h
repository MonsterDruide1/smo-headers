#pragma once

namespace sead { 

class ResourceMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ResourceMgr();
    registerFactory(sead::ResourceFactory*, sead::SafeStringBase<char> const&);
    ~ResourceMgr();
    unregisterFactory(sead::ResourceFactory*);
    setDefaultFactory(sead::ResourceFactory*);
    tryLoadWithoutDecomp(sead::ResourceMgr::LoadArg const&);
    findFactory(sead::SafeStringBase<char> const&);
    unload(sead::Resource*);
    registerDecompressor(sead::Decompressor*, sead::SafeStringBase<char> const&);
    unregisterDecompressor(sead::Decompressor*);
    tryLoad(sead::ResourceMgr::LoadArg const&, sead::SafeStringBase<char> const&, sead::Decompressor*);
    findDecompressor(sead::SafeStringBase<char> const&);
    create(sead::ResourceMgr::CreateArg const&);
    sInstance;
};

} 
