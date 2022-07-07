#pragma once

class PlayerJudgeDeadWipeStart
{
public:
    PlayerJudgeDeadWipeStart(al::LiveActor const*, PlayerConst const*);
    isDeadTypeDrawForward() const;
    isDeadEnableCoinAppear() const;
    getWipeInfo(char const**, int*) const;
    reset();
    update();
    judge() const;
};
