#pragma once

class PlayerJudgeForceSlopeSlide
{
public:
    PlayerJudgeForceSlopeSlide(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
