#pragma once

namespace nn { namespace g3d { namespace ResLightAnim {

Initialize(nn::g3d::LightAnimResult*) const;
Bind(nn::g3d::BindFuncTable const&);
Release();
Evaluate(nn::g3d::LightAnimResult*, float) const;
Evaluate(nn::g3d::LightAnimResult*, float, nn::g3d::AnimFrameCache*) const;
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
