#pragma once

namespace agl { 

class RenderTargetDepth
{
public:
    RenderTargetDepth();
    RenderTargetDepth(agl::TextureData const&, unsigned int, unsigned int);
    onApplyTextureData_();
    initRegs_(unsigned int) const;
    invalidateGPUCache(agl::DrawContext*) const;
    invalidateCPUCache() const;
    expandHiZBuffer(agl::DrawContext*) const;
    expandHiZBufferTo(agl::DrawContext*, agl::TextureData const*, unsigned int, unsigned int) const;
    expandHiZBufferAllSlice(agl::DrawContext*) const;
    expandHiZBufferToAllSlice(agl::DrawContext*, agl::TextureData const*) const;
};

} 
