#pragma once

namespace agl { namespace detail { 

class PrivateResource
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrivateResource();
    ~PrivateResource();
    initialize(sead::Heap*, sead::Heap*, unsigned long, unsigned long);
    createArchive(sead::ArchiveRes*);
    getFileFromArc(sead::SafeStringBase<char> const&);
    setLockedCacheMemory(unsigned int, void*, unsigned int);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
