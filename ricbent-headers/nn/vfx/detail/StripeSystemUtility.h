#pragma once

namespace nn { namespace vfx { namespace detail { namespace StripeSystemUtility {

CalculateHermiteInterpolatedCurveVec<nn::vfx::detail::StripeSystem>(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::detail::StripeSystem::History const*, int, int, float);
DrawParticleStripeEmitter<nn::vfx::detail::StripeSystem>(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::System*, nn::vfx::Emitter*, nn::vfx::ShaderType, void*, nn::vfx::DrawParameterArg*);
DrawParticleStripe<nn::vfx::detail::StripeSystem>(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::TemporaryBuffer*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, nn::vfx::detail::StripeSystem::ResourceType const*, nn::vfx::detail::StripeSystem::EmitterPluginUserData const*, nn::vfx::detail::StripeSystem::StripeInstance const*);
CalculateDelayStripeCount(nn::vfx::Emitter const*, int);
SetupDefaultShaderSetting(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::ShaderType, nn::vfx::detail::Shader*, void*, nn::vfx::DrawParameterArg*);
CalculateHermiteInterpolatedCurveVec<nn::vfx::detail::SuperStripeSystem>(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::detail::SuperStripeSystem::History const*, int, int, float);
DrawParticleStripeEmitter<nn::vfx::detail::SuperStripeSystem>(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::System*, nn::vfx::Emitter*, nn::vfx::ShaderType, void*, nn::vfx::DrawParameterArg*);
DrawParticleStripe<nn::vfx::detail::SuperStripeSystem>(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::TemporaryBuffer*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, nn::vfx::detail::SuperStripeSystem::ResourceType const*, nn::vfx::detail::SuperStripeSystem::EmitterPluginUserData const*, nn::vfx::detail::SuperStripeSystem::StripeInstance const*);

} } } } 
