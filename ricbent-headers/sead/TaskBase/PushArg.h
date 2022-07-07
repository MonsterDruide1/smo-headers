#pragma once

namespace sead { namespace TaskBase { 

class PushArg
{
public:
    PushArg(sead::TaskBase*, sead::TaskClassID const&, sead::FaderTaskBase*);
    PushArg(sead::TaskClassID const&, sead::FaderTaskBase*);
};

} } 
