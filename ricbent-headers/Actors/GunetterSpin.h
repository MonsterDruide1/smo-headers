#pragma once

class GunetterSpin
{
public:
    GunetterSpin(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    makeActorAlive();
    makeActorDead();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
