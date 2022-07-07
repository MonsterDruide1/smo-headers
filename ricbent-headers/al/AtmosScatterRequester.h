#pragma once

namespace al { 

class AtmosScatterRequester
{
public:
    AtmosScatterRequester(char const*);
    init(al::ActorInitInfo const&);
    switchOnStart();
    switchOffStart();
    switchWaitStart();
    exeWait();
    exeOn();
    exeOnWait();
    exeOff();
    exeOffWait();
};

} 
