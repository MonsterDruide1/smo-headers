#pragma once

namespace al { 

class ViewVastGridCullingArray
{
public:
    ViewVastGridCullingArray(int);
    setCullingViewProj(al::ViewInfo const&, sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*);
    setStereoPair(int, int);
};

} 
