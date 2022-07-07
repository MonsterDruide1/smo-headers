#pragma once

class BossForestBattlePhase
{
public:
    BossForestBattlePhase(BossForest*, al::ActorInitInfo const&, int);
    appear();
    isStateAttackable() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryAttack();
    updateEyeJoint();
    exeWait();
    exeAttack();
    exeRingBeamAttack();
    exeKnockOver();
    exeRecover();
    exeReactionCoreBreak();
    exeLastDamage();
    ~BossForestBattlePhase();
};
