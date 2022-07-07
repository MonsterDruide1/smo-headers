#pragma once

class PlayerStateTargetJump
{
public:
    PlayerStateTargetJump(al::LiveActor*, sead::Vector3<float> const*, sead::Vector3<float> const*);
    appear();
    kill();
    exeJump();
    calcMaxMoveH(bool);
    calcMaxSpeedH();
    calcHeightRate();
    calcMinJumpHeight();
    isEnableJumpPoint(sead::Vector3<float> const&, sead::Vector3<float> const&);
    requestJumpAnim(char const*);
    ~PlayerStateTargetJump();
};
