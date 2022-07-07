#pragma once

namespace agl { namespace utl { namespace INamedObjMgr { 

class Group
{
public:
    initialize(int, agl::utl::INamedObjMgr*, sead::Heap*);
    reset(sead::SafeStringBase<char> const&);
    compare(agl::utl::INamedObjMgr::Group const*, agl::utl::INamedObjMgr::Group const*);
    Group();
    ~Group();
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } } 
