#pragma once

namespace al { 

class JointLocalAxisRotator
{
public:
    JointLocalAxisRotator(float const*, sead::Vector3<float> const&, bool);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
