#pragma once

class SkyWorldKoopaFire
{
public:
    SkyWorldKoopaFire(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    listenKill();
    exeWait();
    exeHighTension();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
