#pragma once

class FireDrum2D
{
public:
    FireDrum2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBurn();
    getActorDimensionKeeper() const;
};
