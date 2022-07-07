#pragma once

class ChairStateBindJump
{
public:
    ChairStateBindJump(al::LiveActor*, IUsePlayerPuppet**);
    appear();
    exeJump();
    ~ChairStateBindJump();
};
