#pragma once

class Killer
{
public:
    Killer(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    explode();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    resetAliveCountAndAnim();
    control();
    appearBy2D(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Quat<float> const&, int);
    appearInit();
    standByAppear(sead::Vector3<float> const&, sead::Quat<float> const&);
    launch(int);
    forceExplode();
    isHack() const;
    exeAppear();
    exeStandBy();
    exeLaunch();
    applyVelocityDamp();
    exeFly();
    exeExplode();
    exeDamageCap();
    exeHack();
    exeAfterHack();
    exeFallDown();
};
