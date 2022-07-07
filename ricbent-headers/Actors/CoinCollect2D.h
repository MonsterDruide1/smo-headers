#pragma once

class CoinCollect2D
{
public:
    CoinCollect2D(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endClipped();
    appearHintEffect();
    deleteHintEffect();
    reappearHintEffect();
    isEnableHint() const;
    exeWait();
    exeWaitHint();
    exeGot();
    getActorDimensionKeeper() const;
};
