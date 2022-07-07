#pragma once

class CoinStateAppearRotate
{
public:
    CoinStateAppearRotate(al::LiveActor*, al::MtxConnector*, sead::Vector3<float> const&, char const*);
    appear();
    exeRotate();
    ~CoinStateAppearRotate();
};
