#pragma once

namespace al { 

class SeGroupVolumeKeeper
{
public:
    SeGroupVolumeKeeper(al::AudioEffectLevelDetector*);
    update(bool);
    getVolumeAtmos() const;
    getVolumeAtmosObj() const;
    getVolumePlayerVoice() const;
    getVolumePlayer() const;
};

} 
