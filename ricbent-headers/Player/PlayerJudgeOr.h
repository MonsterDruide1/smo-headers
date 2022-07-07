#pragma once

class PlayerJudgeOr
{
public:
    PlayerJudgeOr(int);
    addJudge(IJudge*);
    judge() const;
    reset();
    update();
};
