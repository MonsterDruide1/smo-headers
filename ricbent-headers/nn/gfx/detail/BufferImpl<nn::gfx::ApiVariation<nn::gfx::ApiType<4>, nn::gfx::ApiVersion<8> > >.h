#pragma once

namespace nn { namespace gfx { namespace detail { namespace BufferImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetBufferAlignment(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::BufferInfo const&);
BufferImpl();
~BufferImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::BufferInfo const&, nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Map() const;
Unmap() const;
FlushMappedRange(long, unsigned long) const;
InvalidateMappedRange(long, unsigned long) const;
GetGpuAddress(nn::gfx::GpuAddress*) const;

} } } } 
