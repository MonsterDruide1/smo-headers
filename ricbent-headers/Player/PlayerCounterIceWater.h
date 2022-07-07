#pragma once

class PlayerCounterIceWater
{
public:
    PlayerCounterIceWater(al::LiveActor*, al::ActorInitInfo const&, PlayerConst const*, IUsePlayerCollision const*, IJudge*);
    clearIceWaterCount();
    updateCount(bool, bool);
    isTriggerDamage() const;
    updateRecoveryCountImpl();
    killIceEffect();
};
