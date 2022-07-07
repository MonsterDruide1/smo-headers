#pragma once

namespace al { 

class JointRumbler
{
public:
    JointRumbler(al::LiveActor const*, char const*, float, float, int, int);
    initDetails(al::JointRumbler::EAxis, int, float);
    start();
    update();
    updateEach(float*, al::JointRumbler::EAxis);
    reset();
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};

} 
