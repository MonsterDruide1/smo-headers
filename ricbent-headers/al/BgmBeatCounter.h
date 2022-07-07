#pragma once

namespace al { 

class BgmBeatCounter
{
public:
    BgmBeatCounter(al::IUseAudioKeeper*, float);
    update();
    isTriggerBeat(int, int) const;
};

} 
