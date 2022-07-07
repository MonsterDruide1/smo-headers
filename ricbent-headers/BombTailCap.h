#pragma once

class BombTailCap
{
public:
    BombTailCap(al::LiveActor*);
    initCap(al::LiveActor*, al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    disappear();
    startBattle();
    startPanicEnd();
    startResetAttack();
    endResetAttack();
    startReaction();
    startReactionWithoutAnim(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppearPanicEnd();
    exeBeforeBattleStart();
    exeWait();
    exeBlowDown();
    exeDisappear();
    exeReaction();
    exeResetAttackState();
};
