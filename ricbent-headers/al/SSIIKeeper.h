#pragma once

namespace al { 

class SSIIKeeper
{
public:
    SSIIKeeper(int, al::GraphicsSystemInfo*);
    movement();
    updateViewGPU(int, sead::Camera const*, al::Projection const*);
    ~SSIIKeeper();
};

} 
