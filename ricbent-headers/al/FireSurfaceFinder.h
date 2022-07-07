#pragma once

namespace al { 

class FireSurfaceFinder
{
public:
    FireSurfaceFinder(al::LiveActor const*);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};

} 
