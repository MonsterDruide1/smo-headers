#pragma once

namespace agl { namespace detail { 

class DynamicUniformBlock
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    DynamicUniformBlock();
    ~DynamicUniformBlock();
    initialize(unsigned long, sead::Heap*);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
