#pragma once

namespace nn { namespace vfx { namespace detail { namespace TextureSampler {

InitializeSamplerTable(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*);
Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::detail::ResTextureSampler*);
FinalizeSamplerTable(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*);
Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
GetSamplerFromTable(nn::vfx::detail::ResTextureSampler*);
RegisterSamplerToDescriptorPool(void*, void*);
UnregisterSamplerFromDescriptorPool(void*, void*);
g_SamplerPatternCount;
g_SamplerBuffer;

} } } } 
