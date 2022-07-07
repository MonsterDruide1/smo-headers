#pragma once

namespace nn { namespace g3d { namespace ResShapeAnim {

PreBind(nn::g3d::ResModel const*);
BindCheck(nn::g3d::ResModel const*) const;
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
