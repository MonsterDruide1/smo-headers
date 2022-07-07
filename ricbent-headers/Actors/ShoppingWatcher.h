#pragma once

class ShoppingWatcher
{
public:
    ShoppingWatcher(char const*, char const*, Doshi*);
    init(al::ActorInitInfo const&);
    isAfterBuyWear() const;
    isAfterBuyShine() const;
    isAfterBuyLifeUpItem() const;
    initAfterPlacement();
    tryStartCameraAfterBuyItem();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    exeWait();
    exeScare();
    exeShop();
    exeDemoWear();
    tryEndCameraAfterBuyItem();
    exeDemoGetShine();
    exeDemoGetLifeUpItem();
    exeEnd();
    exeReaction();
    exeTurnToInitFront();
    exeTimeBalloonOrRace();
    isAliveNpcInShop() const;
    isWait() const;
    isShop() const;
    endShop();
    appearNpcInShop();
    killNpcInShop();
    getDoshiPos();
    calcDoshiFrontDir(sead::Vector3<float>*);
    isInsideTerritoryPlayer() const;
    requestStartDoshiCamera();
    requestEndDoshiCamera();
};
