#pragma once

namespace al { 

class CapAcceleratorKeyMoveMapParts
{
public:
    CapAcceleratorKeyMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    control();
    exeWait();
    exeMove();
    exeStop();
};

} 
