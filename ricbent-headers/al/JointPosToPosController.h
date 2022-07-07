#pragma once

namespace al { 

class JointPosToPosController
{
public:
    JointPosToPosController(sead::Vector3<float> const*, sead::Vector3<float> const*, float*, sead::Vector3<float> const&);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
