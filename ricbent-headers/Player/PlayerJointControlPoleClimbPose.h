#pragma once

class PlayerJointControlPoleClimbPose
{
public:
    PlayerJointControlPoleClimbPose(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    calcAngle(sead::Matrix34<float>*, sead::Vector3<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    getCtrlTypeName() const;
};
