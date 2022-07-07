#pragma once

namespace al { 

class FogRequester
{
public:
    FogRequester(char const*);
    init(al::ActorInitInfo const&);
    appearBySwitch();
    initAfterPlacement();
    control();
};

} 
