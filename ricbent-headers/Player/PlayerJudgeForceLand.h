#pragma once

class PlayerJudgeForceLand
{
public:
    PlayerJudgeForceLand(IJudge const*, PlayerTrigger const*);
    judge() const;
    reset();
    update();
};
