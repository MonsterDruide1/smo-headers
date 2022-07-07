#pragma once

namespace GunetterKeyMover {

tryCreate(al::ActorInitInfo const&);
initMinMoveCoord(float);
setupClippingInfo(al::LiveActor*, al::ActorInitInfo const&);
move();
calcIncludeSectionKeyIndex() const;
calcMoveSpeed() const;
isTurn() const;
changeSection(int);
calcCoord(float) const;
calcTrans(sead::Vector3<float>*, float) const;
calcSideDir(sead::Vector3<float>*, float) const;
isLoop() const;
isRestart() const;

} 
