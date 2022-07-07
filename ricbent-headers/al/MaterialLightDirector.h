#pragma once

namespace al { 

class MaterialLightDirector
{
public:
    MaterialLightDirector(al::GraphicsSystemInfo*, al::ShaderHolder const*, al::MaterialCategoryKeeper const*, al::HdrEncode const*);
    finalize();
    createLightMap(char const*);
    createComposeLightMap(char const*, char const*, char const*, agl::TextureData const*, int);
    endInit();
    calcGpu(al::GraphicsCalcGpuInfo const&);
    isEnableUpdate() const;
    update(al::GraphicsUpdateInfo const&);
    drawSystem(al::GraphicsRenderInfo const*) const;
    getLightMapSampler(int, bool, char const*, char const*);
    isEnable() const;
    findOrCreateLightMap(char const*);
    getLightMap(int, bool, char const*, char const*);
    activateLightMap(agl::DrawContext*, int, bool, char const*, char const*);
    setBaseAngle(sead::Vector3<float> const&);
    setSphereMapUpdateEveryFrame(sead::Vector3<float> const&);
    getName() const;
};

} 
