#pragma once

namespace al { 

class SubActorKeeper
{
public:
    tryCreate(al::LiveActor*, char const*, int);
    create(al::LiveActor*);
    registerSubActor(al::LiveActor*, unsigned int);
    SubActorKeeper(al::LiveActor*);
    init(al::ActorInitInfo const&, char const*, int);
};

} 
