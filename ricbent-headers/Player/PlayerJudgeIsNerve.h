#pragma once

class PlayerJudgeIsNerve
{
public:
    PlayerJudgeIsNerve(al::IUseNerve const*, al::Nerve const*);
    judge() const;
    reset();
    update();
};
