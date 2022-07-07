#pragma once

class TRexNeckSwingWatchCtrl
{
public:
    TRexNeckSwingWatchCtrl(al::LiveActor*);
    calcJointCallback(int, sead::Matrix34<float>*);
    update(bool);
    updateResetTurn();
    updateTurn(sead::Vector3<float> const&, float, float);
    reset();
    getCtrlTypeName() const;
};
