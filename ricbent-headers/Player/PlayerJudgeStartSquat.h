#pragma once

class PlayerJudgeStartSquat
{
public:
    PlayerJudgeStartSquat(PlayerInput const*, PlayerCounterForceRun const*, PlayerCarryKeeper const*);
    judge() const;
    reset();
    update();
};
