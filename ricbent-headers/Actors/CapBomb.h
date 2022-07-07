#pragma once

class CapBomb
{
public:
    CapBomb(char const*);
    init(al::ActorInitInfo const&);
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeExplosion();
};
