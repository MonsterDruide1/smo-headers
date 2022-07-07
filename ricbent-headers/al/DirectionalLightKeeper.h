#pragma once

namespace al { 

class DirectionalLightKeeper
{
public:
    DirectionalLightKeeper(al::ShaderHolder*, al::DepthShadowMapDirector*);
    ~DirectionalLightKeeper();
    endInit();
    getLightDirFrom() const;
    calcLightDirFrom();
    getCurrentParam();
    getLightColor() const;
    getCurrentParam() const;
    clearRequest();
    update();
    requestParam(int, int, al::DirLightParam const&);
    getTextureFetchPos();
    drawDirLightColor(agl::DrawContext*) const;
};

} 
