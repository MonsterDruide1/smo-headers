#pragma once

class PlayerJointControlCapThrow
{
public:
    PlayerJointControlCapThrow(al::LiveActor const*, sead::Matrix34<float>*);
    calcJointCallback(int, sead::Matrix34<float>*);
    start(float, int, bool);
    forceEnd();
    update();
    getCtrlTypeName() const;
};
