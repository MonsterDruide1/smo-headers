#pragma once

class HackerStateNormalJump
{
public:
    HackerStateNormalJump(al::LiveActor*, IUsePlayerHack**, char const*, char const*);
    appear();
    exeJumpStart();
    updateJump();
    exeJump();
    ~HackerStateNormalJump();
};
