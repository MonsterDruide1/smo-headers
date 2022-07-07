#pragma once

namespace agl { namespace detail { 

class RootNode
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    RootNode();
    ~RootNode();
    initialize(sead::Heap*, sead::SafeStringBase<char> const&);
    setNodeMeta(sead::hostio::Node*, sead::SafeStringBase<char> const&);
    appendChildAGL(sead::SafeStringBase<char> const&, sead::hostio::Node*);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
