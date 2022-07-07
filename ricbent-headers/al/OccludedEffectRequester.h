#pragma once

namespace al { 

class OccludedEffectRequester
{
public:
    OccludedEffectRequester(char const*);
    init(al::ActorInitInfo const&);
    switchKill();
    control();
    exeAppear();
    exeWait();
    exeKill();
};

} 
