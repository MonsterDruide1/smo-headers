#pragma once

namespace agl { namespace env { namespace EnvObjMgr { 

class TypeNode
{
public:
    initialize(int, agl::env::EnvObjMgr*, sead::Heap*);
    TypeNode();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    ~TypeNode();
};

} } } 
