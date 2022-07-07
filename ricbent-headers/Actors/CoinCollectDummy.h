#pragma once

class CoinCollectDummy
{
public:
    CoinCollectDummy(char const*);
    init(al::ActorInitInfo const&);
    appear();
    appearHint(sead::Vector3<float> const&);
    reappearHint();
    deleteHint();
    exeHint();
};
