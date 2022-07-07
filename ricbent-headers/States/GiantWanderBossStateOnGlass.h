#pragma once

class GiantWanderBossStateOnGlass
{
public:
    GiantWanderBossStateOnGlass(char const*, GiantWanderBoss*, al::ActorInitInfo const&, al::DeriveActorGroup<GiantWanderBossMine>*, al::DeriveActorGroup<HipDropSwitch>*, al::CameraTicket*, al::CameraTicket**);
    setWait();
    skipDemo();
    endDemo();
    exeWait();
    tryChangeDamageOnGlass();
    exeTurnToPlayer();
    exeTurnOnGlass();
    exeAttackStartOnGlass();
    exeAttackOnGlass();
    exeAttackEndOnGlass();
    exeAttackTurn();
    exeWaitDemoDamageOnGlass();
    exeDemoBlowCork();
    exeDemoDamageOnGlass();
    exeDemoDamageOnGlassFirstDamage();
    ~GiantWanderBossStateOnGlass();
};
