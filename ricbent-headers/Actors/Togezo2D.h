#pragma once

class Togezo2D
{
public:
    Togezo2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startMove();
    control();
    exeWalk();
    exeDamage();
    exeHideWait();
    getActorDimensionKeeper() const;
};
