#pragma once

namespace al { namespace SphereInterpolator {

startInterp(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float);
nextStep();
calcInterpPos(sead::Vector3<float>*) const;
calcInterp(sead::Vector3<float>*, float*, sead::Vector3<float>*) const;
calcRemainMoveVector(sead::Vector3<float>*) const;
getMoveVector(sead::Vector3<float>*);
calcStepMoveVector(sead::Vector3<float>*) const;

} } 
