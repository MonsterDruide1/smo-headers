#pragma once

class HackCapJudgeHoldHoveringJump
{
public:
    HackCapJudgeHoldHoveringJump(al::LiveActor const*, PlayerColliderHakoniwa const*, HackCap const*, PlayerInput const*, PlayerConst const*);
    judge() const;
    reset();
    update();
};
