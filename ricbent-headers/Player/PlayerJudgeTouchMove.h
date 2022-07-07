#pragma once

class PlayerJudgeTouchMove
{
public:
    PlayerJudgeTouchMove(TouchTargetKeeper const*);
    reset();
    update();
    judge() const;
};
