#pragma once

class PlayerJointControlGroundPose
{
public:
    PlayerJointControlGroundPose(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    calcTilt(int, sead::Matrix34<float>*);
    calcCenterTilt(int, sead::Matrix34<float>*);
    calcCenterBalance(int, sead::Matrix34<float>*);
    calcIK(int, sead::Matrix34<float>*);
    calcRootMtxTilt(sead::Matrix34<float>*);
    calcSpineMtxTilt(sead::Matrix34<float>*);
    calcHeadMtxTilt(sead::Matrix34<float>*);
    calcLegTopMtxTilt(sead::Matrix34<float>*, bool);
    initCenterBalanceRate() const;
    calcCenterBalanceBlendRate() const;
    calcRootMtx(sead::Matrix34<float>*);
    calcHipMtx(sead::Matrix34<float>*);
    calcSpineMtx(sead::Matrix34<float>*);
    calcLegBottomMtx(sead::Matrix34<float>*, sead::SafeArray<sead::Matrix34<float>, 2> const&, sead::SafeArray<int, 2> const&);
    update(float, float, float, float, bool);
    resetTiltRate();
    calcGroundPoseUp(sead::Vector3<float>*) const;
    updateCenterBalance(bool, bool, bool, sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    updateCenterTilt(float, sead::Vector3<float> const&);
    getCtrlTypeName() const;
};
