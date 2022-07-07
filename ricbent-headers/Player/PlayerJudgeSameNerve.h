#pragma once

class PlayerJudgeSameNerve
{
public:
    PlayerJudgeSameNerve(al::IUseNerve const*, al::Nerve const*);
    judge() const;
    reset();
    update();
};
