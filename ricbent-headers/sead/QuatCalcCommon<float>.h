#pragma once

namespace sead { namespace QuatCalcCommon<float> {

slerpTo(sead::BaseQuat<float>&, sead::BaseQuat<float> const&, sead::BaseQuat<float> const&, float);
calcRPY(sead::BaseVec3<float>&, sead::BaseQuat<float> const&);
slerpToIdx(sead::BaseQuat<float>&, sead::BaseQuat<float> const&, sead::BaseQuat<float> const&, float);

} } 
