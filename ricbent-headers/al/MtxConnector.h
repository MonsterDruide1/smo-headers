#pragma once

namespace al { 

class MtxConnector
{
public:
    MtxConnector();
    MtxConnector(sead::Quat<float> const&, sead::Vector3<float> const&);
    init(sead::Matrix34<float> const*, sead::Matrix34<float> const&);
    init(sead::Matrix34<float> const*);
    clear();
    multVec(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    multTrans(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    multMtx(sead::Matrix34<float>*, sead::Matrix34<float> const&) const;
    multQT(sead::Quat<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
    multQT(sead::Quat<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    multQT(sead::Quat<float>*, sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    getBaseQuat() const;
    getBaseTrans() const;
    setBaseQuatTrans(sead::Quat<float> const&, sead::Vector3<float> const&);
    isConnecting() const;
    calcConnectInfo(sead::Vector3<float>*, sead::Quat<float>*, sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    calcMtxWithOffset(sead::Matrix34<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    tryGetParentTrans(sead::Vector3<float>*) const;
};

} 
