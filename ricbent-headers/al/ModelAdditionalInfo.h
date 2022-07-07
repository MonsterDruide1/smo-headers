#pragma once

namespace al { 

class ModelAdditionalInfo
{
public:
    ModelAdditionalInfo(al::GraphicsSystemInfo const*);
    activateEnvTexture(agl::DrawContext*, int, al::ModelCtrl const*, bool, bool);
    tryActivateDepthShadowMapAndUbo(agl::DrawContext*, al::DepthShadowMapInfo*);
    activateDummyDepthShadowMapAndUbo(agl::DrawContext*);
};

} 
