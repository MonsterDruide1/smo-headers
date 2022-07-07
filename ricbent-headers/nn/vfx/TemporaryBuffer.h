#pragma once

namespace nn { namespace vfx { namespace TemporaryBuffer {

Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned long, nn::vfx::BufferingMode);
Invalidate();
Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
Swap();
Map(nn::gfx::GpuAddress*, unsigned long);
Unmap();

} } } 
