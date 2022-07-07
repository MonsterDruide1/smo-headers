#pragma once

class KoopaCapOnlyWeapon
{
public:
    KoopaCapOnlyWeapon(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    disappear();
    control();
    updateCollider();
    startWaitHover(int);
    startSpinThrowChase(sead::Vector3<float> const*, float);
    isEndWaitHoverStart() const;
    isWaitHover() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitHoverDelay();
    exeWaitHoverStart();
    exeWaitHover();
    exeSpinThrow();
};
