#pragma once

namespace al { 

class ScreenPointTarget
{
public:
    ScreenPointTarget(al::LiveActor*, char const*, float, sead::Vector3<float> const*, char const*, sead::Vector3<float> const&);
    setFollowMtxPtrByJointName(al::LiveActor const*);
    getJointName() const;
    update();
    validate();
    invalidate();
    validateBySystem();
    invalidateBySystem();
    getTargetRadius() const;
    getTargetName() const;
    setTargetName(char const*);
    setTargetRadius(float);
    setTargetFollowPosOffset(sead::Vector3<float> const&);
    setJointName(char const*);
};

} 
