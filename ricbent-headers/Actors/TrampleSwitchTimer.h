#pragma once

class TrampleSwitchTimer
{
public:
    TrampleSwitchTimer(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    exeOn();
    exeOnWait();
    exeOff();
    exeOffWait();
    exeFreeze();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
