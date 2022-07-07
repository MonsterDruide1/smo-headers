#pragma once

namespace al { 

class CubeMapDirector
{
public:
    CubeMapDirector(al::GraphicsSystemInfo*);
    ~CubeMapDirector();
    initStageResource(al::Resource const*, char const*, char const*, al::AreaObjDirector const*, al::ExecuteDirector const*, al::SceneCameraInfo*, al::EffectSystem*, al::SkyDirector*);
    preDrawGraphics();
    endInit();
    initByCapturePoint(al::PlayerHolder*);
    initByAtmosScatter();
    activateCubeMapTexture(agl::DrawContext*, int, bool) const;
    isDrawCapturePointCubeMap() const;
    renderToCubeMap(agl::DrawContext*) const;
    getIrradianceSampler() const;
    getCubeMapMirrorSampler() const;
};

} 
