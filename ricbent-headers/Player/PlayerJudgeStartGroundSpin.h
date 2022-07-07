#pragma once

class PlayerJudgeStartGroundSpin
{
public:
    PlayerJudgeStartGroundSpin(al::LiveActor const*, IUsePlayerCollision const*, PlayerInput const*);
    judge() const;
    reset();
    update();
};
