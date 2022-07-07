#pragma once

namespace al { 

class ActorPrePassLightKeeper
{
public:
    isExistFile(al::Resource const*, char const*);
    ActorPrePassLightKeeper(al::LiveActor*);
    init(al::Resource const*, al::ActorInitInfo const&, char const*);
    initLightNum(int);
    initAfterPlacement();
    appear(bool);
    requestKill();
    hideModel();
    updateHideModel(bool);
    getLightBase(char const*) const;
    getLightBase(int) const;
    findUserColor(char const*) const;
};

} 
