#pragma once

class PlayerJointControlGrabPose
{
public:
    PlayerJointControlGrabPose(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    calcArmMtx(sead::Matrix34<float>*, sead::SafeArray<sead::Matrix34<float>, 2> const&, sead::SafeArray<int, 2> const&, sead::Matrix34<float> const&, float, sead::Vector3<float> const&, sead::Vector3<float> const&, int, sead::Vector3<float> const&);
    update(float, sead::Vector3<float> const&, float);
    getCtrlTypeName() const;
};
