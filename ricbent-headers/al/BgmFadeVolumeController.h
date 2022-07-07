#pragma once

namespace al { 

class BgmFadeVolumeController
{
public:
    BgmFadeVolumeController(al::AcLSoundHandle*);
    update();
    getCurFadeVolume();
    fadeIn(int);
    changeFader(float, int);
    fadeOut(int);
    isFadeOutNow() const;
    isFadeInNow() const;
    isFinishedFadeOut() const;
};

} 
