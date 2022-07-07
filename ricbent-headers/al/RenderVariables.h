#pragma once

namespace al { 

class RenderVariables
{
public:
    getGraphicsSystemInfo() const;
    RenderVariables(agl::DrawContext*, al::GraphicsRenderInfo*, al::ExecuteDirector*, al::EffectSystem*, al::SimpleModelEnv const*, al::ViewInfo const&, int, int, bool, bool, bool);
    allocDepthBuffer(agl::DrawContext*);
    ~RenderVariables();
    allocColorBuffer(agl::DrawContext*, agl::lght::LightPrePass*, bool);
    bindRenderBuffer(agl::DrawContext*) const;
    drawPeripheryZOnly(agl::DrawContext*) const;
    drawReconstructPeriphery(agl::DrawContext*);
    getRenderTargetColorTex() const;
    getWidth() const;
    getHeight() const;
};

} 
