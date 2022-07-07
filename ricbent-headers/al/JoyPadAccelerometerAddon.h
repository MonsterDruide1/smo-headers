#pragma once

namespace al { 

class JoyPadAccelerometerAddon
{
public:
    JoyPadAccelerometerAddon(sead::Controller*, int);
    calc();
    ~JoyPadAccelerometerAddon();
};

} 
