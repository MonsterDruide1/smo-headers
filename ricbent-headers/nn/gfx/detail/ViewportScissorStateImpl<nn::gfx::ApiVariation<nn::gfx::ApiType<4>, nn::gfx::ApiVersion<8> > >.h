#pragma once

namespace nn { namespace gfx { namespace detail { namespace ViewportScissorStateImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetRequiredMemorySize(nn::gfx::ViewportScissorStateInfo const&);
ViewportScissorStateImpl();
~ViewportScissorStateImpl();
SetMemory(void*, unsigned long);
GetMemory();
GetMemory() const;
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::ViewportScissorStateInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
