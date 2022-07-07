#pragma once

namespace al { 

class HeightMapTextureBlender
{
public:
    HeightMapTextureBlender(al::GraphicsSystemInfo*, sead::Vector2<int> const&, sead::Vector2<int> const&, sead::Vector2<float> const&);
    setSource(agl::TextureSampler*, int);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawSystem(al::GraphicsRenderInfo const*) const;
    drawHeight(agl::DrawContext*, agl::RenderBuffer*) const;
    drawNrm(agl::DrawContext*, agl::RenderBuffer*) const;
    calcIsInArea(sead::Vector3<float> const&) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    getName() const;
    calcPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    getTypeName() const;
};

} 
