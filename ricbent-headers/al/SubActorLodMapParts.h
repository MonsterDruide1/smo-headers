#pragma once

namespace al { 

class SubActorLodMapParts
{
public:
    SubActorLodMapParts(char const*);
    init(al::ActorInitInfo const&);
    control();
    movement();
    calcAnim();
};

} 
