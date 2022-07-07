#pragma once

class CoinCollectWatcher
{
public:
    CoinCollectWatcher();
    registerCoin(bool);
    countup(al::LiveActor const*);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    getSceneObjName() const;
    ~CoinCollectWatcher();
};
