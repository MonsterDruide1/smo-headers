#pragma once

namespace al { 

class MaterialCategoryKeeper
{
public:
    getCategoryNum() const;
    getCategoryName(int) const;
    MaterialCategoryKeeper(al::GraphicsSystemInfo*);
    initProjectResource();
    endInit();
    getCurrentParam() const;
    setMaterialInfo();
    clearRequest();
    update();
    requestChangeShaderCategoryId(int, char const*, char const*);
    requestParam(int, int, al::MaterialCategoryParam const&);
    getRefLightMapName(int) const;
    findRefLightMapName(char const*) const;
    getRefSphereLightMapName(int) const;
    findRefSphereLightMapName(char const*) const;
    findCategoryId(char const*) const;
    registerModelMaterialCategory(al::ModelMaterialCategory*);
    setModelProgProjMtx0(sead::Matrix44<float> const&);
    setFootPrintParameter(int, sead::Matrix44<float> const&, float, float);
    requestChangeShaderTextureType(int, char const*, char const*);
};

} 
