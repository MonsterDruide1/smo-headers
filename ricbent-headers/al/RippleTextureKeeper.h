#pragma once

namespace al { 

class RippleTextureKeeper
{
public:
    RippleTextureKeeper();
    registerRippleTex(al::FluidSimulateWave*);
    activateSampler(agl::DrawContext*, int) const;
};

} 
