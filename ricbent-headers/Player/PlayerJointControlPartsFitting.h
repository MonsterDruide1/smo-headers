#pragma once

class PlayerJointControlPartsFitting
{
public:
    PlayerJointControlPartsFitting(al::LiveActor const*);
    initByHostResource();
    calcJointCallback(int, sead::Matrix34<float>*);
    calcJointFitting(sead::Matrix34<float>*, PlayerJointControlPartsFitting::FittingInfo const*);
    getCtrlTypeName() const;
};
