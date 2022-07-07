#pragma once

class YoshiJudgeStartJumpFlap
{
public:
    YoshiJudgeStartJumpFlap(IUsePlayerHack**, al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
