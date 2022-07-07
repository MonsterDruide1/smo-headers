#pragma once

namespace nn { namespace vfx { namespace detail { namespace AreaLoopSystem {

Initialize(nn::vfx::System*);
EmitterInitializeCallback(nn::vfx::EmitterInitializeArg&);
EmitterDrawCallback(nn::vfx::EmitterDrawArg&);
RenderStateSetCallback(nn::vfx::RenderStateSetArg&);
Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::ShaderType, void*, nn::vfx::DrawParameterArg*);

} } } } 
