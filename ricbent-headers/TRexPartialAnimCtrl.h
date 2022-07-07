#pragma once

class TRexPartialAnimCtrl
{
public:
    TRexPartialAnimCtrl(al::LiveActor*);
    validateAttackMouthSensor(al::LiveActor*);
    invalidateAttackMouthSensor(al::LiveActor*);
    startMoveAttack();
    tryStartMoveTouch();
    startEnemyAttack();
    tryCancel();
    isAttack() const;
    update();
    exeNone();
    exeMoveAttack();
    endMoveAttack();
    exeMoveTouch();
    exeEnemyAttack();
    endEnemyAttack();
    ~TRexPartialAnimCtrl();
};
