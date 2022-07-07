#pragma once

namespace al { 

class ExecuteRequestKeeper
{
public:
    ExecuteRequestKeeper(int);
    executeRequestActorMovementAllOn();
    executeRequestActorMovementAllOff();
    executeRequestActorDrawAllOn();
    executeRequestActorDrawAllOff();
    request(al::LiveActor*, int);
};

} 
