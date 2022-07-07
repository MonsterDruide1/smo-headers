#pragma once

class ElectricSwitch
{
public:
    ElectricSwitch(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    initAfterPlacement();
    control();
    exeWait();
    exeHitReaction();
    exeReactionEnd();
};
