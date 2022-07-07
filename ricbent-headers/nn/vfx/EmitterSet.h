#pragma once

namespace nn { namespace vfx { namespace EmitterSet {

Initialize(int, int, int, int, int, nn::vfx::Heap*);
ResetCommon();
CreateEmitter(nn::vfx::EmitterResource const*, int, nn::vfx::Emitter*, int);
Reset();
FinalizeEmitterList(nn::vfx::Emitter*);
Finalize();
ForceCalculate(int);
Calculate(float, nn::vfx::BufferSwapMode, bool, nn::vfx::EmitterCalculationResult (*)(nn::vfx::EmitterCalculateLodArg&));
RequiredProcessOnCalculate();
Calculate(float, nn::vfx::BufferSwapMode, nn::vfx::EmitterCalculationResult (*)(nn::vfx::EmitterCalculateLodArg&));
CalculateEmitter(nn::vfx::Emitter*, nn::vfx::BufferSwapMode, bool, nn::vfx::EmitterCalculationResult (*)(nn::vfx::EmitterCalculateLodArg&));
KillEmitter(nn::vfx::Emitter*);
DrawChildEmitter(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool, nn::vfx::Emitter*, unsigned int, bool, void*, nn::vfx::DrawParameterArg*, bool (*)(nn::vfx::EmitterDrawCullArg&), void (*)(nn::vfx::DrawEmitterProfilerArg&));
DrawEmitter(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, unsigned int, bool, void*, nn::vfx::DrawParameterArg*, bool (*)(nn::vfx::EmitterDrawCullArg&), void (*)(nn::vfx::DrawEmitterProfilerArg&));
Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, unsigned int, bool, void*, bool (*)(nn::vfx::EmitterDrawCullArg&), void (*)(nn::vfx::DrawEmitterProfilerArg&));
Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int, bool, void*, nn::vfx::DrawParameterArg*, bool (*)(nn::vfx::EmitterDrawCullArg&), void (*)(nn::vfx::DrawEmitterProfilerArg&));
AddEmitterToList(nn::vfx::Emitter*, nn::vfx::Emitter*);
KillEmitterImpl(nn::vfx::Emitter*);
RemoveEmitterFromList(nn::vfx::Emitter*);
Fade();
UpdateFromResource(nn::vfx::EmitterResource*);
SetEmissionRatioScale(float);
SetEmissionIntervalScale(float);
SetParticleLifeScale(float);
SetMatrix(nn::util::neon::MatrixRowMajor4x3fType const&);
SetPos(nn::util::neon::Vector3fType const&);
Kill(bool);
KillInfinityEmitter();
IsHaveInfinityEmitter() const;
GetAliveEmitter(int) const;
SetEmitterVisible(char const*, bool);
EmitParticle(nn::util::neon::Vector3fType const&, void*);
EmitParticle(nn::util::neon::MatrixRowMajor4x3fType const&, void*);
SetEmitterColor(nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&);
SetEmitterColor0(nn::util::neon::Vector4fType const&);
SetEmitterColor1(nn::util::neon::Vector4fType const&);
SetManualParticleEmissionWithParticleCount(int);
OverwriteCustomActionCallbackSet(nn::vfx::CallbackSet*);
SetEmitterSetRandomSeed(unsigned int);

} } } 
