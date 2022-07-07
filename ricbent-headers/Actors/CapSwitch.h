#pragma once

class CapSwitch
{
public:
    CapSwitch(char const*);
    init(al::ActorInitInfo const&);
    listenStart();
    listenReset();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    initAfterPlacement();
    control();
    exeOffWait();
    exeOffWaitCapHold();
    exeHitReaction();
    exeOnWait();
    exeReturnOff();
    exeOffWaitInvalid();
    isOn() const;
};
