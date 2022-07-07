#pragma once

namespace al { 

class SePlayObj
{
public:
    SePlayObj(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    makeActorAlive();
    kill();
    movement();
    waitSwitch();
    startPlaying();
    isPlaying();
    exeWaitSwitch();
    exePlay();
    tryPlayStart();
    exePlayRepeat();
};

} 
