#pragma once

namespace al { 

class SubActorLodExecutor
{
public:
    SubActorLodExecutor(al::LiveActor*, al::ActorInitInfo const&, int);
    control();
    getLodSubActor();
};

} 
