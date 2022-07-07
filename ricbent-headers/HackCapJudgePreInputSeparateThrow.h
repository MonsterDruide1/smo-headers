#pragma once

class HackCapJudgePreInputSeparateThrow
{
public:
    HackCapJudgePreInputSeparateThrow(PlayerInput const*, PlayerSeparateCapFlag const*);
    reset();
    update();
    judge() const;
};
