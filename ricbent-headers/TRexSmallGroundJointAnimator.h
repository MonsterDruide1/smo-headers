#pragma once

class TRexSmallGroundJointAnimator
{
public:
    TRexSmallGroundJointAnimator(al::LiveActor*);
    calcJointCallback(int, sead::Matrix34<float>*);
    start();
    update();
    getCtrlTypeName() const;
};
