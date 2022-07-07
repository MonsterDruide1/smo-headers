#pragma once

class Gunetter
{
public:
    Gunetter(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeChase();
    exeKeyMove();
    exeKeyMoveSide();
};
