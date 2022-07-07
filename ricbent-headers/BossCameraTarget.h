#pragma once

class BossCameraTarget
{
public:
    BossCameraTarget(al::LiveActor const*, BossCameraTargetParam const*);
    calcTrans(sead::Vector3<float>*) const;
    isCollideGround() const;
};
