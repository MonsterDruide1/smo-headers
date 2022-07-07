#pragma once

namespace al { 

class ActorVariableFrameRateSkeletalAnimator
{
public:
    ActorVariableFrameRateSkeletalAnimator(al::LiveActor*, al::StageSyncCounter const*);
    preMovement(al::LiveActor*);
};

} 
