#pragma once

namespace al { 

class AudioVolumeFader
{
public:
    AudioVolumeFader(bool);
    update();
    setVolume(float, int);
};

} 
