#pragma once

class YoshiJudgeFallFromGround
{
public:
    YoshiJudgeFallFromGround(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
