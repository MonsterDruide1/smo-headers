#pragma once

namespace al { namespace ICameraInput {

tryCalcSnapShotMoveStick(sead::Vector2<float>*) const;
isHoldSnapShotRollLeft() const;
isHoldSnapShotRollRight() const;
calcGyroPose(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;

} } 
