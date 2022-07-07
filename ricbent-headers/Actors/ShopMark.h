#pragma once

class ShopMark
{
public:
    ShopMark(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    startClipped();
    endClipped();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
