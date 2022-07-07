#pragma once

namespace nn { namespace gfx { namespace detail { namespace DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

DeviceImpl();
~DeviceImpl();
Initialize(nn::gfx::DeviceInfo const&);
Finalize();

} } } } 
