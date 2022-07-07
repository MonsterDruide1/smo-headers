#pragma once

namespace sead { namespace Matrix33CalcCommon<float> {

inverse(sead::BaseMtx33<float>&, sead::BaseMtx33<float> const&);
slerpTo(sead::BaseMtx33<float>&, sead::BaseMtx33<float> const&, sead::BaseMtx33<float> const&, float);
toQuat(sead::BaseQuat<float>&, sead::BaseMtx33<float> const&);

} } 
