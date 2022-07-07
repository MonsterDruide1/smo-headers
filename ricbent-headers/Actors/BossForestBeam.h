#pragma once

class BossForestBeam
{
public:
    BossForestBeam(al::LiveActor const*);
    init(al::ActorInitInfo const&);
    appear();
    makeActorDead();
    attackSensor(al::HitSensor*, al::HitSensor*);
    setup(BossForestBeamParam const&);
    isStateDamage() const;
    startLockOn();
    startAttack();
    getSearchTime() const;
    isStateLockOn() const;
    exeAttackSign();
    exeLockOn();
    exeAttack();
    exeAttackWait();
};
