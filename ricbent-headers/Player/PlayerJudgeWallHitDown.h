#pragma once

class PlayerJudgeWallHitDown
{
public:
    PlayerJudgeWallHitDown(al::LiveActor const*, IUsePlayerCollision const*, PlayerConst const*, PlayerTrigger const*);
    judge() const;
    reset();
    update();
};
