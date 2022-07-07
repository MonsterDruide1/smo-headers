#pragma once

namespace nn { namespace g3d { namespace ResPerMaterialAnim {

EvaluateShaderParamAnim<true>(void*, float, unsigned short const*, nn::g3d::AnimFrameCache*) const;
EvaluateShaderParamAnim<false>(void*, float, unsigned short const*, nn::g3d::AnimFrameCache*) const;
EvaluateTexturePatternAnim<true>(int*, float, unsigned short const*, nn::g3d::AnimFrameCache*) const;
EvaluateTexturePatternAnim<false>(int*, float, unsigned short const*, nn::g3d::AnimFrameCache*) const;
EvaluateVisibilityAnim<true>(int*, float, nn::g3d::AnimFrameCache*) const;
EvaluateVisibilityAnim<false>(int*, float, nn::g3d::AnimFrameCache*) const;
PreBind(nn::g3d::ResMaterial const*);
BindCheck(nn::g3d::ResMaterial const*) const;

} } } 
