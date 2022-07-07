#pragma once

class BlockEmpty
{
public:
    BlockEmpty(char const*, char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setShadowDropLength(float);
    startReaction();
    startReactionTransparent();
    exeWait();
    exeReaction();
    exeReactionTransparent();
};
