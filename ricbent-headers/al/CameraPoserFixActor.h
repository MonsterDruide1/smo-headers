#pragma once

namespace al { 

class CameraPoserFixActor
{
public:
    CameraPoserFixActor(al::LiveActor const*);
    init();
    start(al::CameraStartInfo const&);
    update();
};

} 
