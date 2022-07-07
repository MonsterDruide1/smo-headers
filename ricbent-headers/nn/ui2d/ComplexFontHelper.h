#pragma once

namespace nn { namespace ui2d { namespace ComplexFontHelper {

SetupTextureCacheArg(nn::font::TextureCache::InitializeArg*, void* (*)(unsigned long*, char const*, unsigned int, void*), void*, void const*);
BuildTextureCacheArg<nn::font::ResMultiScalableFontOld, nn::font::ResScalableFontDescriptionOld>(void const*, int*, nn::font::TextureCache::InitializeArg*, void* (*)(unsigned long*, char const*, unsigned int, void*), void*);
BuildTextureCacheArg<nn::font::ResMultiScalableFont, nn::font::ResScalableFontDescription>(void const*, int*, nn::font::TextureCache::InitializeArg*, void* (*)(unsigned long*, char const*, unsigned int, void*), void*);
InitializeComplexFontTree(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*, nn::font::TextureCache*, int, void* (*)(unsigned long*, char const*, unsigned int, void*), void*, void const*);
FinalizeComplexFontTree(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::Font*, void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
DestroyFontTree(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::Font*, void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
CheckExt(char const*, char const*);

} } } 
