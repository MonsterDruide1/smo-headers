#pragma once

class In2DAreaMoveControl
{
public:
    In2DAreaMoveControl();
    update(sead::FixedPtrArray<al::AreaObj, 8> const&);
    calcGravityDir(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcLockDir(sead::Vector3<float>*, float*, sead::Vector3<float> const&) const;
    calcLastLockDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    isNearSnapSurface(sead::Vector3<float> const&, float) const;
    isLastAreaPushOutOpposite() const;
    isLastAreaFaceToPushOut() const;
};
