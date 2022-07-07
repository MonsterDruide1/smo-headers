#pragma once

class BlockTransparent
{
public:
    BlockTransparent(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setReaction(al::HitSensor*);
    exeWait();
    exeReaction();
    exeVisible();
};
