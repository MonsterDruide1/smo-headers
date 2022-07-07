#pragma once

namespace al { 

class SwitchKeyMoveMapParts
{
public:
    SwitchKeyMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    on();
    off();
    reverse();
    stop();
    exeStandBy();
    exeWait();
    exeMoveSign();
    exeMove();
    exeStopSign();
    exeStop();
};

} 
