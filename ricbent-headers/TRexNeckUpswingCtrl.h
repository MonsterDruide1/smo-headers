#pragma once

class TRexNeckUpswingCtrl
{
public:
    TRexNeckUpswingCtrl(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    update(sead::Vector3<float> const&);
    getCtrlTypeName() const;
};
