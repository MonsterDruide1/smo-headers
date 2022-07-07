#pragma once

class ShibakenStateWait
{
public:
    ShibakenStateWait(char const*, Shibaken*, bool);
    appear();
    isPlayingWait() const;
    exeWait();
    exeBow();
    exeShake();
    exeJump();
    ~ShibakenStateWait();
};
