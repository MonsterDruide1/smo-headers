#pragma once

namespace nn { namespace font { namespace nn { namespace ui2d { namespace ComplexFontHelper {

BuildFontTree<nn::font::ResMultiScalableFontOld>(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*, void const*, int*, nn::font::TextureCache*, void* (*)(unsigned long*, char const*, unsigned int, void*), void*);
BuildFontTree<nn::font::ResMultiScalableFont>(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*, void const*, int*, nn::font::TextureCache*, void* (*)(unsigned long*, char const*, unsigned int, void*), void*);

} } } } } 
