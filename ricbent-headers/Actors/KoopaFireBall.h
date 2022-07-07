#pragma once

class KoopaFireBall
{
public:
    KoopaFireBall(char const*);
    createForHack(char const*);
    init(al::ActorInitInfo const&);
    appear();
    explode();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeFlyStart();
    exeFly();
    exeExplode();
};
