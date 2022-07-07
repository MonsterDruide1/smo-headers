#pragma once

namespace al { 

class BgmRelayPlayerSimple
{
public:
    BgmRelayPlayerSimple(al::IUseAudioKeeper const*);
    startBgm(al::BgmPlayingRequest const&) const;
    stopBgm(char const*, int) const;
    isRunningBgm(char const*) const;
};

} 
