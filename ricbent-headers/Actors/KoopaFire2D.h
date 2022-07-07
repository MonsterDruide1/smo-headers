#pragma once

class KoopaFire2D
{
public:
    KoopaFire2D(char const*);
    init(al::ActorInitInfo const&);
    appear();
    exeFlyWait();
    getActorDimensionKeeper() const;
};
