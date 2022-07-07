#pragma once

class Bomb
{
public:
    Bomb(char const*);
    init(al::ActorInitInfo const&);
    appearWithMsg(al::LiveActor const*, al::SensorMsg const*);
    exeWait();
    exeTrampled();
    exeWhipHold();
    exeThrow();
    exeExplosion();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
