#pragma once

class PlayerColliderMatrixCameraTarget
{
public:
    PlayerColliderMatrixCameraTarget(al::LiveActor const*, IUsePlayerCollision const*, sead::Matrix34<float> const*);
    calcTrans(sead::Vector3<float>*) const;
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
};
