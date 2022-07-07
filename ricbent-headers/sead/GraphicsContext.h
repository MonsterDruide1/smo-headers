#pragma once

namespace sead { 

class GraphicsContext
{
public:
    GraphicsContext();
    apply(sead::DrawContext*) const;
    applyAlphaTest(sead::DrawContext*) const;
    applyDepthAndStencilTest(sead::DrawContext*) const;
    applyColorMask(sead::DrawContext*) const;
    applyBlendAndFastZ(sead::DrawContext*) const;
    applyBlendConstantColor(sead::DrawContext*) const;
    applyCullingAndPolygonModeAndPolygonOffset(sead::DrawContext*) const;
    ~GraphicsContext();
};

} 
