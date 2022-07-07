#pragma once

class PlayerJudgeCollideWall
{
public:
    PlayerJudgeCollideWall(al::LiveActor const*);
    reset();
    update();
    judge() const;
};
