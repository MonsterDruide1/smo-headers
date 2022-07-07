#pragma once

namespace al { 

class SwitchAreaDirector
{
public:
    tryCreate(al::AreaObjDirector*, al::PlayerHolder const*, al::CameraDirector const*, int, int);
    update();
    endInit();
    registerSwitchOnAreaGroup(al::SwitchOnAreaGroup*);
    registerSwitchKeepOnAreaGroup(al::SwitchKeepOnAreaGroup*);
    SwitchAreaDirector(al::AreaObjDirector*, al::PlayerHolder const*, al::CameraDirector const*, int, int);
    getAreaObjDirector() const;
};

} 
