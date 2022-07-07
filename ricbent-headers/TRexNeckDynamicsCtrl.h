#pragma once

class TRexNeckDynamicsCtrl
{
public:
    TRexNeckDynamicsCtrl(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    reset(sead::Vector3<float> const&);
    getCtrlTypeName() const;
};
