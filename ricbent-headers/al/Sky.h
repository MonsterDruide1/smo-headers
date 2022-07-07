#pragma once

namespace al { 

class Sky
{
public:
    Sky(char const*);
    init(al::ActorInitInfo const&);
    initFromPreset(al::ActorInitInfo const&);
    control();
};

} 
