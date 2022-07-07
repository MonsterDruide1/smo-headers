#pragma once

namespace al { 

class BgmPlayObj
{
public:
    BgmPlayObj(char const*, bool);
    init(al::ActorInitInfo const&);
    createShape(al::BgmDataBase*);
    init(al::ActorInitInfo const&, char const*);
    init(al::ActorInitInfo const&, char const*, char const*, char const*);
    initAfterPlacement();
    appear();
    kill();
    stopBgm(int);
    movement();
    isEnableCalcSpeakerParam() const;
    calc3DParams(bool);
    finalize();
    getDistanceFromSourceToListener();
    isPlayable() const;
    activate(bool, bool, bool);
    startBgm(bool, bool);
    activate(al::BgmPlayObj::PlayParams const&, bool);
    deactivate(bool, int);
    exeWaitOnSwitch();
    exeWaitPlayStart();
    exePlay();
};

} 
