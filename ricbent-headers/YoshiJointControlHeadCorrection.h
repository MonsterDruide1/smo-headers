#pragma once

class YoshiJointControlHeadCorrection
{
public:
    YoshiJointControlHeadCorrection(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
