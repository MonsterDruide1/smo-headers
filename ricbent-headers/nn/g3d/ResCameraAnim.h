#pragma once

namespace nn { namespace g3d { namespace ResCameraAnim {

Initialize(nn::g3d::CameraAnimResult*) const;
Evaluate(nn::g3d::CameraAnimResult*, float) const;
Evaluate(nn::g3d::CameraAnimResult*, float, nn::g3d::AnimFrameCache*) const;
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
