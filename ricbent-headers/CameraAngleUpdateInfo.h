#pragma once

class CameraAngleUpdateInfo
{
public:
    CameraAngleUpdateInfo(bool, bool, float, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector2<float> const&, int, float, bool, bool, bool, sead::Vector3<float> const&);
    chaseToSubTarget(float, float);
};
