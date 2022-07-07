#pragma once

class KuriboGenerator2D
{
public:
    KuriboGenerator2D(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeMove();
    getActorDimensionKeeper() const;
};
