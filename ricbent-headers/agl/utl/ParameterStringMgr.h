#pragma once

namespace agl { namespace utl { 

class ParameterStringMgr
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    ParameterStringMgr();
    ~ParameterStringMgr();
    initialize(sead::Heap*);
    appendString(sead::SafeStringBase<char> const&);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
