#pragma once

namespace al { 

class SeAreaTriggeredPlayer
{
public:
    SeAreaTriggeredPlayer(al::AudioDirector const*, al::AreaObjDirector*, al::PlayerHolder const*);
    reset();
    update();
    stopSe(al::SePlayArea*);
    startSe(al::SePlayArea*);
    getAudioKeeper() const;
    getAreaObjDirector() const;
};

} 
