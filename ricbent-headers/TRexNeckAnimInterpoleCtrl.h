#pragma once

class TRexNeckAnimInterpoleCtrl
{
public:
    TRexNeckAnimInterpoleCtrl(al::LiveActor*);
    calcJointCallback(int, sead::Matrix34<float>*);
    startInterpole(int);
    update();
    getCtrlTypeName() const;
};
