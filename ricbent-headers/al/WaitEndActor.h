#pragma once

namespace al { 

class WaitEndActor
{
public:
    WaitEndActor(char const*);
    makeActorAlive();
    end(char const*);
    exeWait();
    exeEnd();
};

} 
