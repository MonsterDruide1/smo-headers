#pragma once

namespace sead { namespace TaskBase { 

class TakeoverArg
{
public:
    TakeoverArg(sead::TaskBase*, sead::TaskClassID const&, sead::FaderTaskBase*);
    TakeoverArg(sead::TaskClassID const&, sead::FaderTaskBase*);
};

} } 
