#pragma once

class ActorDimensionKeeper
{
public:
    ActorDimensionKeeper(al::LiveActor const*);
    validate();
    invalidate();
    forceChange2DKeep();
    forceEndChange2DKeep();
    update();
};
