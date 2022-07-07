#pragma once

namespace agl { namespace env { 

class EnvObjBuffer
{
public:
    EnvObjBuffer();
    ~EnvObjBuffer();
    allocBuffer(agl::env::EnvObjBuffer::AllocateArg const&, sead::Heap*);
    freeBuffer();
    searchTypeIndex(int, sead::SafeStringBase<char> const&) const;
    searchBufferIndex(int, sead::SafeStringBase<char> const&) const;
    searchTypeIndex(agl::env::EnvObj const*) const;
    searchType(int) const;
    setEnable(int, bool);
    sort(int);
    setEnableAll(bool);
};

} } 
