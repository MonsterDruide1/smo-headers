#pragma once

namespace nn { namespace vfx { namespace detail { 

class ComputeShaderManager
{
public:
    ComputeShaderManager();
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*, nn::gfx::ResShaderContainer*);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*);
};

} } } 
