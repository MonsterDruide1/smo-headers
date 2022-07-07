#pragma once

class SenobiStateEnemy
{
public:
    getStretchLengthMax();
    SenobiStateEnemy(Senobi*, al::ActorInitInfo const&);
    appear();
    updateSensorPos();
    requestAppearFromGeneratePoint(sead::Vector3<float> const&, sead::Vector3<float> const&);
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryReceiveMsgStartHack(al::SensorMsg const*);
    isStateSwoon() const;
    isDead() const;
    isEndReset() const;
    control();
    updateShadowMaskDropLength();
    updateVelocity();
    tryFind();
    doLand();
    exeAppearFromGeneratePoint();
    exeWander();
    exeAttack();
    exeFind();
    exeTurn();
    exeStretch();
    exeStretchWait();
    exeShrink();
    exeFallAttack();
    exeLand();
    exeTrampled();
    exePressDown();
    exeBlowDown();
    exeDamageCap();
    exeDamageCapAir();
    exeSwoon();
    endSwoon();
    exeTrample();
    ~SenobiStateEnemy();
};
