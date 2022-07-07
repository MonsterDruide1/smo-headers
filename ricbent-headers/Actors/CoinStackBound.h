#pragma once

class CoinStackBound
{
public:
    CoinStackBound(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    processTimer();
    exeAlive();
    exeAppear();
    exeFall();
    exeBounce();
    exeVanish();
    exeCollected();
};
