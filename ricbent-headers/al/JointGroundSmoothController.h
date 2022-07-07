#pragma once

namespace al { 

class JointGroundSmoothController
{
public:
    JointGroundSmoothController(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    setGroundSmoothJoint(int);
    getCtrlTypeName() const;
};

} 
