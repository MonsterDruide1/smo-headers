#pragma once

namespace nn { namespace g3d { namespace ResBoneAnim {

Initialize(nn::g3d::BoneAnimResult*, nn::g3d::ResBone const*) const;
Evaluate(nn::g3d::BoneAnimResult*, float) const;
Evaluate(nn::g3d::BoneAnimResult*, float, nn::g3d::AnimFrameCache*) const;

} } } 
