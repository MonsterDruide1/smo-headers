#pragma once

namespace al { 

class JointLocalDirController
{
public:
    JointLocalDirController(al::JointDirectionInfo const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
