#pragma once

class ImomuJointMtxControllerTmp
{
public:
    ImomuJointMtxControllerTmp(sead::Matrix34<float>*, al::LiveActor const*, int);
    calcJointCallback(int, sead::Matrix34<float>*);
    tryStartAppearAnim();
    tryStartDisappear();
    tryStartReaction();
    getCtrlTypeName() const;
};
