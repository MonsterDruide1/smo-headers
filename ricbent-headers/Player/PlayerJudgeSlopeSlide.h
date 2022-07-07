#pragma once

class PlayerJudgeSlopeSlide
{
public:
    PlayerJudgeSlopeSlide(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*);
    reset();
    update();
    judge() const;
};
