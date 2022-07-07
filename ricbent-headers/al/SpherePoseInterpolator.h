#pragma once

namespace al { namespace SpherePoseInterpolator {

startInterp(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::Quat<float> const&, sead::Quat<float> const&, float);
nextStep();
calcInterpPos(sead::Vector3<float>*) const;
calcInterp(sead::Vector3<float>*, float*, sead::Quat<float>*, sead::Vector3<float>*) const;
calcRemainMoveVector(sead::Vector3<float>*) const;
calcRadiusBaseScale(float) const;
getMoveVector(sead::Vector3<float>*);

} } 
