#pragma once

namespace nn { namespace gfx { namespace detail { namespace TextureImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

CalculateMipDataAlignment(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TextureInfo const&);
CalculateMipDataSize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TextureInfo const&);
CalculateMipDataOffsets(long*, nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TextureInfo const&);
GetRowPitch(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TextureInfo const&);
TextureImpl();
~TextureImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TextureInfo const&, nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
