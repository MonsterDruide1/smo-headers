#pragma once

namespace al { 

class CameraPoserFixLook
{
public:
    CameraPoserFixLook();
    init();
    start(al::CameraStartInfo const&);
};

} 
