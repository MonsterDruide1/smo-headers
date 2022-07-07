#pragma once

class PlayerJudgeDeadSceneEnd
{
public:
    PlayerJudgeDeadSceneEnd(al::LiveActor const*, IJudge const*);
    judge() const;
    reset();
    update();
};
