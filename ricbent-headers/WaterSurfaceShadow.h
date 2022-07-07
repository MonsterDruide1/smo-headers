#pragma once

class WaterSurfaceShadow
{
public:
    WaterSurfaceShadow(al::ActorInitInfo const&, char const*);
    isAppearShadow() const;
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    disappearShadow();
    setScale(float);
    setScale(float, float);
    setQuat(sead::Quat<float> const&);
};
