#pragma once

class PlayerJudgeStatusPoleClimb
{
public:
    PlayerJudgeStatusPoleClimb(IJudge const*, PlayerStatePoleClimb const*);
    judge() const;
    reset();
    update();
};
