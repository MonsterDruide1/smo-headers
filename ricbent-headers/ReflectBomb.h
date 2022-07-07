#pragma once

class ReflectBomb
{
public:
    ReflectBomb(al::ActorInitInfo const&, al::LiveActor*, char const*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    resetPos(sead::Vector3<float> const&);
    shoot(sead::Vector3<float> const&, sead::Vector3<float> const&, float, bool, bool);
    setExplodeFrame(int);
    tryExplodeForce();
    exeWait();
    exeShoot();
    exeRoll();
    exeExplode();
};
