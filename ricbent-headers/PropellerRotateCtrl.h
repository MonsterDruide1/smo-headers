#pragma once

class PropellerRotateCtrl
{
public:
    PropellerRotateCtrl(al::LiveActor*, PropellerRotateInfo const&);
    update();
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
