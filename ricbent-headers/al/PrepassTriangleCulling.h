#pragma once

namespace al { 

class PrepassTriangleCulling
{
public:
    PrepassTriangleCulling(al::GraphicsSystemInfo*);
    finalize();
    endInit();
    applyModelEnv();
    swapCurrentData();
    drawSystem(al::GraphicsRenderInfo const*) const;
    doCommandBufferCopy(al::GraphicsCopyInfo const*) const;
    calcGpu(al::GraphicsCalcGpuInfo const&);
    tryCreateCulledIndexBuffer(al::CulledIndexCreateArg const&);
    update(al::GraphicsUpdateInfo const&);
    getName() const;
};

} 
