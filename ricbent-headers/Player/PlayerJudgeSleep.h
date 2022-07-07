#pragma once

class PlayerJudgeSleep
{
public:
    PlayerJudgeSleep(PlayerStateWait const*);
    judge() const;
    reset();
    update();
};
