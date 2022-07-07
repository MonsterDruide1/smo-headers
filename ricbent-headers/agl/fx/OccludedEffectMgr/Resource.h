#pragma once

namespace agl { namespace fx { namespace OccludedEffectMgr { 

class Resource
{
public:
    release();
    initialize(int, sead::Heap*);
    setupWithBinary(void*, sead::SafeStringBase<char> const&);
    setupWithFile(sead::FileDevice*, sead::SafeStringBase<char> const&, sead::Heap*);
    ~Resource();
};

} } } 
