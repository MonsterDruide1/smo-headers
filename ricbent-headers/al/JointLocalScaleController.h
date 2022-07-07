#pragma once

namespace al { 

class JointLocalScaleController
{
public:
    JointLocalScaleController();
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
