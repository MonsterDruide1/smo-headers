#pragma once

namespace nn { namespace g3d { namespace ResSkeletalAnim {

PreBind(nn::g3d::ResSkeleton const*);
BindCheck(nn::g3d::ResSkeleton const*) const;
BakeCurve(void*, unsigned long);
ResetCurve();
Reset();

} } } 
