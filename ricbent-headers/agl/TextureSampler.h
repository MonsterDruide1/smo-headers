#pragma once

namespace agl { 

class TextureSampler
{
public:
    TextureSampler();
    applyTextureData(agl::TextureData const&);
    TextureSampler(agl::TextureData const&);
    activate(agl::DrawContext*, agl::ShaderLocation const&, int, bool) const;
    setReference() const;
    initRegs_(unsigned int) const;
};

} 
