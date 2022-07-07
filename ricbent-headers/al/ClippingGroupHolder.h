#pragma once

namespace al { 

class ClippingGroupHolder
{
public:
    ClippingGroupHolder();
    update(al::ClippingJudge const*);
    createAndCount(al::ClippingActorInfo*);
    tryFindGroup(al::ClippingActorInfo const*);
    allocBuffer();
    registerInfo(al::ClippingActorInfo*);
    leave(al::ClippingActorInfo*);
    reentry(al::ClippingActorInfo*);
};

} 
