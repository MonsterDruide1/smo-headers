#pragma once

class HosuiWaterBall
{
public:
    HosuiWaterBall();
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    hitKill(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    clearIgnoreActors();
    addIgnoreActor(al::LiveActor const*);
    shoot(sead::Vector3<float> const&, sead::Vector3<float> const&, unsigned int, al::HitSensor*, bool);
    exeShoot();
    calcEffectMtx(sead::Vector3<float> const&, sead::Vector3<float> const&);
};
