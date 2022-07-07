#pragma once

class PlayerActionAirMoveControl
{
public:
    PlayerActionAirMoveControl(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, bool);
    setup(float, float, int, float, float, int, float);
    setupTurn(float, float, float, float, int, int, int);
    setExtendFrame(int);
    setupCollideWallScaleVelocity(float, float, float);
    verticalizeStartMoveDir(sead::Vector3<float> const&);
    update();
    isHoldJumpExtend() const;
    calcMoveInput(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
