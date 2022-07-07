#pragma once

class PlayerJointControlSpineDynamics
{
public:
    PlayerJointControlSpineDynamics(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    start(sead::Vector3<float> const&);
    end();
    update();
    getCtrlTypeName() const;
};
