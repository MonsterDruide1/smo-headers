#pragma once

namespace al { 

class OceanWaveTexture
{
public:
    setInitTime(float);
    setTimeScale(float);
    setChoppiness(float);
    setHeightScale(float);
    setTexelLenScale(float);
    setWindDegree(float);
    setWindStrength(float);
    setWindDepend(float);
    setOceanSize(float);
    setAmplitude(float);
    setCoefSmallL(float);
    getDisplacementTextureData() const;
    OceanWaveTexture(al::GraphicsSystemInfo*, unsigned int);
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    calcWindDir(sead::Vector2<float>*) const;
    calcTexelLenX2() const;
    drawSystem(al::GraphicsRenderInfo const*) const;
    drawTexture(agl::DrawContext*) const;
    drawInitSpectrum(agl::DrawContext*, agl::RenderBuffer*) const;
    drawUpdateSpectrum(agl::DrawContext*, agl::RenderBuffer*, agl::TextureData*) const;
    drawDispToNrmFold(agl::DrawContext*, agl::RenderBuffer*) const;
    getName() const;
    ~OceanWaveTexture();
};

} 
