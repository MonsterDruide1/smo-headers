#pragma once

namespace al { 

class PtclSystem
{
public:
    PtclSystem(sead::ptcl::Config const&, al::EffectSystem*);
    getNumResource() const;
    entryResourceEnd();
    getEffectEnvParam();
    ~PtclSystem();
};

} 
