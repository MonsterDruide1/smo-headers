#pragma once

namespace al { 

class KeyPoseKeeper
{
public:
    KeyPoseKeeper();
    init(al::PlacementInfo const&);
    getKeyPose(int) const;
    getCurrentKeyPose() const;
    getNextKeyPose() const;
    calcNextPoseIndex() const;
    reset();
    next();
    isLastKey() const;
    reverse();
    isFirstKey() const;
    setMoveTypeLoop();
    setMoveTypeTurn();
    setMoveTypeStop();
    setMoveTypeRestart();
};

} 
