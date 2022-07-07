#pragma once

namespace al { 

class CameraWatchPoint
{
public:
    CameraWatchPoint(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    kill();
};

} 
