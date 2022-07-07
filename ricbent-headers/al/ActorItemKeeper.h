#pragma once

namespace al { 

class ActorItemKeeper
{
public:
    ActorItemKeeper(al::LiveActor const*, int);
    addItem(al::ActorInitInfo const&, char const*, char const*, char const*, int, bool);
    reset();
    setFactor(char const*, al::HitSensor const*);
    getAppearItemInfo(char const*) const;
};

} 
