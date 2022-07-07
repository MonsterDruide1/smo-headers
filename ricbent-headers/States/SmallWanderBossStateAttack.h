#pragma once

class SmallWanderBossStateAttack
{
public:
    SmallWanderBossStateAttack(al::LiveActor*);
    appear();
    kill();
    startWithBullet(SmallWanderBossBullet*);
    exeAttackSign();
    exeAttackSignWait();
    exeAttackStart();
    exeAttack();
    exeAttackEnd();
    ~SmallWanderBossStateAttack();
};
