#pragma once

class FrogStateWaitJump
{
public:
    FrogStateWaitJump(Frog*);
    appear();
    kill();
    endFall();
    exeWait();
    exeTurn();
    exeJumpStart();
    exeJump();
    exeFall();
    exeLand();
    ~FrogStateWaitJump();
};
