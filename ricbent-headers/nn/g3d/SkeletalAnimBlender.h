#pragma once

namespace nn { namespace g3d { namespace SkeletalAnimBlender {

ApplyToImpl<nn::g3d::AxesToMtx, (nn::g3d::SkeletalAnimBlender::BlendMode)0>(nn::g3d::SkeletonObj*) const;
ApplyToImpl<nn::g3d::AxesToMtx, (nn::g3d::SkeletalAnimBlender::BlendMode)1>(nn::g3d::SkeletonObj*) const;
ApplyToImpl<nn::g3d::QuatToMtx, (nn::g3d::SkeletalAnimBlender::BlendMode)0>(nn::g3d::SkeletonObj*) const;
ApplyToImpl<nn::g3d::QuatToMtx, (nn::g3d::SkeletalAnimBlender::BlendMode)1>(nn::g3d::SkeletonObj*) const;
Initialize(nn::g3d::SkeletalAnimBlender::InitializeArgument const&, void*, unsigned long);
ClearResult();
Blend(nn::g3d::SkeletalAnimObj*, float);
ApplyTo(nn::g3d::SkeletonObj*) const;

} } } 
