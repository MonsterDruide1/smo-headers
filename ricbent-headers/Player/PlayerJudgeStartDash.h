#pragma once

class PlayerJudgeStartDash
{
public:
    PlayerJudgeStartDash(PlayerInput const*);
    reset();
    update();
    judge() const;
};
