#pragma once

namespace al { 

class JointMtxController
{
public:
    JointMtxController(sead::Matrix34<float> const*, bool);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
