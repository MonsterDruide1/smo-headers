#pragma once

namespace nn { namespace vfx { namespace detail { 

class ConnectionStripeSystem
{
public:
    ConnectionStripeSystem(nn::vfx::System*, nn::vfx::BufferingMode);
    InitializeStripeEmitter(nn::vfx::EmitterInitializeArg&);
    EmitterPostCalculateCallback(nn::vfx::EmitterPostCalculateArg&);
    EmitterDrawCallback(nn::vfx::EmitterDrawArg&);
    FinalizeStripeEmitter(nn::vfx::EmitterFinalizeArg&);
    ~ConnectionStripeSystem();
    InitializeSystem(nn::vfx::Heap*, nn::vfx::System*, nn::vfx::BufferingMode);
    FinalizeSystem(nn::vfx::Heap*);
    AllocStripeSystemVertexBuffer(nn::vfx::Emitter*);
    AddVertexDataToBuffer(nn::vfx::detail::ConnectionStripeSystem::VertexAttribute*, int*, int*, int, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, float);
    UpdateStripePolygon(nn::vfx::Emitter*);
    Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::ShaderType, void*, nn::vfx::DrawParameterArg*);
    g_pStripeSystem;
};

} } } 
