#pragma once

namespace al { 

class EffectLightDirector
{
public:
    EffectLightDirector();
    tryCreateLight();
    removeLight(al::EffectLight*);
    update(al::PrePassLightKeeper*);
};

} 
