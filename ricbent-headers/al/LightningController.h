#pragma once

namespace al { 

class LightningController
{
public:
    LightningController(char const*);
    init(al::ActorInitInfo const&);
    control();
    setLightPower(float);
    exeWait();
    exeLightning();
};

} 
