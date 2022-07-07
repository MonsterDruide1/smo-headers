#pragma once

class PlayerJudgeAbyssDeadStatus
{
public:
    PlayerJudgeAbyssDeadStatus(PlayerJudgeSameNerve const*, PlayerRecoverySafetyPoint const*);
    judge() const;
    reset();
    update();
};
