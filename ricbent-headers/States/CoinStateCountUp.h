#pragma once

class CoinStateCountUp
{
public:
    CoinStateCountUp(al::LiveActor*);
    appear();
    exeCountUp();
    exeGot();
    ~CoinStateCountUp();
};
