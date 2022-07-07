#pragma once

class CactusMini
{
public:
    CactusMini(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeBlowDown();
    exeBreak();
};
