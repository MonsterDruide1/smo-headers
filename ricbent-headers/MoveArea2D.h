#pragma once

class MoveArea2D
{
public:
    MoveArea2D(char const*);
    init(al::AreaInitInfo const&);
    calcSnapPower(sead::Vector3<float>*, float*, sead::Vector3<float> const&, float) const;
    calcSnapPowerCube(sead::Vector3<float>*, float*, sead::Vector3<float> const&, float) const;
    calcSnapPowerCylinder(sead::Vector3<float>*, float*, sead::Vector3<float> const&, float) const;
    calcSnapPowerDisk(sead::Vector3<float>*, float*, sead::Vector3<float> const&, float) const;
    calcGravityDir(sead::Vector3<float>*, float*, sead::Vector3<float> const&) const;
    calcGravityYDir(sead::Vector3<float>*, float*) const;
    calcGravityCylinderCenterAxis(sead::Vector3<float>*, float*, sead::Vector3<float> const&, bool) const;
};
