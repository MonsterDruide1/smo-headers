#pragma once

namespace al { 

class OrthoDepthTexture
{
public:
    OrthoDepthTexture(al::GraphicsSystemInfo*, al::ExecuteDirector*, sead::Vector2<float> const&);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    drawSystem(al::GraphicsRenderInfo const*) const;
    setCameraXZ(float, float);
    setCameraHeightFar(float, float);
    tryCalcDepth(float*, sead::Vector3<float> const&) const;
    calcGpu(al::GraphicsCalcGpuInfo const&);
    getName() const;
    ~OrthoDepthTexture();
};

} 
