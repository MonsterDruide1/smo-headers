#pragma once

namespace al { 

class GraphicsQualityController
{
public:
    GraphicsQualityController(al::GraphicsSystemInfo const*, al::SceneCameraInfo const*, al::AreaObjDirector*, al::PlayerHolder const*);
    initProjectResource();
    initStageResource(al::Resource const*, char const*, char const*);
    initAfterPlacement();
    endInit();
    updateQuality();
    update();
    getQualityRank() const;
    tryFindProjectGraphicsParam(char const*, int, int) const;
    exeInit();
    exeWait();
    exeReduce();
    exeRecover();
    exeStop();
    tryFindStageGraphicsParam(char const*, char const*, bool) const;
    ~GraphicsQualityController();
};

} 
