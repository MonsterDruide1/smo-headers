#pragma once

class CoinCollectEmpty2D
{
public:
    CoinCollectEmpty2D(char const*, char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    endClipped();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeGot();
    getActorDimensionKeeper() const;
};
