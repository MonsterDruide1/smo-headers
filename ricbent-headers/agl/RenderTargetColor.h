#pragma once

namespace agl { 

class RenderTargetColor
{
public:
    RenderTargetColor();
    RenderTargetColor(agl::TextureData const&, unsigned int, unsigned int);
    onApplyTextureData_();
    initRegs_(unsigned int) const;
    invalidateGPUCache(agl::DrawContext*) const;
    invalidateCPUCache() const;
    expandAuxBuffer(agl::DrawContext*) const;
};

} 
