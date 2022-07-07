#pragma once

namespace nn { namespace gfx { namespace detail { namespace RasterizerStateImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

RasterizerStateImpl();
~RasterizerStateImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::RasterizerStateInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);

} } } } 
