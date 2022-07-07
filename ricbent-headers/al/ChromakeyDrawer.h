#pragma once

namespace al { 

class ChromakeyDrawer
{
public:
    ChromakeyDrawer(al::GraphicsSystemInfo*, al::ExecuteDirector const*, al::EffectSystem const*);
    finalize();
    drawChromakey(agl::DrawContext*, al::Projection const&, sead::Camera const&, agl::RenderBuffer const*, sead::Viewport const&, char const*, char const*, char const*) const;
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    getName() const;
};

} 
