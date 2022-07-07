#pragma once

namespace al { 

class NoiseTextureKeeper
{
public:
    NoiseTextureKeeper(al::GraphicsSystemInfo*, al::ShaderHolder*);
    ~NoiseTextureKeeper();
    finalize();
    endInit();
    declareUsingGemNoiseCubemapTexture();
    declareUsingPerlinFbmNoise2DTexture();
    declareUsingWorleyNoise2DTexture();
    declareUsingFrostNoise2DTexture();
    declareUsingCurlNoise2DTexture();
    declareUsingPerlinNoise2DTexture();
    declareUsingFrostNoise3DTexture();
    declareUsingWorleyNoise3DTexture();
    declareUsingWorleyThinNoise3DTexture();
    declareUsingWorleyThinAnimNoise3DTexture();
    declareUsingCloudLikeFbm3DNoiseTexture();
    declareUsingOceanFoam3DNoiseTexture();
    declareUsingSnowCovered3DNoiseTexture();
    declareUsingCurlNoise3DTexture();
    declareUsingRidgeNoise3DTexture();
    declareUsingCaustics3DTexture();
    declareUsingPerlinNoise3DTexture();
    declareUsingPerlinFbmNoise3DTexture();
    declareUsingGemNoise3DTexture();
    declareUsingSimpleNoiseTexture();
    declareUsingCloudNoise3DTexture();
    getCloudVolume3DSampler() const;
    activateGemNoiseCubemapTexture(agl::DrawContext*) const;
    activateTexture2D(agl::DrawContext*, int) const;
    getTexture2DSampler(int) const;
    getTexture2D(int) const;
    getTexture3D(int) const;
    getTexture3DSampler(int) const;
    activateTexture3D(agl::DrawContext*, int) const;
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawSystem(al::GraphicsRenderInfo const*) const;
    getName() const;
};

} 
