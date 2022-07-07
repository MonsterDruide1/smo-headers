#pragma once

namespace al { 

class EffectObjFollowCamera
{
public:
    EffectObjFollowCamera(char const*);
    init(al::ActorInitInfo const&);
    startAppear();
    startDisappear();
    control();
    exeWait();
    exeDisappear();
};

} 
