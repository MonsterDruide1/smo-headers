#pragma once

class PlayerJudgeDead
{
public:
    PlayerJudgeDead(al::LiveActor const*);
    judge() const;
    reset();
    update();
};
