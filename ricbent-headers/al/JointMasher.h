#pragma once

namespace al { 

class JointMasher
{
public:
    JointMasher(al::LiveActor const*, bool const*, int);
    append(char const*, float);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
