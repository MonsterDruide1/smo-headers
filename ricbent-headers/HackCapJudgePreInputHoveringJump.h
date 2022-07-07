#pragma once

class HackCapJudgePreInputHoveringJump
{
public:
    HackCapJudgePreInputHoveringJump(al::LiveActor const*, IUsePlayerCollision const*, HackCap const*, PlayerInput const*);
    reset();
    update();
    judge() const;
};
