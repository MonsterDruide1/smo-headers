#pragma once

namespace al { 

class SwitchDitherMapParts
{
public:
    SwitchDitherMapParts(char const*);
    init(al::ActorInitInfo const&);
    ditherOn();
    ditherOff();
    exeWait();
};

} 
