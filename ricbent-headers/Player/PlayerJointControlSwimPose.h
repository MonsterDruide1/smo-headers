#pragma once

class PlayerJointControlSwimPose
{
public:
    PlayerJointControlSwimPose(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
