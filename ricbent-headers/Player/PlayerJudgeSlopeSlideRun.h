#pragma once

class PlayerJudgeSlopeSlideRun
{
public:
    PlayerJudgeSlopeSlideRun(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
