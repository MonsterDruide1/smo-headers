#pragma once

class PlayerJudgeActiveCameraSubjective
{
public:
    PlayerJudgeActiveCameraSubjective(PlayerStateCameraSubjective const*);
    judge() const;
    reset();
    update();
};
