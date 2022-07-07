#pragma once

class PlayerJudgePreInputPoleClimbSwing
{
public:
    PlayerJudgePreInputPoleClimbSwing(PlayerConst const*, PlayerInput const*);
    reset();
    update();
    judge() const;
};
