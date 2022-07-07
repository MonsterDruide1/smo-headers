#pragma once

class KaronWingStateHack
{
public:
    KaronWingStateHack(al::LiveActor*, al::ActorInitInfo const&, IUsePlayerHack**);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateCollider();
    resetFlyLimit(sead::Vector3<float> const&);
    isEndCancel() const;
    isEndReset() const;
    isEndDamage() const;
    updateBasePos();
    tryFly();
    tryLanding();
    exeWait();
    exeWalk();
    exeLand();
    exeWingFly();
    ~KaronWingStateHack();
    getPlayerCollider() const;
};
