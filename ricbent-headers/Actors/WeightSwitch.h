#pragma once

class WeightSwitch
{
public:
    WeightSwitch(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    exeOffWait();
    exeOn();
    exeOnDemoWaitStart();
    exeOnDemoWaitCameraInterpoling();
    exeOnDemo();
    exeOnWait();
    exeOff();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
