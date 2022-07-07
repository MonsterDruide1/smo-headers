#pragma once

class GolemClimbThrustPoint
{
public:
    GolemClimbThrustPoint(al::LiveActor*, al::LiveActor*, al::LiveActor*);
    appear();
    onCollisionParts();
    kill();
    tryOpen();
    tryClose();
    exeOpen();
    exeWaitOpen();
    exeClose();
    exeWaitClose();
    exeDead();
    startMclAnim(char const*);
    offCollisionParts();
    ~GolemClimbThrustPoint();
};
