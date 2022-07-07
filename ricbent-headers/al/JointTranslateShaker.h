#pragma once

namespace al { 

class JointTranslateShaker
{
public:
    JointTranslateShaker(al::LiveActor const*, int);
    append(int, JointTranslateAxis);
    append(char const*, JointTranslateAxis);
    getJointIndexActor(char const*);
    setShake(float, int, float, float);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
