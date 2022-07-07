#pragma once

class CatchBomb
{
public:
    CatchBomb(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableExplosion() const;
    tryShiftExplode(bool);
    isEnableEnemyAttack() const;
    tryShiftAttack();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveMsgPushLocal(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCapReflectNerve() const;
    isUncapNerve() const;
    exeWait();
    calcGravity();
    calcBrake();
    tryShiftFall();
    tryShiftDamageCollisionExplode();
    exeFind();
    tryShiftWait();
    exeMove();
    exeTurn();
    exeFall();
    exeBack();
    exeAttack();
    exeCatch();
    requestCapHitReaction(char const*, bool);
    exePull();
    checkCollisionExplode(sead::Vector3<float> const&);
    exeMarch();
    exeExplode();
    exeHide();
    exeAppear();
    exeThrow();
    initThrow(al::ActorInitInfo const&);
    appearThrow(sead::Vector3<float> const&, sead::Vector3<float> const&);
    control();
};
