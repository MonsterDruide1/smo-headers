#pragma once

namespace al { 

class JointLookAtController
{
public:
    JointLookAtController(int, sead::Matrix34<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    appendJoint(al::JointLookAtInfo*);
    requestJointLookAt(sead::Vector3<float> const&);
    invalidJoint(int);
    validAllJoint();
    getCtrlTypeName() const;
};

} 
