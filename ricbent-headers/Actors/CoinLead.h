#pragma once

class CoinLead
{
public:
    CoinLead(char const*);
    init(al::ActorInitInfo const&);
    place(sead::Vector3<float> const&, int, float);
    exeWait();
    exeFirstCoinGotDelay();
    exeMove();
    exeWaitAllGet();
};
