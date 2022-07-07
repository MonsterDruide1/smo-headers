#pragma once

class SearchBomb
{
public:
    SearchBomb(al::ActorInitInfo const&, al::LiveActor*, char const*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    shoot(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    tryExplodeForce();
    exeShoot();
    exeSearch();
    exeThrust();
    exeExplode();
};
