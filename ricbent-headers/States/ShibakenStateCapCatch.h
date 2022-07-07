#pragma once

class ShibakenStateCapCatch
{
public:
    ShibakenStateCapCatch(char const*, Shibaken*);
    appear();
    kill();
    tryStart();
    tryStartByReceiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeChase();
    exeCatch();
    exeBack();
    exeJump();
    ~ShibakenStateCapCatch();
};
