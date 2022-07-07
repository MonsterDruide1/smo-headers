#pragma once

namespace al { 

class FluidSimulateWave
{
public:
    FluidSimulateWave(al::GraphicsSystemInfo*, int, float, int, bool, bool, char const*);
    beginStore();
    initGaussian(int);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    endStore();
    drawSystem(al::GraphicsRenderInfo const*) const;
    drawHeight(agl::DrawContext*, agl::RenderBuffer*) const;
    drawNrm(agl::DrawContext*, agl::RenderBuffer*) const;
    drawPoint(al::GraphicsRenderInfo const*, agl::RenderBuffer*) const;
    storePoint(sead::Vector2<int> const&, float, float, bool);
    storePointWorld(sead::Vector3<float> const&, float, float, bool);
    updateCenterPos(sead::Vector3<float> const&);
    calcUboParam(sead::Vector4<float>*) const;
    tryCalcHeight(float*, sead::Vector3<float> const&) const;
    getDisplacementMapTextureData() const;
    getDisplacementMapTextureData(int) const;
    isDoubleBufDisp() const;
    getName() const;
    ~FluidSimulateWave();
};

} 
