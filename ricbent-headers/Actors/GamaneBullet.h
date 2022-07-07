#pragma once

class GamaneBullet
{
public:
    GamaneBullet(char const*, al::LiveActor const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    control();
    shoot(float, sead::Vector3<float> const&);
    rotate(float);
    exeStraight();
    exeBrake();
    exeFall();
    exeHit();
};
