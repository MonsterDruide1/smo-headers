#pragma once

namespace al { 

class JointQuatTransController
{
public:
    JointQuatTransController(sead::Quat<float> const*, sead::Vector3<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
