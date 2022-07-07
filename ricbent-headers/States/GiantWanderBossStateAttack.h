#pragma once

class GiantWanderBossStateAttack
{
public:
    GiantWanderBossStateAttack(al::LiveActor*);
    appear();
    kill();
    startWithBullet(GiantWanderBossBullet*);
    startWithMineFirstPhase(GiantWanderBossMine*);
    startWithMineEscape(GiantWanderBossMine*);
    startWithMineLongRange(GiantWanderBossMine*);
    exeAttackSign();
    exeAttackSignWait();
    exeAttackStart();
    exeAttack();
    exeAttackEnd();
    ~GiantWanderBossStateAttack();
};
