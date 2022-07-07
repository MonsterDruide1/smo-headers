#pragma once

namespace al { 

class StarrySky
{
public:
    StarrySky(al::GraphicsSystemInfo*);
    makeStarColorTexture();
    ~StarrySky();
    finalize();
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawCore(al::GraphicsRenderInfo const&, al::AtmosScatter const*, int) const;
    getStarColorTex1DSampler() const;
    drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawCubemap(al::GraphicsRenderInfo const&) const;
    update(al::GraphicsUpdateInfo const&);
    getName() const;
};

} 
