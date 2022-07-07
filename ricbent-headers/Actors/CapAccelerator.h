#pragma once

class CapAccelerator
{
public:
    CapAccelerator(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeTrample();
    exeHit();
};
