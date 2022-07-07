#pragma once

namespace nn { namespace g3d { namespace ResAnimCurve {

FindFrame<float>(nn::g3d::AnimFrameCache*, float) const;
FindFrame<short>(nn::g3d::AnimFrameCache*, float) const;
FindFrame<unsigned char>(nn::g3d::AnimFrameCache*, float) const;
EvaluateCubic<float>(float, nn::g3d::AnimFrameCache*) const;
EvaluateCubic<short>(float, nn::g3d::AnimFrameCache*) const;
EvaluateCubic<signed char>(float, nn::g3d::AnimFrameCache*) const;
EvaluateLinear<float>(float, nn::g3d::AnimFrameCache*) const;
EvaluateLinear<short>(float, nn::g3d::AnimFrameCache*) const;
EvaluateLinear<signed char>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedFloat<float>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedFloat<short>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedFloat<signed char>(float, nn::g3d::AnimFrameCache*) const;
EvaluateStepInt<int>(float, nn::g3d::AnimFrameCache*) const;
EvaluateStepInt<short>(float, nn::g3d::AnimFrameCache*) const;
EvaluateStepInt<signed char>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedInt<int>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedInt<short>(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedInt<signed char>(float, nn::g3d::AnimFrameCache*) const;
EvaluateStepBool(float, nn::g3d::AnimFrameCache*) const;
EvaluateBakedBool(float, nn::g3d::AnimFrameCache*) const;
EvaluateFloat(float, nn::g3d::AnimFrameCache*) const;
WrapFrame(float*, float) const;
EvaluateInt(float, nn::g3d::AnimFrameCache*) const;
UpdateFrameCache(nn::g3d::AnimFrameCache*, float) const;
BakeImpl<bool>(void*, float, int);
BakeImpl<float>(void*, float, int);
BakeFloat(void*, unsigned long);
CalculateBakedFloatSize() const;
BakeInt(void*, unsigned long);
BakeImpl<signed char>(void*, float, int);
BakeImpl<short>(void*, float, int);
BakeImpl<int>(void*, float, int);
CalculateBakedIntSize() const;
ResetFloat();
ResetInt();

} } } 
