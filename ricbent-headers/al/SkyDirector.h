#pragma once

namespace al { 

class SkyDirector
{
public:
    SkyDirector();
    initProjectResource();
    init(al::ActorInitInfo const&);
    endInit();
    clearRequest();
    update();
    getCurrentParam() const;
    tryGetSky(char const*) const;
    tryRegistAndCreateSky(char const*);
    requestParam(int, int, al::SkyParam const&);
    getCurrentStarIntensity() const;
    tryGetCurrentSky() const;
};

} 
