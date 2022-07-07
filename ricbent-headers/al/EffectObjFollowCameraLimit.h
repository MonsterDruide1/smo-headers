#pragma once

namespace al { 

class EffectObjFollowCameraLimit
{
public:
    EffectObjFollowCameraLimit(char const*);
    init(al::ActorInitInfo const&);
    startAppear();
    startDisappear();
    control();
    kill();
    appear();
    exeWait();
    exeDisappear();
};

} 
