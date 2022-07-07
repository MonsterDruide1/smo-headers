#pragma once

class CoinCollectHintState
{
public:
    CoinCollectHintState(al::LiveActor*);
    init();
    appear();
    kill();
    deleteHintEffect();
    appearHintEffect();
    exeWait();
    ~CoinCollectHintState();
};
