#pragma once

class PlayerJudgeWallPush
{
public:
    PlayerJudgeWallPush(al::LiveActor const*, IUsePlayerCollision const*, PlayerInput const*);
    judge() const;
    reset();
    update();
};
