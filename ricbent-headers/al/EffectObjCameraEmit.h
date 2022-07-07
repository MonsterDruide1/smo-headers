#pragma once

namespace al { 

class EffectObjCameraEmit
{
public:
    EffectObjCameraEmit(char const*);
    init(al::ActorInitInfo const&);
    switchOnKill();
    initAfterPlacement();
    control();
    tryEmitStart();
    appear();
    kill();
    getBaseMtx() const;
};

} 
