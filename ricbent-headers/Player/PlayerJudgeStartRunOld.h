#pragma once

class PlayerJudgeStartRunOld
{
public:
    PlayerJudgeStartRunOld(al::LiveActor const*, IUsePlayerCollision const*, PlayerInput const*);
    reset();
    update();
    judge() const;
};
