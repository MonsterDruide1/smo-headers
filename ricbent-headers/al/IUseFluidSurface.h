#pragma once

namespace al { namespace IUseFluidSurface {

calcDisplacementPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
setFieldScale(float);
calcPosFlat(sead::Vector3<float>*, sead::Vector3<float> const&) const;
tryAddRipple(sead::Vector3<float> const&, float, float);
tryAddRippleWithRange(sead::Vector3<float> const&, float, float, float, float);
tryAddQuadRipple(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);

} } 
