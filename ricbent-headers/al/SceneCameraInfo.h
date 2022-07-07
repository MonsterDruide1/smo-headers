#pragma once

namespace al { 

class SceneCameraInfo
{
public:
    SceneCameraInfo(int);
    initViewInfo(al::CameraViewInfo*);
    getViewName(int) const;
};

} 
