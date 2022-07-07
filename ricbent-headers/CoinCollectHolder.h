#pragma once

class CoinCollectHolder
{
public:
    CoinCollectHolder();
    registerCoinCollect(CoinCollect*);
    registerCoinCollect2D(CoinCollect2D*);
    registerHintObj(CoinCollectHintObj*);
    tryFindAliveCoinCollect(sead::Vector3<float> const&, bool) const;
    tryFindAliveCoinCollect(sead::Vector3<float> const&, float, float, bool) const;
    tryFindDeadButHintEnableCoinCollect() const;
    tryFindAliveCoinCollect2D(sead::Vector3<float> const&, bool) const;
    tryFindAliveCoinCollect2D(sead::Vector3<float> const&, float, float, bool) const;
    tryFindExStageHintObjTrans(sead::Vector3<float>*, char const*);
    getSceneObjName() const;
    ~CoinCollectHolder();
};
