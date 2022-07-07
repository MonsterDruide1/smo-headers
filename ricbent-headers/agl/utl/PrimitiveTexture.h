#pragma once

namespace agl { namespace utl { 

class PrimitiveTexture
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrimitiveTexture();
    ~PrimitiveTexture();
    destroy_();
    initialize(sead::Heap*);
    entryDebugPage();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
