#pragma once

class ExtForceArea
{
public:
    ExtForceArea(char const*);
    init(al::AreaInitInfo const&);
    calcExtForce(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
};
