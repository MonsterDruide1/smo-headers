#pragma once

class PlayerJudgeFailureCameraSubjective
{
public:
    PlayerJudgeFailureCameraSubjective(PlayerInput const*, IJudge const*);
    judge() const;
    reset();
    update();
};
