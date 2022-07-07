#pragma once

class PlayerJudgeForceRolling
{
public:
    PlayerJudgeForceRolling(al::LiveActor const*, IUsePlayerCollision const*);
    judge() const;
    reset();
    update();
};
