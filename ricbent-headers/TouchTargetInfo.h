#pragma once

class TouchTargetInfo
{
public:
    TouchTargetInfo();
    setInfoBySensor(al::HitSensor const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    reset();
    setInfoByConnector(al::MtxConnector const*, sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    setInfoByPosAndNrm(sead::Vector3<float> const&, sead::Vector3<float> const&);
    calcCurrentPosAndNrm(sead::Vector3<float>*, sead::Vector3<float>*) const;
};
