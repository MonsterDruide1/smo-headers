#pragma once

namespace al { 

class JointPostQuatController
{
public:
    JointPostQuatController(sead::Quat<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
