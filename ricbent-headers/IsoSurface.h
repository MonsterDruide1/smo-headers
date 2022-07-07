#pragma once

class IsoSurface
{
public:
    IsoSurface();
    makeIsoSurface(sead::Vector3<float>*, unsigned int, float, int);
    interpVertex(sead::Vector3<float>*, float, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float) const;
    makeTriangle(sead::Vector3<float>*, unsigned int, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, int);
};
