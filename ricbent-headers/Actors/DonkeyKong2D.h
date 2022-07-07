#pragma once

class DonkeyKong2D
{
public:
    DonkeyKong2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeThrow();
    exeDamage();
    exeDown();
    getActorDimensionKeeper() const;
};
