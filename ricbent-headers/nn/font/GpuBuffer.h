#pragma once

namespace nn { namespace font { namespace GpuBuffer {

Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::font::GpuBuffer::InitializeArg const&);
Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void (*)(void*, void*), void*);
Map(int);
Unmap();

} } } 
