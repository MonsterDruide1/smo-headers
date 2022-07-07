#pragma once

namespace al { 

class AudioRequestKeeperSyncedBgm
{
public:
    AudioRequestKeeperSyncedBgm();
    init(al::AudioDirector const*);
    update();
    requestBgm(al::BgmPlayingType, al::BgmPlayingRequest const&, int);
    getAudioKeeper() const;
};

} 
