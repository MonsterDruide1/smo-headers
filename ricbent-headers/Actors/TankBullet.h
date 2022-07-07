#pragma once

class TankBullet
{
public:
    TankBullet(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    explode();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    shoot(sead::Vector3<float> const&, sead::Vector3<float> const&, int, bool, bool);
    shootByPlayer(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, int);
    exeStart();
    exeMove();
    disappear();
    exeMovePlayer();
    exeExplode();
    exeYoshiEat();
};
