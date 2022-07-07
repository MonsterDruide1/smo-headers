#pragma once

namespace al { 

class BezierCurve
{
public:
    BezierCurve();
    set(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcLength(float, float, int) const;
    calcPos(sead::Vector3<float>*, float) const;
    calcVelocity(sead::Vector3<float>*, float) const;
    calcDeltaLength(float) const;
    calcCurveParam(float) const;
    calcNearestParam(sead::Vector3<float> const&, float) const;
    calcNearestLength(float*, sead::Vector3<float> const&, float, float) const;
    calcNearestPos(sead::Vector3<float>*, sead::Vector3<float> const&, float) const;
    calcStartPos(sead::Vector3<float>*) const;
    calcCtrlPos1(sead::Vector3<float>*) const;
    calcCtrlPos2(sead::Vector3<float>*) const;
    calcEndPos(sead::Vector3<float>*) const;
};

} 
