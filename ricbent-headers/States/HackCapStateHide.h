#pragma once

class HackCapStateHide
{
public:
    HackCapStateHide(al::LiveActor*, PlayerColliderHackCap*, al::LiveActor const*, PlayerSeparateCapFlag const*, PlayerInput const*, al::PartsModel*, HackCapJointControlKeeper*);
    appear();
    kill();
    update();
    isSeparateMode() const;
    cancelSeparateMode();
    calcSeparateThrowOffset(sead::Vector3<float>*) const;
    exeHide();
    tryForceFollowSeparate();
    exeSeparateWait();
    ~HackCapStateHide();
};
