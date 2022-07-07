#pragma once

namespace al { 

class JointQuatController
{
public:
    JointQuatController(sead::Quat<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
