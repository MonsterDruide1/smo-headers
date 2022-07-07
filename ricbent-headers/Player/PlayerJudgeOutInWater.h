#pragma once

class PlayerJudgeOutInWater
{
public:
    PlayerJudgeOutInWater(al::LiveActor const*, IJudge const*, IJudge const*);
    reset();
    update();
    judge() const;
};
