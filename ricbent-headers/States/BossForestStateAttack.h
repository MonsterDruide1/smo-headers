#pragma once

class BossForestStateAttack
{
public:
    BossForestStateAttack(BossForest*, int, BossForestBeamParam const&);
    initialize(al::ActorInitInfo const&);
    appear();
    tryKillBeam();
    reloadBeam() const;
    exeSearch();
    exeLockOn();
    exeLockOnDirect();
    exeAttack();
    exeAttackWait();
    ~BossForestStateAttack();
};
