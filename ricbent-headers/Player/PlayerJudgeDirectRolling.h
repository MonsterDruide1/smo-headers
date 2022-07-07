#pragma once

class PlayerJudgeDirectRolling
{
public:
    PlayerJudgeDirectRolling(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*, PlayerCounterForceRun const*);
    reset();
    update();
    judge() const;
};
