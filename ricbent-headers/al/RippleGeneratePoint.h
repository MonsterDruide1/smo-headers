#pragma once

namespace al { 

class RippleGeneratePoint
{
public:
    RippleGeneratePoint(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    exeWait();
    exeGenerate();
};

} 
