#pragma once

class PlayerJudgePreInputHackAction
{
public:
    PlayerJudgePreInputHackAction(PlayerConst const*, PlayerInput const*);
    reset();
    update();
    judge() const;
};
