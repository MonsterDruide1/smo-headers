#pragma once

namespace nn { namespace vfx { 

class EmitterResource
{
public:
    EmitterResource();
    InitializeRenderState(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    FinalizeRenderState(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    InitializeConstantBuffer(nn::vfx::detail::ConstantBuffer*);
    InitializeVertexState(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    FinalizeVertexState(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Setup(nn::vfx::Resource*);
    UpdateShaderResource(nn::vfx::detail::ShaderManager*, nn::vfx::detail::ComputeShaderManager*);
    UpdateParams();
    ResolveBinaryData(nn::vfx::detail::BinaryData*);
};

} } 
