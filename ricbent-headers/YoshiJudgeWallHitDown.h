#pragma once

class YoshiJudgeWallHitDown
{
public:
    YoshiJudgeWallHitDown(IUsePlayerHack**, al::LiveActor const*, IUsePlayerCollision const*, PlayerConst const*);
    judge() const;
    reset();
    update();
};
