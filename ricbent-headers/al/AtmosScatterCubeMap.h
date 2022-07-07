#pragma once

namespace al { 

class AtmosScatterCubeMap
{
public:
    AtmosScatterCubeMap(al::GraphicsSystemInfo*);
    ~AtmosScatterCubeMap();
    preDrawGraphics();
    exeInitial();
    exeDrawFace();
    exeDrawRoughnessGGX();
    exeDrawRoughness();
    exeFlipCubeMap();
    renderToCubeMap(agl::DrawContext*) const;
    getIrradianceSampler() const;
    getCubeMapMirrorSampler() const;
    activateCubeMapTexture(agl::DrawContext*, bool) const;
    activateIrradianceCubeMapTexture(agl::DrawContext*, bool) const;
};

} 
