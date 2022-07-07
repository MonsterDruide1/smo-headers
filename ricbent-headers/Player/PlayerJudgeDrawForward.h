#pragma once

class PlayerJudgeDrawForward
{
public:
    PlayerJudgeDrawForward(al::LiveActor const*, PlayerJudgeDeadWipeStart const*);
    judge() const;
    reset();
    update();
};
