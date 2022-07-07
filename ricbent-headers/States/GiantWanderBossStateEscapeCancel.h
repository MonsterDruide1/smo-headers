#pragma once

class GiantWanderBossStateEscapeCancel
{
public:
    GiantWanderBossStateEscapeCancel(GiantWanderBoss*, al::DeriveActorGroup<GiantWanderBossMine>*);
    appear();
    exeAngry();
    exeAppearMine();
    exeLaunch();
    exeLaunchEnd();
    ~GiantWanderBossStateEscapeCancel();
};
