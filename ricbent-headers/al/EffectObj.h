#pragma once

namespace al { 

class EffectObj
{
public:
    getBaseMtx() const;
    EffectObj(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appear();
    kill();
    tryEmitStart();
};

} 
