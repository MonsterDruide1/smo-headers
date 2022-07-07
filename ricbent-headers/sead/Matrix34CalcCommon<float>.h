#pragma once

namespace sead { namespace Matrix34CalcCommon<float> {

inverse(sead::BaseMtx34<float>&, sead::BaseMtx34<float> const&);
toQuat(sead::BaseQuat<float>&, sead::BaseMtx34<float> const&);
multiply(sead::BaseMtx34<float>&, sead::BaseMtx33<float> const&, sead::BaseMtx34<float> const&);
slerpTo(sead::BaseMtx34<float>&, sead::BaseMtx34<float> const&, sead::BaseMtx34<float> const&, float);

} } 
