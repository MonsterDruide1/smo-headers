#pragma once

namespace al { 

class JointLocalTransController
{
public:
    JointLocalTransController();
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
