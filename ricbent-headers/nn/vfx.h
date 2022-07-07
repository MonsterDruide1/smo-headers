#pragma once

namespace nn { namespace vfx {

EndianFlipCallbackImpl(nn::vfx::EndianFlipArg&);
BindReservedCustomShaderConstantBuffer(nn::vfx::RenderStateSetArg&);
BindEmitterPluginConstantBufferAuto(nn::vfx::RenderStateSetArg&);
InvokeRenderStateSetCallback(nn::vfx::RenderStateSetArg&);
InvokeEmitterInitializeCallback(nn::vfx::EmitterInitializeArg&);
InvokeParticleRemoveCallbackAll(nn::vfx::Emitter*);
InvokeEmitterFinalizeCallback(nn::vfx::EmitterFinalizeArg&);
DrawEmitterProfilerCallbackDefault(void (*)(nn::vfx::DrawEmitterProfilerArg&), nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::System*, nn::vfx::EmitterSet*, nn::vfx::Emitter*, bool, nn::vfx::ShaderType, bool, void*, int, nn::vfx::DrawParameterArg*);
DumpEmitterInformation(nn::vfx::Emitter*, int);

} } 
