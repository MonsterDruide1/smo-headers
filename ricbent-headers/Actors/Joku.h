#pragma once

class Joku
{
public:
    Joku(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setPuppetJumpBack(IUsePlayerPuppet*, al::LiveActor const*);
    control();
    exeWait();
    exeAppearArm();
    resetArm(int);
    exeWaitBeforeAttack();
    exeAttackSign();
    exeAttack();
    exeWaitBeforeTurn();
    exeTurn();
    exeWaitBeforeMove();
    exeMove();
    exeDamage();
    disappearArm();
    isArmAllDead();
    exeStandby();
    exeReturn();
    exeDisappearStart();
    exeDisappear();
    exeDelay();
    exeItemAppearDemo();
    exeRotateAttackStart();
    exeRotateAttack();
    exeRotateAttackEnd();
};
