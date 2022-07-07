#pragma once

namespace nn { namespace vfx { namespace Emitter {

TransformToLocalVec(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType const&, int) const;
Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::EmitterSet*, nn::vfx::EmitterResource const*, int, nn::vfx::Heap*, nn::vfx::Emitter*);
ResourceUpdate(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*);
Reset();
ReleaseBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
InitializeCustomConstantBuffer(int, unsigned long);
InitializeCustomAttribute(int, unsigned long);
CheckParticleAttributeDoubleBufferingState();
CalculateRequiredParticleAsignmentCount(nn::vfx::Emitter const*) const;
CreateResMatrix();
Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool);
UpdateByEmit(float*);
SwapBuffer(nn::vfx::BufferSwapMode);
IsRequestFrameBufferTexture() const;
IsRequestDepthTexture() const;
SetDrawPath(unsigned int);
IsManualEmitterReadyToExit() const;
SetColor0(nn::util::neon::Vector4fType const&);
SetColor1(nn::util::neon::Vector4fType const&);
CalculatePreciseParticleCount() const;

} } } 
