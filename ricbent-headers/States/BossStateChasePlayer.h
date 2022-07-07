#pragma once

class BossStateChasePlayer
{
public:
    BossStateChasePlayer(char const*, al::LiveActor*, BossStateChasePlayerParam const*);
    appear();
    startStop();
    exeChase();
    exeLost();
    exeStop();
    ~BossStateChasePlayer();
};
