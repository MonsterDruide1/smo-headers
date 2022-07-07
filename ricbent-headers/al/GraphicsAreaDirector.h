#pragma once

namespace al { 

class GraphicsAreaDirector
{
public:
    GraphicsAreaDirector(al::GraphicsSystemInfo const*);
    init(al::AreaObjDirector*, al::SceneCameraInfo const*, al::PlayerHolder const*);
    initStageResource(al::Resource const*, char const*, char const*);
    initAfterPlacement();
    endInit();
    update();
    isExistPresetName(char const*) const;
    getAreaObjDirector() const;
};

} 
