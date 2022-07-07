#pragma once

class ShibakenStateJump
{
public:
    ShibakenStateJump(char const*, Shibaken*);
    appear();
    update();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isKillByDeathArea() const;
    exeJumpStart();
    exeJump();
    exeJumpEnd();
    exeKillByDeathArea();
    ~ShibakenStateJump();
};
