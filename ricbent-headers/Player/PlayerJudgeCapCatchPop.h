#pragma once

class PlayerJudgeCapCatchPop
{
public:
    PlayerJudgeCapCatchPop(al::LiveActor const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCapActionHistory const*, PlayerCounterAfterCapCatch const*);
    judge() const;
    reset();
    update();
};
