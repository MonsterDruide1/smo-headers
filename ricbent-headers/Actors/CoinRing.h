#pragma once

class CoinRing
{
public:
    CoinRing(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    exeAppear();
    exeWait();
    exeMove();
    exeWaitKeyMove();
    exeDisappear();
};
