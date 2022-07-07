#pragma once

namespace al { 

class WorldAODirector
{
public:
    WorldAODirector(al::GraphicsSystemInfo const*, al::ExecuteDirector*);
    ~WorldAODirector();
    initStageResource(al::Resource const*, char const*, char const*);
    endInit();
    isEnable() const;
    tryDrawAoTexture(agl::DrawContext*);
    drawWorldAo(agl::DrawContext*, al::GraphicsSystemInfo const*, agl::sdw::ShadowPrePass*, al::GBufferArray*);
    calcGpu();
    getWorldAoType() const;
};

} 
