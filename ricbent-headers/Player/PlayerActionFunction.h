#pragma once

namespace PlayerActionFunction {

accel(float, float, float);
brake(float, unsigned int, float);
brakeLimit(float, unsigned int, float, float);
calcJumpSpeed(float, float, float, float, float);
isOppositeDir(sead::Vector3<float> const&, sead::Vector3<float> const&);
isOppositeVec(sead::Vector3<float> const&, sead::Vector3<float> const&);
calcStickPow(float);

} 
