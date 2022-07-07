#pragma once

class HackCapJudgePreInputSeparateJump
{
public:
    HackCapJudgePreInputSeparateJump(PlayerInput const*, PlayerSeparateCapFlag const*);
    reset();
    update();
    judge() const;
};
