#pragma once

namespace al { 

class CloudRenderKeeper
{
public:
    CloudRenderKeeper(al::GraphicsSystemInfo*);
    endInit();
    activateVtxAttrSphere(agl::DrawContext*) const;
    getCloudVolume3DSampler() const;
    ~CloudRenderKeeper();
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    registCloud(al::CloudRenderer*);
    registCloudRayMarch(al::CloudRendererRayMarch*);
    drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawSystem(al::GraphicsRenderInfo const*) const;
    getName() const;
};

} 
