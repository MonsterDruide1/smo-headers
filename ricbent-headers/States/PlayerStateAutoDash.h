#pragma once

class PlayerStateAutoDash
{
public:
    PlayerStateAutoDash(al::LiveActor*);
    appear();
    exeRun();
    exeDash();
    ~PlayerStateAutoDash();
};
