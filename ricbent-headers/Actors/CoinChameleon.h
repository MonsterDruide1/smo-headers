#pragma once

class CoinChameleon
{
public:
    CoinChameleon(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    endClipped();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    rotate();
    exeVisible();
    exeAppear();
};
