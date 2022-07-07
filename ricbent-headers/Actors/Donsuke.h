#pragma once

class Donsuke
{
public:
    Donsuke(char const*);
    init(al::ActorInitInfo const&);
    endClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeFind();
    mainMove();
    exeSideStep();
    exeRunFront();
    startActionRunFront();
    exeRunBack();
    exeSideStepUnwilling();
    exeRunFrontUnwilling();
    exeTurn();
    exeAttackSign();
    exeAttack();
    exeAttackImpact();
    exeAttackWait();
    exeAttackEndSign();
    exeAttackEnd();
    exeDamage();
    exeDown();
    exeReviveWait();
    exeAppearSign();
    tryCalcPlayerPos();
    isAbleAttack();
    isAbleMove(int);
    isPlayerPosCenter();
    isPlayerPosHead();
    isAbleTurn(int);
    isPlayerPosFront();
    isPlayerPosAttack();
    isPlayerPosAttackCenterLine();
    isPlayerPosAttackNotMoveable();
    isShouldSideStep(int);
    isPlayerPosRight();
    isPlayerPosLeft();
    isPlayerPosSide();
    isPlayerPosCenterLine();
    isPlayerPosBack();
};
