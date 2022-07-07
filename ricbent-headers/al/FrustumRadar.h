#pragma once

namespace al { 

class FrustumRadar
{
public:
    FrustumRadar();
    calcFrustumArea(sead::Matrix34<float> const&, float, float, float, float);
    setLocalAxis(sead::Matrix34<float> const&);
    setFactor(float, float);
    calcFrustumArea(sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float);
    setFactor(sead::Matrix44<float> const&);
    calcFrustumAreaStereo(sead::Matrix34<float> const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float);
    setLocalAxisStereo(sead::Matrix34<float> const&, sead::Matrix34<float> const&);
    setFactorStereo(sead::Matrix44<float> const&);
    judgeInLeft(sead::Vector3<float> const&, float) const;
    judgeInRight(sead::Vector3<float> const&, float) const;
    judgeInTop(sead::Vector3<float> const&, float) const;
    judgeInBottom(sead::Vector3<float> const&, float) const;
    judgeInArea(sead::Vector3<float> const&, float, float, float) const;
    judgeInArea(sead::Vector3<float> const&, float, float) const;
    judgeInArea(sead::Vector3<float> const&, float) const;
    judgeInAreaNoFar(sead::Vector3<float> const&, float) const;
    judgePointFlag(sead::Vector3<float> const&, float, float) const;
    judgeInAreaObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float, float) const;
    judgeInAreaObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float) const;
    judgeInAreaObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&) const;
    judgeInAreaObbNoFar(sead::Matrix34<float> const*, sead::BoundBox3<float> const&) const;
};

} 
