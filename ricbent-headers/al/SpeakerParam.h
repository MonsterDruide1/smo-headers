#pragma once

namespace al { 

class SpeakerParam
{
public:
    SpeakerParam();
    setVolume(int, float, int);
    reset();
    distributeCenterVolToLR(float, int);
};

} 
