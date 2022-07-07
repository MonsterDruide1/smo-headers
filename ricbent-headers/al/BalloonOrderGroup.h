#pragma once

namespace al { 

class BalloonOrderGroup
{
public:
    BalloonOrderGroup(al::PlacementInfo const&);
    isEqual(al::PlacementInfo const&) const;
    registerRequester(al::LiveActor const*, al::IUseEventFlowData const*, al::ActorInitInfo const&);
    isEnableAppearBalloon(al::LiveActor const*) const;
    update(sead::Vector3<float> const&);
};

} 
