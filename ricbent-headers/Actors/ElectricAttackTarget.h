#pragma once

class ElectricAttackTarget
{
public:
    ElectricAttackTarget(char const*);
    init(al::ActorInitInfo const&);
    appearBySwitch();
    killBySwitch();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
