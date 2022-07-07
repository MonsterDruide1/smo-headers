#pragma once

class CoinCollectLayout
{
public:
    CoinCollectLayout(al::LayoutInitInfo const&);
    appearCounter(int, int, al::LiveActor const*);
    exeStart();
    updatePos();
    exeWait();
    exeEnd();
};
