#pragma once

namespace al { 

class SineWave
{
public:
    SineWave(al::GraphicsSystemInfo*, sead::Vector2<int> const&, sead::Vector2<float> const&);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawSystem(al::GraphicsRenderInfo const*) const;
    drawHeight(agl::DrawContext*, agl::RenderBuffer*) const;
    drawNrm(agl::DrawContext*, agl::RenderBuffer*) const;
    setWaveParams(float, float, float, float);
    calcIsInArea(sead::Vector3<float> const&) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    getName() const;
    getTypeName() const;
};

} 
