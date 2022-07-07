#pragma once

class HackCapJointControlKeeper
{
public:
    HackCapJointControlKeeper();
    initCapJointControl(al::LiveActor*);
    initDisplayCapJointControl(al::LiveActor*);
    updateRotateThrowZ(float, float);
    updateRotateStayZ(float);
    updateRotateY(float);
};
