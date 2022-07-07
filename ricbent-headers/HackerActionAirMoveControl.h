#pragma once

class HackerActionAirMoveControl
{
public:
    HackerActionAirMoveControl(al::LiveActor*, bool, bool);
    setup(float, float, int, float, float, int, float, float, float, float, float, float, float);
    setupTurn(float, float, float, float, int, int, int);
    setExtendFrame(int);
    setupCollideWallScaleVelocity(float, float, float);
    verticalizeStartMoveDir(sead::Vector3<float> const&);
    update();
    isHoldJumpExtend() const;
    calcMoveInput(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
