#pragma once

namespace al { 

class JointAimController
{
public:
    JointAimController(al::JointAimInfo const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
