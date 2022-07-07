#pragma once

class PlayerJudgeStartRun
{
public:
    PlayerJudgeStartRun(al::LiveActor const*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerCounterForceRun const*, IJudge const*);
    judge() const;
    reset();
    update();
};
