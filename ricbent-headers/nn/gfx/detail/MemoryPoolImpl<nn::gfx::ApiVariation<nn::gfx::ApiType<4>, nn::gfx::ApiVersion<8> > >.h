#pragma once

namespace nn { namespace gfx { namespace detail { namespace MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetPoolMemoryAlignment(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::MemoryPoolInfo const&);
GetPoolMemorySizeGranularity(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::MemoryPoolInfo const&);
MemoryPoolImpl();
~MemoryPoolImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::MemoryPoolInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Map() const;
Unmap() const;
FlushMappedRange(long, unsigned long) const;
InvalidateMappedRange(long, unsigned long) const;

} } } } 
