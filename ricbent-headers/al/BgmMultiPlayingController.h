#pragma once

namespace al { 

class BgmMultiPlayingController
{
public:
    BgmMultiPlayingController();
    use();
    removeAllMultiBgmPlayingInfo();
    activate(al::BgmMultiPlayingController::PlayParams const&, int, bool);
    deactivate(bool, int);
    update();
    tryAddMultiBgmPlayingInfo(char const*, int, bool);
    tryRemoveMultiBgmPlayingInfo(char const*);
    enableMultiBgmPlayingInfo(char const*);
    disableMultiBgmPlayingInfo(char const*);
};

} 
