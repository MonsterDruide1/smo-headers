#pragma once

class TRexNeckRumbleCtrl
{
public:
    TRexNeckRumbleCtrl(al::LiveActor*);
    calcJointCallback(int, sead::Matrix34<float>*);
    startRumble(sead::Vector3<float> const&, al::LiveActor const*);
    update();
    getCtrlTypeName() const;
};
