#pragma once

class CoinCollectEmpty
{
public:
    CoinCollectEmpty(char const*, char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    endClipped();
    appear();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    rotate();
    exeGot();
    exeCountUp();
};
