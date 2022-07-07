#pragma once

class SmallWanderBossBullet
{
public:
    SmallWanderBossBullet(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAttach(sead::Matrix34<float> const*, sead::Vector3<float> const*);
    appearAttachParabolic(sead::Matrix34<float> const*, sead::Vector3<float> const*);
    tryStartFlyParabolic(sead::Vector3<float> const&, float);
    startLaunch();
    exeAppearAttach();
    exeFly();
    resetPositionByAnim();
    exeFlyDown();
    exeSignExplosion();
    exeExplosion();
};
