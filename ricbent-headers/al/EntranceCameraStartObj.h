#pragma once

namespace al { 

class EntranceCameraStartObj
{
public:
    EntranceCameraStartObj(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
};

} 
