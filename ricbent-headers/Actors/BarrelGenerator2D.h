#pragma once

class BarrelGenerator2D
{
public:
    BarrelGenerator2D(char const*);
    init(al::ActorInitInfo const&);
    exeDelay();
    exeWait();
    exeMove();
    getActorDimensionKeeper() const;
};
