#pragma once

namespace agl { namespace env { 

class EnvObjSet
{
public:
    EnvObjSet();
    ~EnvObjSet();
    bind(agl::env::EnvObjMgr*);
    allocBuffer(agl::env::EnvObjBuffer::AllocateArg const&, sead::Heap*);
    pushBack(agl::env::EnvObj*);
    erase(agl::env::EnvObj*);
    preRead_();
    postRead_();
    callbackSyncNameToIndex(agl::utl::INamedObjIndex*);
    callbackSyncIndexToName(agl::utl::INamedObjIndex*);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    genMessageEachObj(sead::hostio::Context*, int, agl::env::EnvObj const*);
};

} } 
