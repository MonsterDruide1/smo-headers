#pragma once

namespace al { 

class CameraPoserSceneInfo
{
public:
    CameraPoserSceneInfo();
    init(al::AreaObjDirector*, al::CollisionDirector*, al::AudioDirector const*);
    registerCameraRailHolder(al::CameraRailHolder*);
};

} 
