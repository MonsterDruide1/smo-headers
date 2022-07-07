#pragma once

namespace nn { namespace g3d { namespace ResFile {

IsValid(void const*);
Relocate();
Unrelocate();
ResCast(void*);
BindTexture(nn::g3d::TextureRef (*)(char const*, void*), void*);
ReleaseTexture();
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
Cleanup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Reset();
FindSceneAnim(char const*) const;
Signature;

} } } 
