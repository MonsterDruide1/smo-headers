#pragma once

namespace al { 

class JointAimInfo
{
public:
    JointAimInfo();
    makeTurnQuat(sead::Quat<float>*, sead::Vector3<float> const&) const;
    makeTurnQuatCircle(sead::Quat<float>*, sead::Vector3<float> const&) const;
    makeTurnQuatOval(sead::Quat<float>*, sead::Vector3<float> const&) const;
    makeTurnQuatRect(sead::Quat<float>*, sead::Vector3<float> const&) const;
    setBaseAimLocalDir(sead::Vector3<float> const&);
    setBaseUpLocalDir(sead::Vector3<float> const&);
    setBaseSideLocalDir(sead::Vector3<float> const&);
    setBaseOffsetLocal(sead::Vector3<float> const&);
    setBaseMtxPtr(sead::Matrix34<float> const*);
    setTargetPos(sead::Vector3<float> const&);
    setPowerRate(float);
    setLimitDegreeCircle(float);
    setLimitDegreeOval(float, float, float, float);
    setLimitDegreeRect(float, float, float, float);
    setEnableBackAim(bool);
    addPowerRate(float);
    subPowerRate(float);
    setInterpoleRate(float);
};

} 
