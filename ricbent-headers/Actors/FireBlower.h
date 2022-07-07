#pragma once

class FireBlower
{
public:
    FireBlower(char const*);
    init(al::ActorInitInfo const&);
    startBattleStartDemo();
    exeBeforeDemoStart();
    isValidCamera() const;
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    hideFireBlowerFireVisAll();
    damageOrDie();
    exeBattleStartDemo();
    exeStandBy();
    exeResetAttackStart();
    exeResetAttackEnd();
    lotMiss();
    trySetNerveBlowSignOrBlowMissSign();
    trySetNerveWaitAttackSignOrWaitAttackMissSign();
    trySetNerveWait();
    exeWaitAttackMiss();
    exeWait();
    exeWaitAttackMissSign();
    exeWaitAttackSign();
    showFireBlowerFireVisAll();
    tryChangeFireBlowerFireVisibility();
    exeWaitAttack();
    exeRunAttack();
    exeWaitAttackEnd();
    exeRunAttackEnd();
    exeTurn();
    exeChase();
    tryReflect();
    exeAttackMoveReset();
    exeAttackMoveResetEnd();
    exeAttackMoveLineAttackSign();
    exeAttackMoveLineAttack();
    exeAttackMoveLineAttackTrampleReaction();
    exeAttackMoveLineAttackEnd();
    exeBlowSign();
    exeBlow();
    exeBlowEnd();
    exeBlowMissSign();
    exeBlowMiss();
    exeReactionCap();
    exeTrampleCap();
    exeDamage();
    exeResetFireFirstSignBeforeWait();
    exeResetFireSign();
    exeResetFire();
    exeResetFireEnd();
    exeFace();
    exeBattleEndDemo();
};
