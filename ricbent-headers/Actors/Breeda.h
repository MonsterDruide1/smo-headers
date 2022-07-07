#pragma once

class Breeda
{
public:
    Breeda(char const*);
    init(al::ActorInitInfo const&);
    calcCapCount() const;
    calcHandPos();
    startBattleDemo();
    calcAnim();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableAttackSuccess() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableDamage() const;
    exePreDemoBattleStart();
    exeDemoBattleStart();
    setUpDemo();
    setUpBattle();
    exePreDemoBattleEnd();
    exeDemoBattleEnd();
    updateDemoBattleEndCameraShine();
    updateDemoBattleEndCamera();
    exeDemoBattleEndCamera();
    updateWaitWalkAnim(bool, char const*, char const*, float, float, bool);
    exeBattleStartWait();
    exeWait();
    updateAimHead();
    updateVelocityToWanwan();
    updateTurnToWanwan(float);
    updateVelocityGround();
    isLast() const;
    exeForgive();
    exeAttackSuccess();
    exePanicStart();
    isPanic() const;
    exePanic();
    exePull();
    exePullEnd();
    exeSlapSign();
    exeSlap();
    exeMoveToWanwan();
    exeSlapSignWanwan();
    exeSlapWanwan();
    exeTired();
    exeTiredEnd();
    exePreDamage();
    exeDamage();
    exeDamageLast();
    endBattleDemo();
    exeThrowWanwanSign();
    exeThrowWanwan();
    exeThrowWanwanEnd();
};
