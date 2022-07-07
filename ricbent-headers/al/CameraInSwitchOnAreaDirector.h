#pragma once

namespace al { 

class CameraInSwitchOnAreaDirector
{
public:
    CameraInSwitchOnAreaDirector();
    init(al::SceneCameraInfo const*, al::AreaObjDirector*);
    initAfterPlacement();
    update();
    getAreaObjDirector() const;
};

} 
