#pragma once

class PlayerJudgeSafetyPointRecovery
{
public:
    PlayerJudgeSafetyPointRecovery(IJudge*, PlayerStateAbyss const*);
    judge() const;
    reset();
    update();
};
