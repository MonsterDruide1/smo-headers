#pragma once

class PlayerJudgeStartRise
{
public:
    PlayerJudgeStartRise(al::LiveActor const*, PlayerAreaChecker const*, IPlayerModelChanger const*);
    judge() const;
    reset();
    update();
};
