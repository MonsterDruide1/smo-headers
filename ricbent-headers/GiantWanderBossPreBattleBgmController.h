#pragma once

class GiantWanderBossPreBattleBgmController
{
public:
    GiantWanderBossPreBattleBgmController(GiantWanderBoss*, al::DeriveActorGroup<GiantWanderBossMine>*);
    update();
    startWait();
    exeWait();
    exeNearMines();
    exeNearGiantWanderBoss();
    ~GiantWanderBossPreBattleBgmController();
};
