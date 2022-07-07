#pragma once

namespace al { 

class JointSimpleIK
{
public:
    JointSimpleIK(al::LiveActor const*, char const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    requestIk(sead::Vector3<float> const&);
    isNeedTwiceCalc(int, bool) const;
    calcJointCallbackTwice(int, sead::Matrix34<float>*);
    calcIkInfo();
    getCtrlTypeName() const;
};

} 
