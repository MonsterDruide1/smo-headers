#pragma once

namespace agl { namespace detail { 

class ShaderHolder
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ShaderHolder();
    ~ShaderHolder();
    initialize(sead::ArchiveRes*, sead::Heap*);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
