#pragma once

class WaterRoadRailPosKeeper
{
public:
    WaterRoadRailPosKeeper(al::IUseRail*, int, float);
    tryMove();
    isMovePosEnd() const;
    setMovePosIdx(int);
    setSyncMovePosToNearestPos(sead::Vector3<float> const&);
    getMovePos() const;
    calcMoveCoord() const;
    tryCalcFrontDir(sead::Vector3<float>*);
    calcTouchPos(sead::Vector3<float> const&, float);
    calcNearestMovePos(sead::Vector3<float>*, sead::Vector3<float> const&);
    getMovePos(int) const;
};
