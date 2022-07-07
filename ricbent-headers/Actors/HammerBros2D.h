#pragma once

class HammerBros2D
{
public:
    HammerBros2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    kill();
    exeWalk();
    exeJump();
    exeDown();
    getActorDimensionKeeper() const;
};
