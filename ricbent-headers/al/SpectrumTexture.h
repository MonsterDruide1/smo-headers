#pragma once

namespace al { 

class SpectrumTexture
{
public:
    SpectrumTexture(al::SpectrumTextureInfo const&, al::GraphicsSystemInfo*);
    ~SpectrumTexture();
    drawFFT(agl::DrawContext*, agl::TextureData const&, bool) const;
};

} 
