#pragma once

class PlayerJudgeWallHitDownForceRun
{
public:
    PlayerJudgeWallHitDownForceRun(al::LiveActor const*, IUsePlayerCollision const*, PlayerConst const*, PlayerCounterForceRun const*, PlayerTrigger const*);
    judge() const;
    reset();
    update();
};
