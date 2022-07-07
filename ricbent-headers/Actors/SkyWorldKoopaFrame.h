#pragma once

class SkyWorldKoopaFrame
{
public:
    SkyWorldKoopaFrame(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeFall();
    exeFallNoCollider();
    exeFallEndWait();
};
