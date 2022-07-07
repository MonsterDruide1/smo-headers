#pragma once

class PlayerJudgePreInputJump
{
public:
    PlayerJudgePreInputJump(PlayerConst const*, PlayerInput const*, IJudge*);
    reset();
    update();
    judge() const;
};
