#pragma once

class MofumofuBullet
{
public:
    MofumofuBullet(char const*, bool);
    init(al::ActorInitInfo const&);
    startFly(sead::Vector3<float> const&, sead::Vector3<float> const&, int, int, bool);
    forceExplode();
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isAliveAnyChild() const;
    isEnableShoot() const;
    exeFlyStart();
    exeFlyWait();
    exeExplosionSign();
    exeFly();
};
