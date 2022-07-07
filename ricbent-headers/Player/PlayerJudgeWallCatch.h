#pragma once

class PlayerJudgeWallCatch
{
public:
    PlayerJudgeWallCatch(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerExternalVelocity const*, PlayerInput const*, PlayerTrigger const*, PlayerCounterForceRun const*);
    reset();
    update();
    judge() const;
};
