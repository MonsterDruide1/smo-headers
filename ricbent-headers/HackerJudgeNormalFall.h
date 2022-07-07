#pragma once

class HackerJudgeNormalFall
{
public:
    HackerJudgeNormalFall(al::LiveActor const*, int);
    reset();
    update();
    judge() const;
};
