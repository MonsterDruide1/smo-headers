#pragma once

class PlayerJudgeInvalidateInputFall
{
public:
    PlayerJudgeInvalidateInputFall(al::LiveActor const*, PlayerAreaChecker const*, IUsePlayerCollision const*);
    reset();
    update();
    judge() const;
};
