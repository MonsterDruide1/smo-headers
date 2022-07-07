#pragma once

namespace al { 

class TextureUnit
{
public:
    TextureUnit(char const*);
    finalize();
    getWidth() const;
    getHeight() const;
    getDepth() const;
    is1D() const;
    is2D() const;
    is3D() const;
    isCubemap() const;
    invalidateGpuCacheRead(agl::DrawContext*);
    invalidateGpuCacheWrite(agl::DrawContext*);
    tryCreateTexture(al::TextureInitArg const&);
    applyCompSel(al::CompSelType const&);
};

} 
