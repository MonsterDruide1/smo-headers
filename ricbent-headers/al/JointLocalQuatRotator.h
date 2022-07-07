#pragma once

namespace al { 

class JointLocalQuatRotator
{
public:
    JointLocalQuatRotator(al::LiveActor const*, char const*, sead::Quat<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
