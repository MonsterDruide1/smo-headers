#pragma once

namespace nn { namespace vfx { namespace detail { 

class EmitterCalculator
{
public:
    EmitterCalculator(nn::vfx::System*);
    ~EmitterCalculator();
    ApplyEmitterAnimation(nn::vfx::Emitter*, nn::util::neon::MatrixRowMajor4x3fType*, nn::util::neon::MatrixRowMajor4x3fType*);
    TryEmitParticle(float*, float*, float*, unsigned char*, nn::vfx::Emitter*, float, bool);
    UpdateEmitterLocalVec(nn::util::neon::Vector3fType*, nn::vfx::Emitter*) const;
    UpdateCurrentParticleGpuBufferForCpuEmitter(nn::vfx::Emitter*);
    UpdateEmitterMatrix(nn::vfx::Emitter*);
    Calculate(nn::vfx::Emitter*, float, nn::vfx::BufferSwapMode, bool, bool, bool);
    CalculateParticle(nn::vfx::Emitter*);
    MakeDynamicConstantBuffer(nn::vfx::Emitter*, float);
    SetDefaultEmitterTextures(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, nn::vfx::DrawParameterArg*);
    SetDefaultEmitterConstantBuffers(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, nn::vfx::DrawParameterArg*);
    CalculateComputeShader(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::detail::ComputeShader const*, int, bool, void*, bool);
    Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, void*, nn::vfx::DrawParameterArg*);
    DrawEmitterUsingBoundShader(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, void*, nn::vfx::DrawParameterArg*);
    EntrySortedParticle(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::detail::Shader*, nn::vfx::IPrimitive*, nn::vfx::DrawParameterArg*);
    CalculateParticleInfo(nn::vfx::detail::Particle*, nn::vfx::Emitter*, float, float, int);
    InheritParentParticleInfo(nn::vfx::Emitter*, int);
    EmitBySearchOrder(unsigned char*, nn::vfx::Emitter*, int, bool, nn::vfx::EmitReservationInfo const*);
    InitializeParticle(nn::vfx::Emitter*, int, nn::vfx::detail::ParticleData*, nn::vfx::detail::ParentParticleData*, nn::vfx::detail::ParticleProperty*, int, int, int, float, nn::vfx::EmitReservationInfo const*);
    Emit(unsigned char*, nn::vfx::Emitter*, int, bool, nn::vfx::EmitReservationInfo const*);
    CalculateEmitPoint(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitCircle(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitCircleEquallyDivided(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitCircleFill(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitSphere(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitSphereEqually32Divided(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitSphereEqually64Divided(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitSphereFill(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitCylinder(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitCylinderFill(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitBox(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitBoxFill(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitLine(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitLineEquallyDivided(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitRectangle(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateEmitPrimitive(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, int, float, nn::vfx::EmitterAnimValue*);
    CalculateField8KeyAnim(nn::util::Float3*, nn::vfx::Emitter const*, nn::vfx::detail::ResAnim8KeyParamSet const&, int, float);
    Calculate8KeyAnim(nn::util::Float3*, nn::vfx::detail::ResAnim8KeyParam const&, int, float, float, float, float, float);
    CalculateParticleBehaviorFieldGpuNoise(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int, float);
    CalculateParticleBehaviorFieldRandomSimple(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, int, float);
    CalculateParticleBehaviorFieldMagnet(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int, float);
    CalculateParticleBehaviorFieldSpin(nn::util::neon::Vector3fType*, nn::vfx::Emitter const*, nn::vfx::detail::ParticleProperty*, int, float);
    CalculateParticleBehaviorFieldCollision(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, float*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty*, int, nn::vfx::detail::ParticleData*, float);
    CalculateParticleBehaviorFieldConvergence(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int, float);
    CalculateParticleBehaviorFieldPosAdd(nn::util::neon::Vector3fType*, nn::vfx::Emitter*, nn::vfx::detail::ParticleProperty const*, int, float);
    CalculateParticleBehavior(nn::util::neon::Vector3fType*, nn::util::neon::Vector3fType*, float*, float*, nn::vfx::Emitter*, int, float, nn::util::neon::Vector3fType const&, nn::util::neon::Vector3fType const&);
    CalculateParticleScaleVecFromTime(nn::util::neon::Vector3fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&, float, float);
    CalculateParticleScaleVecFromFrame(nn::util::neon::Vector3fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&, float, float);
    CalculateParticleColor0VecFromTime(nn::util::neon::Vector4fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&, nn::util::neon::Vector3fType const&, float, float, float);
    CalculateParticleColor0RawValue(nn::util::neon::Vector4fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, float, float);
    CalculateParticleColor1VecFromTime(nn::util::neon::Vector4fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&, nn::util::neon::Vector3fType const&, float, float, float);
    CalculateParticleColor1RawValue(nn::util::neon::Vector4fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, float, float);
    CalculateRotationMatrix(nn::util::neon::Vector3fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&, nn::util::neon::Vector4fType const&, float);
    CalculateRotationMatrix(nn::util::neon::Vector3fType*, nn::vfx::EmitterResource const*, nn::util::neon::Vector4fType const&);
    MakeRotationMatrixXYZ(nn::util::neon::MatrixRowMajor4x4fType*, nn::util::neon::Vector3fType const&);
    g_EmitFunctions;
};

} } } 
