#pragma once

namespace nn { namespace g3d { namespace ResMaterial {

BindTexture(nn::g3d::TextureRef (*)(char const*, void*), void*);
ForceBindTexture(nn::g3d::TextureRef const&, char const*);
ReleaseTexture();
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Cleanup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Reset();
Reset(unsigned int);
FindRenderInfo(char const*) const;

} } } 
