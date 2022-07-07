#pragma once

namespace agl { namespace utl { 

class VertexAttributeHolder
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    VertexAttributeHolder();
    ~VertexAttributeHolder();
    initialize(sead::Heap*);
    sInstance;
};

} } 
