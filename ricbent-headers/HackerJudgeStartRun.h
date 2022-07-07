#pragma once

class HackerJudgeStartRun
{
public:
    HackerJudgeStartRun(al::LiveActor const*, IUsePlayerHack**);
    judge() const;
    reset();
    update();
};
