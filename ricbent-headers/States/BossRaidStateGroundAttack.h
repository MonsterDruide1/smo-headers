#pragma once

class BossRaidStateGroundAttack
{
public:
    BossRaidStateGroundAttack(BossRaid*, al::ActorInitInfo const&);
    appear();
    exeFallSign();
    exeFall();
    exeAttack();
    getGroundAttackTime() const;
    shotBulletLv1();
    shotBulletLv2();
    shotBulletLv3();
    shotBulletLv4();
    shotBulletLv5();
    shotBulletLv6();
    exeAttackEnd();
    isElectric() const;
    updateBullet();
    killBulletAll();
    ~BossRaidStateGroundAttack();
};
