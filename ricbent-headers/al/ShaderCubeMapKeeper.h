#pragma once

namespace al { 

class ShaderCubeMapKeeper
{
public:
    ShaderCubeMapKeeper(al::GraphicsSystemInfo*, al::PlayerHolder*);
    ~ShaderCubeMapKeeper();
    initProjectResource();
    initStageResource(al::Resource const*, char const*, char const*, al::AreaObjDirector const*, al::ExecuteDirector const*, al::SceneCameraInfo*, al::EffectSystem*, al::SkyDirector*);
    makeTextureByInfo(al::ShaderCubeMapKeeper::TexResInfo const&, char const*, char const*, char const*);
    endInit();
    findCubeMapInfoByName(char const*, char const*) const;
    tryFindCubeMapUnitInfoByName(char const*) const;
    activateCubeMapTexture(agl::DrawContext*, int) const;
    findCubeMapInfo(int) const;
    activateCubeMapSkyTexture(agl::DrawContext*) const;
    activateCubeMapTexture(agl::DrawContext*, char const*) const;
    isDrawCubeMap() const;
    clearRequest();
    update();
    tryFindCubeMapInfoByName(char const*, char const*) const;
    findCubeMapUnitInfoByName(char const*) const;
    requestCubeMap(int, char const*, char const*);
    findCubeMapIndexByName(char const*, char const*) const;
    calcCubeMapUnitInfoNum() const;
    findCubeMapUnitInfoIndexByName(char const*) const;
    findCubeMapUnitInfo(int) const;
    registerPresetCubeMapRelationInfo(al::GraphicsPreset*, char const*, char const*);
    getIrradiance() const;
    getRoughnessCubeMap(int) const;
};

} 
