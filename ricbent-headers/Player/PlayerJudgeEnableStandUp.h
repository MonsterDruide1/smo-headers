#pragma once

class PlayerJudgeEnableStandUp
{
public:
    PlayerJudgeEnableStandUp(IUsePlayerCollision const*, IUsePlayerCeilingCheck const*);
    judge() const;
    reset();
    update();
};
