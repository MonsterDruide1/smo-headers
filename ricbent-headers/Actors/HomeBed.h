#pragma once

class HomeBed
{
public:
    HomeBed(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeSnoozeStart();
    exeSnooze();
    exeSleepStart();
    exeSleep();
    exeStandUp();
    exeBindJump();
    exeWaitNoSleep();
    tryEndBind();
};
