#pragma once

class PlayerJudgePreInputCapThrow
{
public:
    PlayerJudgePreInputCapThrow(PlayerConst const*, PlayerInput const*, PlayerCarryKeeper const*, HackCap const*);
    recordJudgeAndReset();
    recordSeparateJudge();
    recordCooperateAndReset();
    reset();
    update();
    judge() const;
};
