#pragma once

namespace al { 

class BgmPlayEventController
{
public:
    BgmPlayEventController(al::AudioKeeper*);
    init3D(al::AreaObjDirector*);
    update();
    setChangeAreaParams(char const*, bool, bool);
    tryStartBgmByChangeArea(bool, int, bool);
    setStopAreaParams();
    tryStartBgmAfterStopAreaMove(bool, al::BgmPlayObj*, bool);
    stopBgmByStopArea(bool);
    updateWithoutEventStart();
    finalize();
    setPlayerHolder(al::PlayerHolder const*);
    tryRegistBgmPlayObj(al::BgmPlayObj*);
    reset();
    getBgmPlayNameInCurPosition(bool);
    getBgmPlayNameInTargetPosition(sead::Vector3<float> const&);
    tryStartAndStopBgmInCurPosition(bool, bool);
    isInBgmStopArea(char const*);
    checkWhetherItCanStartBgm(char const*);
    startBgm(bool);
    getAudioKeeper() const;
    getAreaObjDirector() const;
};

} 
