#pragma once

namespace nn { namespace gfx { namespace detail { namespace DescriptorPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > {

CalculateDescriptorPoolSize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::DescriptorPoolInfo const&);
GetDescriptorPoolAlignment(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::DescriptorPoolInfo const&);
GetDescriptorSlotIncrementSize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::DescriptorPoolType);
DescriptorPoolImpl();
~DescriptorPoolImpl();
Initialize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::DescriptorPoolInfo const&, nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
Finalize(nn::gfx::detail::DeviceImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
BeginUpdate();
EndUpdate();
SetBufferView(int, nn::gfx::GpuAddress const&, unsigned long);
SetSampler(int, nn::gfx::detail::SamplerImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
SetTextureView(int, nn::gfx::detail::TextureViewImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
SetImage(int, nn::gfx::detail::TextureViewImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
SetBufferTextureView(int, nn::gfx::detail::BufferTextureViewImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
SetBufferImage(int, nn::gfx::detail::BufferTextureViewImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const*);
GetDescriptorSlot(nn::gfx::DescriptorSlot*, int) const;
GetDescriptorSlotIndex(nn::gfx::DescriptorSlot const&) const;

} } } } 
