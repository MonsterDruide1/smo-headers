#pragma once

namespace nn { namespace vfx { namespace detail { 

class SuperStripeSystem
{
public:
    SuperStripeSystem(nn::vfx::Heap*, nn::vfx::System*, nn::vfx::BufferingMode, int);
    InitializeStripeEmitter(nn::vfx::EmitterInitializeArg&);
    EmitStripe(nn::vfx::ParticleCalculateArgImpl&);
    KillStripe(nn::vfx::ParticleCalculateArgImpl&);
    ParticleCalculateCallback(nn::vfx::ParticleCalculateArgImpl&);
    EmitterPostCalculateCallback(nn::vfx::EmitterPostCalculateArg&);
    EmitterDrawCallback(nn::vfx::EmitterDrawArg&);
    FinalizeStripeEmitter(nn::vfx::EmitterFinalizeArg&);
    ~SuperStripeSystem();
    InitializeSystem(nn::vfx::Heap*, nn::vfx::System*, nn::vfx::BufferingMode, int);
    FinalizeSystem(nn::vfx::Heap*);
    AllocStripeSystemVertexBuffer(nn::vfx::Emitter*);
    UpdateStripeColor(nn::vfx::ParticleCalculateArgImpl&, nn::vfx::detail::SuperStripeInstance*);
    CalculateStripe(nn::vfx::ParticleCalculateArgImpl&, nn::vfx::detail::SuperStripeInstance*);
    UpdateHistory(nn::vfx::ParticleCalculateArgImpl&, nn::vfx::detail::SuperStripeInstance*, nn::vfx::detail::ResStripeSuper*, bool);
    MakeStripePolygon(nn::vfx::detail::SuperStripeSystem::VertexAttribute*, nn::vfx::detail::SuperStripeInstance*, nn::vfx::Emitter const*, nn::vfx::detail::ResStripeSuper const*, float);
    MakeStripePolygonWithDivision(nn::vfx::detail::SuperStripeSystem::VertexAttribute*, nn::vfx::detail::SuperStripeInstance*, nn::vfx::Emitter const*, nn::vfx::detail::ResStripeSuper const*, float);
    CalculateDelayedStripe(nn::vfx::Emitter*);
    CalculateTextureOffsetUniform(nn::util::neon::Vector3fType*, nn::vfx::detail::ResStripeSuper const*, int, int, int, float);
    CalculateTextureOffsetDistanceBased(nn::util::neon::Vector3fType*, nn::vfx::detail::ResStripeSuper const*, int, float, float, float, nn::util::Float4 const&);
    MakeDefaultVertexAttribute(nn::vfx::detail::SuperStripeSystem::VertexAttribute*, int, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&, float);
    GetExtendedEndTimeForOneTimeEmitter(nn::vfx::Emitter*);
    GetActualSuperStripeCalclationCount(nn::vfx::Emitter const*);
    MakeConstantBufferObject(nn::vfx::detail::SuperStripeSystem::ConstantBufferObject*, nn::vfx::detail::ResStripeSuper const*, nn::vfx::detail::SuperStripeSystem::EmitterPluginUserData const*, nn::vfx::detail::SuperStripeInstance const*, nn::vfx::Emitter const*, nn::vfx::detail::StripeMeshType);
    GetWorkSize();
    GetProcessingStripeCount();
    g_pStripeSystem;
};

} } } 
