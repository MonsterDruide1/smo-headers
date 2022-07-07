#pragma once

class HomeChair
{
public:
    HomeChair(char const*, HomeChair*);
    init(al::ActorInitInfo const&);
    getCapMovePoint() const;
    control();
    getCapActor() const;
    getEyeController() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    capOnPuppetPlayer();
    exeWait();
    exeBindSitDownStart();
    exeBindSitDown();
    exeBindCapAppear();
    exeBindLookCap();
    exeBindLookDefault();
    exeBindWait();
    exeBindSleepStart();
    exeBindSleep();
    exeBindWakeUp();
    exeBindStandUp();
    exeBindJump();
    exeWaitNoSitDown();
};
