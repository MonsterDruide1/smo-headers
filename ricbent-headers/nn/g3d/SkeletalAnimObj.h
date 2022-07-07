#pragma once

namespace nn { namespace g3d { 

class SkeletalAnimObj
{
public:
    CalculateImpl<nn::g3d::QuatToAxes, false>();
    CalculateImpl<nn::g3d::QuatToAxes, true>();
    CalculateImpl<nn::g3d::EulerToAxes, false>();
    CalculateImpl<nn::g3d::EulerToAxes, true>();
    ApplyToImpl<nn::g3d::QuatToMtx>(nn::g3d::SkeletonObj*) const;
    ApplyToImpl<nn::g3d::EulerToMtx>(nn::g3d::SkeletonObj*) const;
    Initialize(nn::g3d::SkeletalAnimObj::InitializeArgument const&, void*, unsigned long);
    SetResource(nn::g3d::ResSkeletalAnim const*);
    Bind(nn::g3d::ResSkeleton const*);
    BindImpl(nn::g3d::ResSkeleton const*);
    ClearResult(nn::g3d::ResSkeleton const*);
    Bind(nn::g3d::SkeletonObj const*);
    Bind(nn::g3d::ResModel const*);
    Bind(nn::g3d::ModelObj const*);
    Bind(nn::g3d::ResSkeleton const*, nn::g3d::ResSkeleton const*);
    InitRetargeting(nn::g3d::ResSkeleton const*, nn::g3d::ResSkeleton const*);
    Bind(nn::g3d::SkeletonObj const*, nn::g3d::SkeletonObj const*);
    Bind(nn::g3d::ResModel const*, nn::g3d::ResModel const*);
    Bind(nn::g3d::ModelObj const*, nn::g3d::ModelObj const*);
    BindFast(nn::g3d::ResSkeleton const*);
    BindFast(nn::g3d::ResModel const*);
    BindFast(nn::g3d::ResSkeleton const*, nn::g3d::ResSkeleton const*);
    BindFast(nn::g3d::ResModel const*, nn::g3d::ResModel const*);
    ClearResult();
    SetBindFlag(nn::g3d::ResSkeleton const*, int, nn::g3d::AnimObj::BindFlag);
    Calculate();
    ApplyTo(nn::g3d::ModelObj*) const;
    ApplyTo(nn::g3d::SkeletonObj*) const;
    ~SkeletalAnimObj();
};

} } 
