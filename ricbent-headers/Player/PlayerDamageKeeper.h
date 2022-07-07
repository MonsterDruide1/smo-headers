#pragma once

class PlayerDamageKeeper
{
public:
    PlayerDamageKeeper(al::LiveActor*, PlayerEffect*);
    invalidate(int);
    invalidateIncludePush(int);
    damage(int);
    resetKidsModeLifeRecovery();
    tryShowKidsModeLifeOneCapMessage();
    damageForce(int);
    dead();
    reset(IPlayerModelChanger*);
    activatePreventDamage();
    update(IPlayerModelChanger*, bool, bool);
    updatePreventDamage();
    updateKidsModeLifeRecovery(bool);
};
