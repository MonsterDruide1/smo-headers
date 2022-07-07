#pragma once

class PlayerJudgeWallHitDownRolling
{
public:
    PlayerJudgeWallHitDownRolling(al::LiveActor const*, IUsePlayerCollision const*, PlayerConst const*, PlayerTrigger const*);
    judge() const;
    reset();
    update();
};
