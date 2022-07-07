#pragma once

namespace agl { 

class TextureImage
{
public:
    TextureImage(unsigned int, unsigned int);
    applyTextureData(agl::TextureData const&, unsigned int, unsigned int);
    activate(agl::DrawContext*, agl::ShaderLocation const&) const;
    invalidateGPUCache(agl::DrawContext*) const;
    updateRegs(unsigned int) const;
    initRegs_(unsigned int) const;
};

} 
