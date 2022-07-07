#pragma once

namespace al { 

class EffectObjInterval
{
public:
    EffectObjInterval(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appear();
    kill();
    getBaseMtx() const;
};

} 
