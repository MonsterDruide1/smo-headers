#pragma once

class PlayerJudgeSpeedCheckFall
{
public:
    PlayerJudgeSpeedCheckFall(al::LiveActor const*, IUsePlayerCollision const*, PlayerConst const*, IJudge const*);
    reset();
    update();
    judge() const;
};
