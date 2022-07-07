#pragma once

class KoopaWeaponHolder
{
public:
    create(al::LiveActor const*, al::ActorInitInfo const&, int);
    makeActorDeadAll();
    killAll();
    cancelAll();
    findDeadDamageBall() const;
    findDeadDamageBallBomb() const;
    disappearAllDummyCap();
    killAllDummyCapWaitHover();
    isAllAliveDummyCapWaitHover() const;
    getDummyCap(int) const;
    findDeadDummyCap() const;
    resetWeaponItemGenerateLimitByDamage();
    KoopaWeaponHolder();
};
