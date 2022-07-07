#pragma once

namespace al { 

class MirrorActorBase
{
public:
    MirrorActorBase(char const*);
    initByArg(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
};

} 
