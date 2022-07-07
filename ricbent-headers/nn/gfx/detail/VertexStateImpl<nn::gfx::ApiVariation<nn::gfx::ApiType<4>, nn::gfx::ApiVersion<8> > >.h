#pragma once

namespace nn { namespace gfx { namespace detail { namespace VertexStateImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetRequiredMemorySize(nn::gfx::VertexStateInfo const&);
VertexStateImpl();
~VertexStateImpl();
SetMemory(void*, unsigned long);
GetMemory();
GetMemory() const;
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::VertexStateInfo const&, nn::gfx::detail::ShaderImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
