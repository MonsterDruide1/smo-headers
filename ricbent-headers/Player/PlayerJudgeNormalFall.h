#pragma once

class PlayerJudgeNormalFall
{
public:
    PlayerJudgeNormalFall(al::LiveActor const*, int, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
