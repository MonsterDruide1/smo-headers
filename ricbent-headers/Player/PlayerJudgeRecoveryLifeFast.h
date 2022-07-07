#pragma once

class PlayerJudgeRecoveryLifeFast
{
public:
    PlayerJudgeRecoveryLifeFast(al::LiveActor const*, PlayerDamageKeeper const*, PlayerBindKeeper const*, IUsePlayerCollision const*, PlayerInput const*, PlayerHackKeeper const*, PlayerStateWait const*, PlayerStateSwim const*, IJudge const*);
    judge() const;
    isEnableRecoveryLifeState() const;
    reset();
    update();
};
