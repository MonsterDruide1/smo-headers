#pragma once

namespace al { 

class DemoGraphicsController
{
public:
    DemoGraphicsController(al::GraphicsPresetDirector*, al::ShaderCubeMapKeeper*);
    initStageResource(al::Resource const*, char const*, char const*);
    endInit();
    update();
};

} 
