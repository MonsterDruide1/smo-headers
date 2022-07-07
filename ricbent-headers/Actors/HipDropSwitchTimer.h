#pragma once

class HipDropSwitchTimer
{
public:
    HipDropSwitchTimer(char const*);
    init(al::ActorInitInfo const&);
    control();
    isOn() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startClipped();
    exeOff();
    exeOffWait();
    exeReactionLand();
    exeOn();
    exeOnWait();
};
