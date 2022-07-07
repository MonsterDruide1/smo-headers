#pragma once

class CapSwitchTimer
{
public:
    CapSwitchTimer(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    initAfterPlacement();
    control();
    exeOffWait();
    exeOffWaitCapHold();
    exeHitReaction();
    exeOnWait();
    exeReturnOff();
    exeFreeze();
};
