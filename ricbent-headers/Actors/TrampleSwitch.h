#pragma once

class TrampleSwitch
{
public:
    TrampleSwitch(char const*);
    init(al::ActorInitInfo const&);
    offSwitch();
    resetSwitch();
    initAfterPlacement();
    control();
    exeOffWait();
    exeOn();
    exeOnDemoWaitStart();
    exeOnDemo();
    exeOnWait();
    exeOff();
    isOn() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    trySetNerveOn();
};
