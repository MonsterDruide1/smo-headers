#pragma once

namespace nn { namespace gfx { namespace detail { namespace TessellationStateImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

TessellationStateImpl();
~TessellationStateImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TessellationStateInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
