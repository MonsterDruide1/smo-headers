#pragma once

namespace agl { namespace utl { 

class PrimitiveVertex
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    PrimitiveVertex();
    ~PrimitiveVertex();
    initialize(sead::Heap*);
    sInstance;
};

} } 
