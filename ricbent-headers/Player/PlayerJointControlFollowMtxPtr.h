#pragma once

class PlayerJointControlFollowMtxPtr
{
public:
    PlayerJointControlFollowMtxPtr(sead::Matrix34<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
