#pragma once

namespace al { 

class RailRider
{
public:
    RailRider(al::Rail const*);
    moveToRailStart();
    move();
    syncPosDir();
    setCoord(float);
    moveToRailPoint(int);
    moveToRailEnd();
    moveToBegin();
    moveToGoal();
    moveToNearestRail(sead::Vector3<float> const&);
    reverse();
    setMoveGoingStart();
    setMoveGoingEnd();
    setSpeed(float);
    addSpeed(float);
    scaleSpeed(float);
    isReachedGoal() const;
    isReachedRailEnd() const;
    isReachedRailStart() const;
    isReachedEdge() const;
};

} 
