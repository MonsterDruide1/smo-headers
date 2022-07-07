#pragma once

namespace al { 

class LinearCurve
{
public:
    LinearCurve();
    set(sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcPos(sead::Vector3<float>*, float) const;
    calcVelocity(sead::Vector3<float>*, float) const;
    calcLength(float, float) const;
    calcCurveParam(float) const;
    calcNearestParam(sead::Vector3<float> const&) const;
    calcNearestLength(float*, sead::Vector3<float> const&, float) const;
    calcNearestPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcStartPos(sead::Vector3<float>*) const;
    calcEndPos(sead::Vector3<float>*) const;
};

} 
