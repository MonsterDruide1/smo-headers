#pragma once

class PlayerJudgeCapCatch
{
public:
    PlayerJudgeCapCatch(al::LiveActor const*, PlayerCounterAfterCapCatch const*);
    judge() const;
    reset();
    update();
};
