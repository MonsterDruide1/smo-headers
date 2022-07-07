#pragma once

class GolemJointIKRootCtrl
{
public:
    GolemJointIKRootCtrl(al::LiveActor*, float, float, int, int, int, bool);
    calcJointCallback(int, sead::Matrix34<float>*);
    addBlendRateLeg(float);
    subBlendRateLeg(float);
    addBlendRateFoot(float);
    subBlendRateFoot(float);
    getCtrlTypeName() const;
};
