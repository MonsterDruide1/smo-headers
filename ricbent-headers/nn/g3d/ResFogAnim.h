#pragma once

namespace nn { namespace g3d { namespace ResFogAnim {

Initialize(nn::g3d::FogAnimResult*) const;
Bind(nn::g3d::BindFuncTable const&);
Release();
Evaluate(nn::g3d::FogAnimResult*, float) const;
Evaluate(nn::g3d::FogAnimResult*, float, nn::g3d::AnimFrameCache*) const;
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
