#pragma once

namespace nn { namespace vfx { namespace detail { 

class StripeSystem
{
public:
    StripeSystem(nn::vfx::Heap*, nn::vfx::System*, nn::vfx::BufferingMode, int);
    InitializeStripeEmitter(nn::vfx::EmitterInitializeArg&);
    EmitStripe(nn::vfx::ParticleCalculateArgImpl&);
    KillStripe(nn::vfx::ParticleCalculateArgImpl&);
    ParticleCalculateCallback(nn::vfx::ParticleCalculateArgImpl&);
    EmitterPostCalculateCallback(nn::vfx::EmitterPostCalculateArg&);
    EmitterDrawCallback(nn::vfx::EmitterDrawArg&);
    FinalizeStripeEmitter(nn::vfx::EmitterFinalizeArg&);
    ~StripeSystem();
    InitializeSystem(nn::vfx::Heap*, nn::vfx::System*, nn::vfx::BufferingMode, int);
    FinalizeSystem(nn::vfx::Heap*);
    AllocStripeSystemVertexBuffer(nn::vfx::Emitter*);
    UpdateStripeColor(nn::vfx::ParticleCalculateArgImpl&, nn::vfx::detail::StripeSystem::StripeInstance*);
    MakeStripePolygon(nn::vfx::detail::StripeSystem::StripeInstance*, nn::vfx::detail::ResStripeHistory*, nn::vfx::detail::StripeSystem::VertexAttribute*, float, float);
    MakeStripePolygonWithDivision(nn::vfx::detail::StripeSystem::StripeInstance*, nn::vfx::detail::ResStripeHistory*, nn::vfx::detail::StripeSystem::VertexAttribute*, float, float);
    GetExtendedEndTimeForOneTimeEmitter(nn::vfx::Emitter*);
    GetActualStripeCalclationCount(nn::vfx::Emitter const*);
    MakeConstantBufferObject(nn::vfx::detail::StripeSystem::ConstantBufferObject*, nn::vfx::detail::ResStripeHistory const*, nn::vfx::detail::StripeSystem::EmitterPluginUserData const*, nn::vfx::detail::StripeSystem::StripeInstance const*, nn::vfx::Emitter const*, nn::vfx::detail::StripeMeshType);
    CalculateStripe(nn::vfx::ParticleCalculateArgImpl&, nn::vfx::detail::StripeSystem::StripeInstance*);
    CalculateDelayedStripe(nn::vfx::Emitter*);
    g_pStripeSystem;
};

} } } 
