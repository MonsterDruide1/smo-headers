#pragma once

namespace al { 

class GpuPerfAreaController
{
public:
    GpuPerfAreaController(al::GraphicsSystemInfo const*);
    init(al::AreaObjDirector*, al::SceneCameraInfo const*, al::PlayerHolder const*);
    initStageResource(al::Resource const*, char const*, char const*);
    initAfterPlacement();
    update();
    getAreaObjDirector() const;
};

} 
