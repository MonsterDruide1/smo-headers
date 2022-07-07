#pragma once

class HipDropSwitch
{
public:
    HipDropSwitch(char const*);
    init(al::ActorInitInfo const&);
    reset();
    control();
    isOn() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startClipped();
    isOnWait() const;
    writeSave();
    validateSwitchByCage();
    invalidateSwitchByCage();
    exeOffWait();
    exeReactionLand();
    exeOn();
    exeOnWait();
    exeDisable();
};
