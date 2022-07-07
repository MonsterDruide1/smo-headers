#pragma once

namespace nn { namespace gfx { namespace detail { namespace BlendStateImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetRequiredMemorySize(nn::gfx::BlendStateInfo const&);
BlendStateImpl();
~BlendStateImpl();
SetMemory(void*, unsigned long);
GetMemory();
GetMemory() const;
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::BlendStateInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
