#pragma once

namespace nn { namespace gfx { namespace detail { namespace ShaderImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

GetBinaryCodeAlignment(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
ShaderImpl();
~ShaderImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::ShaderInfo const&);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
GetInterfaceSlot(nn::gfx::ShaderStage, nn::gfx::ShaderInterfaceType, char const*) const;
GetWorkGroupSize(int*, int*, int*) const;

} } } } 
