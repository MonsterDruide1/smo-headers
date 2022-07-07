#pragma once

class FireBrosFireBall
{
public:
    FireBrosFireBall(char const*, al::LiveActor const*);
    init(al::ActorInitInfo const&);
    shoot(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&, bool, int, bool);
    killEnemy();
    move();
    attach(sead::Matrix34<float> const*, sead::Vector3<float> const&, sead::Vector3<float> const&, char const*);
    exeAppear();
    exeMove();
    exeAttach();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    killCollide(al::HitSensor*, sead::Vector3<float> const&, bool);
};
