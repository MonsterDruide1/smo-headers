#pragma once

namespace al { 

class ClippingInfoGroup
{
public:
    ClippingInfoGroup();
    registerInfo(al::ClippingActorInfo*);
    removeInfo(al::ClippingActorInfo*);
    addCount();
    allocBuffer();
    setGroupId(al::ClippingActorInfo const*);
    isEqualGroupId(al::PlacementId const*) const;
    judgeClippingAll(al::ClippingJudge const*) const;
    startClippedAll();
    endClippedAll();
};

} 
