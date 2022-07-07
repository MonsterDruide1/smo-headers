#pragma once

class NeedleTrap
{
public:
    NeedleTrap(char const*);
    init(al::ActorInitInfo const&);
    stop();
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    makeActorDead();
    exeStandby();
    exeWait();
    exeSign();
    exeAttack();
    exeEnd();
    exeStop();
};
