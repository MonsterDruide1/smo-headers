#pragma once

namespace agl { namespace driver { 

class NVNtexture_
{
public:
    NVNtexture_();
    ~NVNtexture_();
    releaseTexture();
    NVNtexture_(agl::driver::NVNtexture_ const&);
    updateTexId_(int);
    operator=(agl::driver::NVNtexture_ const&);
    registerTexture(NVNtexture const*, NVNtextureView const*, char const*, bool);
    setDirect(NVNtexture const&, int);
    initializeGfxTexture(nn::gfx::TTexture<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
    setReference_() const;
};

} } 
