#pragma once

class SphinxRideMiniGameObjGenerator
{
public:
    SphinxRideMiniGameObjGenerator(char const*, float, float);
    init(al::ActorInitInfo const&);
    makeActorDeadAllActor();
    exeWait();
    appearAllActor();
};
