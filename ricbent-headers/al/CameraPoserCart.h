#pragma once

namespace al { 

class CameraPoserCart
{
public:
    CameraPoserCart(char const*);
    start(al::CameraStartInfo const&);
    stop();
    restart();
    exeFollow();
    exeStop();
};

} 
