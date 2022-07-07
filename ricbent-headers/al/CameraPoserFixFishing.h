#pragma once

namespace al { 

class CameraPoserFixFishing
{
public:
    CameraPoserFixFishing(al::LiveActor const*);
    initParam(float, sead::Vector3<float> const&, sead::Vector3<float> const&);
    start(al::CameraStartInfo const&);
};

} 
