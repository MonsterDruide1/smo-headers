#pragma once

class Bubble2D
{
public:
    Bubble2D(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeInitDelay();
    exeWait();
    exeMove();
    exeReturn();
    getActorDimensionKeeper() const;
};
