#pragma once

class PlayerJudgeStartJumpHakoniwa
{
public:
    PlayerJudgeStartJumpHakoniwa(PlayerInput const*, IJudge*);
    update();
    reset();
    judge() const;
};
