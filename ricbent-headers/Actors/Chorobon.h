#pragma once

class Chorobon
{
public:
    Chorobon(char const*, float const*);
    init(al::ActorInitInfo const&);
    control();
    exeMove();
    exeReaction();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getActorDimensionKeeper() const;
};
