#pragma once

class KuriboMini
{
public:
    KuriboMini(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    makeActorDead();
    appear();
    kill();
    appearPop();
    appearPopBack();
    control();
    checkSandSinkPrecisely();
    updateCollider();
    startClipped();
    endClipped();
    noRevive();
    exeWait();
    setShiftTypeOnGround(int);
    isPlayerUp();
    exeWander();
    tryShiftDrown();
    exeTurn();
    exeFind();
    exeChaseReady();
    exeChase();
    exeStop();
    exeAttack();
    exeBlow();
    exeBlowLand();
    exeBlowRecover();
    exePressDown();
    exeBlowDown();
    exeFall();
    exeLand();
    tryShiftChaseOrWander();
    exeSink();
    updateSink();
    exeReset();
    exeSandGeyser();
    exeDrown();
    exeHide();
    exePopAppearStart();
    exePopAppear();
    exePopAppearEnd();
    exeBind();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    prepareKillByShineGet();
    tryReceiveMsgNormal(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    notifyJumpSink(float);
    validateSpecialPush(unsigned int);
    forceStartClipped();
};
